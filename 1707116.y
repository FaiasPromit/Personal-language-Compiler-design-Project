%{
    #include <stdio.h>
    void yyerror(char *);
    int yylex(void);
	extern FILE *yyin;
	extern FILE *yyout;
	#include <math.h>
	int ttt=1,val,switch_checker_variable=0;  /* ttt=table top tracker */
	typedef struct entry {
    	char *str;
    	int n;
	}struct_name;
	struct_name table[1000];
	void insert (struct_name *p, char *s, int n);
	void struct_table_checker();
	int key_table(char *key);
%}
%union
{
        int number;
        char *string;
}
/* BISON Declarations */
/* terminals are declared after token and non-terminals are declared after toke */
%start program
%token <number> NUM
%token <string> VAR
%token <string> IF ELIF ELSE FUNCTION INT FLOAT DOUBLE CHAR L1 R1 L2 R2 CM SM PLUS MINUS MULTIPLICATION DIVISION POWER FACTORIAL EQUAL FOR FROM TO COL WHILE BREAK COLON Default_option CASE SWITCH INC DEC NOT LOGIC funcustom
%type <string> statement
%type <number> expression
%type <number> Switch_expression
/*when shift-reduce conflict happens, yacc shifts. that is why in modern days, else follows the recent if. to remove the warning message and also to
ignore the minimum probability of conflict , if is given higher precedence that elif and else*/
%nonassoc IFX
%nonassoc ELIFX
%nonassoc ELSE
%left LT GT LE GE
%left PLUS MINUS
%left MULTIPLICATION DIVISION
%left FACTORIAL
%left POWER

/* Simple grammar rules */

%%

program: FUNCTION L1 R1 L2 cProgram R2 {  struct_table_checker();
                                            printf("\nSuccessful compilation of your program!! Congratulations !! \n"); }
	 ;

cProgram: /* empty line*/

	| cProgram statement

	| cProgram declaration_part
	;

declaration_part:	TYPE ID1 SM	{ printf("\nvalid declaration\n"); }

			;



TYPE : INT

     | FLOAT

     | CHAR
     ;

ID1  : ID1 CM VAR	{
						if(key_table($3))
						{
							printf("\n%s is already declared\n", $3 );
						}
						else
						{
							insert(&table[ttt],$3, ttt);
							printf("\nprint %s under id1 cm var, storing in the %d position of the table table",$3,ttt);
							ttt++;


						}
			}

     |VAR	{
				if(key_table($1))
				{
					printf("\n%s is already declared\n", $1 );
				}
				else
				{
					insert(&table[ttt],$1, ttt);
							printf("\nprint %s under var, storing in the %d position of the table table",$1,ttt);
							ttt++;
				}
			}
     ;
     /* display is showing according to bottom up parsing */

statement: SM

        | expression SM 			{ printf("\nvalue of expression: %d\n", ($1)); }

        | VAR EQUAL expression SM 		{
							if(key_table($1)){  /*returns 1 if variable is already in the structure */
								int i = key_table($1);  /*returns the value of the variable */
								if (!i){
									insert(&table[ttt], $1, $3);
									ttt++;
								}
								table[i].n = $3;
								printf("\n(%s) Value of the variable: %d\t\n",$1,$3);
							}
							else {
								printf("%s not declared yet\n",$1);
							}

						}



    /* %prec means that IF has the same precedence as IFX precedence. */
    /* %prec also ensures that one if cannot have multiple else */

/*simple if condition starts*/
        | IF L1 expression R1 L2 expression SM R2 %prec IFX {
								if($3)
								{
									printf("\nvalue of expression in IF: %d\n",($6));
								}
								else
								{
									printf("\ncondition value zero in IF block\n");
								}
							}
/*simple if condition ends */
/*if-else statement starts*/
        | IF L1 expression R1 L2 expression SM R2 ELSE L2 expression SM R2 {
								 	if($3)
									{
										printf("\nvalue of expression in IF: %d\n",$6);
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",$11);
									}
								   }
/*if-else ends*/

