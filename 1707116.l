
%{
    #include<stdio.h>
	#include <string.h>
    void yyerror(char *);
	#include "1707116.tab.h"
	#include<stdlib.h>
%}

/* Groupifying and Declarations */
Datatype "int_type"|"float_type"| "char_type" | "double_type"
identifiers "id_"[a-zA-Z]([a-zA-Z0-9])*
arithmatic_operator "plus"|"minus"|"mult"|"div"|"pow"|"fact"
unary_operator "INC"|"DEC"|"NOT"
logical_operator "&&"|"||"|"!!"
relational_operator "less_t"|"great_t"|"less_eq"|"great_eq"|"eqeq"|"noteq"
parenthesis "l2"|"r2"|"l1"|"r1"
assignment_operator [=]|"+="|"-="|"/="|"*="
integer (-|+)?[0-9]+
float [+-]?[0-9]+[.][0-9]+|[+-]?[.][0-9]+|[1-9]+e[+-][0-9]+
double [+-]?[0-9]+[.][0-9]+{6,12}|[+-]?[.][0-9]+|[1-9]+e[+-][0-9]+{6,12}
char [A-Za-z]+
single_line_comment [/][s][/].*
multiple_line_comment .*[/][m][/][a-zA-Z0-9!@#*(){}_+-,.:\|?><\n\t'" ]*[/][m][/]

/*RE and Action*/

%%

{single_line_comment} {
	printf("single line comment\n");}
{multiple_line_comment} {
	printf("multiple_line_comment\n");}

"cm"	{ return CM; }
"sm"	{ return SM; }
"col"     { return COL;}

"function "[A-Za-z]+	{ return FUNCTION; }
"funcustom "[A-Za-z]+	{return funcustom;}

"l1"	{ return L1; }
"r1"	{ return R1; }
"l2"	{ return L2; }
"r2"	{ return R2; }

"plus"	{ return PLUS;}
"minus"	{ return MINUS; }
"mult"	{ return MULTIPLICATION; }
"div"	{ return DIVISION; }
"pow"	{ return POWER; }
"fact"	{ return FACTORIAL; }

"equal"		{ return EQUAL;  }

[-]?[0-9]+	{
		yylval.number = atoi(yytext);  /* yylval is used to pass the semantic value of the token from lexer to parser */
		return NUM;}
{identifiers} {
	 yylval.string=strdup(yytext);
	 return VAR;}
	
"int_type"	{ return INT; }
"float_type"	{ return FLOAT; }
"double_type"	{return DOUBLE;}
"char_type"	{ return CHAR; }

"if_c"		{ return IF;}
"else_c"	{ return ELSE;}
"elif_c"	{ return ELIF;}
"for_l"     { return FOR;}
"from"      { return FROM;}
"to" 		{ return TO;}
"while_l"   {return WHILE;}
"switch_c"      { return SWITCH;}
"default_option"  	{ return Default_option; }
"break_l"    { return BREAK;}
"option"      { return CASE;}

"INC"   {return INC;}
"DEC"	{return DEC;}
"NOT"	{return NOT;}
{logical_operator}	{return LOGIC;}

"great_t"	{ return GT; }
"less_t"	{ return LT; }
"great_e"	{ return GE; }
"less_e"	{ return LE; }


[ \t\n]*

.	{
		yyerror("Unknown Character.\n");
	}

%%

int yywrap(void) {
    return 1;
}