/* if {if-else} else starts */
        | IF L1 expression R1 L2 IF L1 expression R1 L2 expression SM R2 ELSE L2 expression SM R2 expression SM R2 ELSE L2 expression SM R2 %prec IFX {
								 	if($3)
									{
										if($8)
											printf("\nvalue of expression middle IF: %d\n",$11);
                                        else
                                            printf("\nvalue of expression in middle ELSE: %d\n",$16);
										printf("\nvalue of expression in first IF: %d\n",$19);
									}
									else
									{
										printf("\nvalue of expression in else: %d\n",$24);
									}
								   }
/* if {if-else} else ends */

/*if {if-elif-else} else starts*/
        | IF L1 expression R1 L2 IF L1 expression R1 L2 expression SM R2 ELIF L1 expression R1 L2 expression SM R2 ELSE L2 expression SM R2 expression SM R2 ELSE L2 expression SM R2 %prec IFX {
								 	if($3)
									{
										if($8)
											printf("\nvalue of expression middle IF: %d\n",$11);
                                        else if($16)
                                            printf("\nvalue of expression in middle ELIF: %d\n",$19);
										else
											printf("\nvalue of expression middle ELSE: %d\n",$24);
										printf("\nvalue of expression in first IF: %d\n",$27);
									}
									else
									{
										printf("\nvalue of expression in else: %d\n",$32);
									}
								   }
/*if {if-elif-else} else ends*/

/* if {if-elif-else} starts */
        | IF L1 expression R1 L2 expression SM R2 ELIF L1 expression R1 L2 expression SM R2 ELSE L2 expression SM R2 {
								 	if($3)
									{
										printf("\nvalue of expression in IF: %d\n",$6);
									}
									else if($11)
									{
										printf("\nvalue of expression in ELIF: %d\n",$14);
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",$19);
									}
								   }
/* if {if-elif-else} ends */

/* for loop starts */
        | FOR L1 FROM NUM TO NUM R1 L2 expression R2     {
                                    int i;
                                    printf("\n");
                                    for(i=$4;i<=$6;i++)
                                        printf("for loop statement for %d\n",i);
                                    printf("\n");
                                    }

/* for loop ends */

/* while loop starts */
        | WHILE L1 NUM GT NUM R1 L2 expression R2   {
										int i=$5;
										printf("While LOOP: ");
										while($3>i)
                                            printf("%d ",i++);
										printf("\n");
										printf("value of the expression: %d\n",$8);

	}
        | WHILE L1 NUM LT NUM R1 L2 expression R2   {
										int i=$5;
										printf("While LOOP: ");
										while($3<i)
                                            printf("%d ",i--);
										printf("\n");
										printf("value of the expression: %d\n",$8);

	}
        | WHILE L1 NUM GE NUM R1 L2 expression R2   {
										int i=$5;
										printf("While LOOP: ");
										while($3>=i)
                                            printf("%d ",i++);
										printf("\n");
										printf("value of the expression: %d\n",$8);

	}
        | WHILE L1 NUM LE NUM R1 L2 expression R2   {
										int i=$5;
										printf("While LOOP: ");
										while($3<=i)
                                            printf("%d ",i--);
										printf("\n");
										printf("value of the expression: %d\n",$8);

	}
/* while loop ends */
/* custom function starts */

        | funcustom COL TYPE L1 R1 L2 statement R2{
								printf("CUSTOM Function Declared\n");
							}

/* custom function ends */

/*switch starts */

        | SWITCH L1 Switch_expression R1 L2 Base_expression R2    {printf("SWITCH CASE compiled successfully !!\n\n");}

     /* val is used to keep the value which option meets the condition  */

        Switch_expression: NUM				{ $$ = $1; val = $$;	}

                        | VAR				{ $$ = key_table($1); val = $$;}

                        | Switch_expression PLUS Switch_expression	{ $$ = $1 + $3; val = $$; }

                        | Switch_expression MINUS Switch_expression	{ $$ = $1 - $3; val = $$; }

                        | Switch_expression MULTIPLICATION Switch_expression	{ $$ = $1 * $3;  val = $$;}

                        | Switch_expression DIVISION Switch_expression	{ 	if($3)
                                            {
                                                    $$ = $1 / $3; val = $$;
                                            }
                                            else
                                            {
                                                $$ = 0;
                                                 val = $$;
                                            }
                                            }
                        | Switch_expression POWER Switch_expression { $$ = pow($1,$3);  val = $$;}

                        | Switch_expression FACTORIAL {
                                            int mult=1 ,i;
                                            for(i=$1;i>0;i--)
                                            {
                                                mult=mult*i;
                                            }
                                            $$=mult; val = $$;

                                         }

                        | Switch_expression LT Switch_expression	{ $$ = $1 < $3; val = $$; }

                        | Switch_expression GT Switch_expression	{ $$ = $1 > $3;  val = $$;}

                        | Switch_expression GE Switch_expression	{ $$ = $1 >= $3;  val = $$;}

                        | Switch_expression LE Switch_expression	{ $$ = $1 <= $3; val = $$; }

                        | L1 Switch_expression R1		{ $$ = $2;	 val = $$;}

                        | INC Switch_expression INC         { $$=$2+1; printf("inc: %d\n",$$); val = $$;}

                        | DEC Switch_expression DEC         { $$=$2-1; printf("dec: %d\n",$$); val = $$;}

                        | NOT Switch_expression NOT {
                                            if($2 != 0)
                                            {
                                                $$ = 0; val = $$;
                                            }
                                            else{
                                                $$ = 1 ; val = $$;
                                            }
                                        }
                        ;
        Base_expression : Base_statement

                     | Base_statement Default_statement
                     ;

        Base_statement   : /*NULL*/

                     | Base_statement Case_statement
                     ;
        /* infinitive option is available */

        Case_statement    : CASE NUM COL expression SM   {

                            if(val==$2){
                                  switch_checker_variable=1;
                                  printf("\nCase No : %d  and Result :  %d\n",$2,$4);
                            }
                        }
                     ;

        Default_statement    : Default_option COL expression SM    {
                            if(switch_checker_variable!=1)
                                printf("\nResult in default Value is :  %d\n",$3);
                            switch_checker_variable=0;
                        }
                     ;


/* switch ends */


expression: NUM				{ $$ = $1; 	}

        | VAR				{ $$ = key_table($1); printf("Variable value: %d",$$)}

        | expression PLUS expression	{ $$ = $1 + $3; }

        | expression MINUS expression	{ $$ = $1 - $3; }

        | expression MULTIPLICATION expression	{ $$ = $1 * $3; }

        | expression DIVISION expression	{ 	if($3)
				  		{
				     			$$ = $1 / $3;
				  		}
				  		else
				  		{
							$$ = 0;
							printf("\ndivision by zero\t");
				  		}
				    	}
        | expression POWER expression { $$ = pow($1,$3); }

        | expression FACTORIAL {
						int mult=1 ,i;
						for(i=$1;i>0;i--)
						{
							mult=mult*i;
						}
						$$=mult;

					 }

        | expression LT expression	{ $$ = $1 < $3; }

        | expression GT expression	{ $$ = $1 > $3; }

        | L1 expression R1		{ $$ = $2;	}

        | INC expression INC         { $$=$2+1; printf(" inc: %d\n",$$);}

        | DEC expression DEC         { $$=$2-1; printf(" dec: %d\n",$$);}

        | NOT expression NOT {
						if($2 != 0)
						{
							$$ = 0; printf(" not: %d\n",$$);
						}
						else{
							$$ = 1 ; printf(" aff: %d\n",$$);
						}
					}
            ;






%%

 /* custom functions */

void insert(struct_name *p, char *s, int n)
{
  p->str = s;
  p->n = n;
}


int key_table(char *key)
{
    int i = 1;
    char *name = table[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return table[i].n;
        name = table[++i].str;
    }
    return 0;
}
void struct_table_checker()
{
    int i=1;
    printf("\n");
    printf("variable table and their values \n ");
    for(i=1;i<=ttt;i++)
    {
        printf("%s \t%d\n ",table[i].str,table[i].n);
    }
}




void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}

int main(void) {
    yyin = freopen("in.txt","r",stdin);
	yyout = freopen("out.txt","w",stdout);
	yyparse();
}

  /*
 bison -d 1707116.y
 flex 1707116.l
 gcc 1707116.tab.c lex.yy.c -o ex
 ex
 */
