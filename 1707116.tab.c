
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "1707116.y"

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


/* Line 189 of yacc.c  */
#line 92 "1707116.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     VAR = 259,
     IF = 260,
     ELIF = 261,
     ELSE = 262,
     FUNCTION = 263,
     INT = 264,
     FLOAT = 265,
     DOUBLE = 266,
     CHAR = 267,
     L1 = 268,
     R1 = 269,
     L2 = 270,
     R2 = 271,
     CM = 272,
     SM = 273,
     PLUS = 274,
     MINUS = 275,
     MULTIPLICATION = 276,
     DIVISION = 277,
     POWER = 278,
     FACTORIAL = 279,
     EQUAL = 280,
     FOR = 281,
     FROM = 282,
     TO = 283,
     COL = 284,
     WHILE = 285,
     BREAK = 286,
     COLON = 287,
     Default_option = 288,
     CASE = 289,
     SWITCH = 290,
     INC = 291,
     DEC = 292,
     NOT = 293,
     LOGIC = 294,
     funcustom = 295,
     IFX = 296,
     ELIFX = 297,
     GE = 298,
     LE = 299,
     GT = 300,
     LT = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 19 "1707116.y"

        int number;
        char *string;



/* Line 214 of yacc.c  */
#line 181 "1707116.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 193 "1707116.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   566

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNRULES -- Number of states.  */
#define YYNSTATES  221

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    11,    14,    17,    21,    23,    25,
      27,    31,    33,    35,    38,    43,    52,    66,    93,   128,
     150,   161,   171,   181,   191,   201,   210,   218,   220,   222,
     226,   230,   234,   238,   242,   245,   249,   253,   257,   261,
     265,   269,   273,   277,   279,   282,   283,   286,   292,   297,
     299,   301,   305,   309,   313,   317,   321,   324,   328,   332,
     336,   340,   344
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,     8,    13,    14,    15,    49,    16,    -1,
      -1,    49,    53,    -1,    49,    50,    -1,    51,    52,    18,
      -1,     9,    -1,    10,    -1,    12,    -1,    52,    17,     4,
      -1,     4,    -1,    18,    -1,    59,    18,    -1,     4,    25,
      59,    18,    -1,     5,    13,    59,    14,    15,    59,    18,
      16,    -1,     5,    13,    59,    14,    15,    59,    18,    16,
       7,    15,    59,    18,    16,    -1,     5,    13,    59,    14,
      15,     5,    13,    59,    14,    15,    59,    18,    16,     7,
      15,    59,    18,    16,    59,    18,    16,     7,    15,    59,
      18,    16,    -1,     5,    13,    59,    14,    15,     5,    13,
      59,    14,    15,    59,    18,    16,     6,    13,    59,    14,
      15,    59,    18,    16,     7,    15,    59,    18,    16,    59,
      18,    16,     7,    15,    59,    18,    16,    -1,     5,    13,
      59,    14,    15,    59,    18,    16,     6,    13,    59,    14,
      15,    59,    18,    16,     7,    15,    59,    18,    16,    -1,
      26,    13,    27,     3,    28,     3,    14,    15,    59,    16,
      -1,    30,    13,     3,    45,     3,    14,    15,    59,    16,
      -1,    30,    13,     3,    46,     3,    14,    15,    59,    16,
      -1,    30,    13,     3,    43,     3,    14,    15,    59,    16,
      -1,    30,    13,     3,    44,     3,    14,    15,    59,    16,
      -1,    40,    29,    51,    13,    14,    15,    53,    16,    -1,
      35,    13,    54,    14,    15,    55,    16,    -1,     3,    -1,
       4,    -1,    54,    19,    54,    -1,    54,    20,    54,    -1,
      54,    21,    54,    -1,    54,    22,    54,    -1,    54,    23,
      54,    -1,    54,    24,    -1,    54,    46,    54,    -1,    54,
      45,    54,    -1,    54,    43,    54,    -1,    54,    44,    54,
      -1,    13,    54,    14,    -1,    36,    54,    36,    -1,    37,
      54,    37,    -1,    38,    54,    38,    -1,    56,    -1,    56,
      58,    -1,    -1,    56,    57,    -1,    34,     3,    29,    59,
      18,    -1,    33,    29,    59,    18,    -1,     3,    -1,     4,
      -1,    59,    19,    59,    -1,    59,    20,    59,    -1,    59,
      21,    59,    -1,    59,    22,    59,    -1,    59,    23,    59,
      -1,    59,    24,    -1,    59,    46,    59,    -1,    59,    45,
      59,    -1,    13,    59,    14,    -1,    36,    59,    36,    -1,
      37,    59,    37,    -1,    38,    59,    38,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    51,    53,    55,    58,    64,    66,    68,
      71,    86,   101,   103,   105,   127,   139,   152,   169,   188,
     205,   216,   225,   234,   243,   255,   263,   267,   269,   271,
     273,   275,   277,   287,   289,   299,   301,   303,   305,   307,
     309,   311,   313,   323,   325,   328,   330,   334,   343,   354,
     356,   358,   360,   362,   364,   374,   376,   386,   388,   390,
     392,   394,   396
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "VAR", "IF", "ELIF", "ELSE",
  "FUNCTION", "INT", "FLOAT", "DOUBLE", "CHAR", "L1", "R1", "L2", "R2",
  "CM", "SM", "PLUS", "MINUS", "MULTIPLICATION", "DIVISION", "POWER",
  "FACTORIAL", "EQUAL", "FOR", "FROM", "TO", "COL", "WHILE", "BREAK",
  "COLON", "Default_option", "CASE", "SWITCH", "INC", "DEC", "NOT",
  "LOGIC", "funcustom", "IFX", "ELIFX", "GE", "LE", "GT", "LT", "$accept",
  "program", "cProgram", "declaration_part", "TYPE", "ID1", "statement",
  "Switch_expression", "Base_expression", "Base_statement",
  "Case_statement", "Default_statement", "expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    49,    50,    51,    51,    51,
      52,    52,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    55,    55,    56,    56,    57,    58,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,     2,     2,     3,     1,     1,     1,
       3,     1,     1,     2,     4,     8,    13,    26,    34,    21,
      10,     9,     9,     9,     9,     8,     7,     1,     1,     3,
       3,     3,     3,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     2,     0,     2,     5,     4,     1,
       1,     3,     3,     3,     3,     3,     2,     3,     3,     3,
       3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     3,     0,    49,    50,
       0,     7,     8,     9,     0,     2,    12,     0,     0,     0,
       0,     0,     0,     0,     5,     0,     4,     0,     0,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,    11,
       0,    13,     0,     0,     0,     0,     0,    56,     0,     0,
       0,     0,    59,     0,     0,    27,    28,     0,     0,     0,
       0,     0,    60,    61,    62,     0,     0,     6,    51,    52,
      53,    54,    55,    58,    57,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,     0,    39,    40,    41,    42,    45,
      29,    30,    31,    32,    33,    37,    38,    36,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
      46,    44,     0,     0,    15,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     0,     0,     0,    23,    24,    21,
      22,     0,     0,     0,     0,     0,    20,    48,     0,     0,
       0,     0,    47,     0,     0,     0,     0,     0,    16,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,     0,     0,
      18
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,    24,    25,    40,    26,    61,   127,   128,
     140,   141,    27
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -49
static const yytype_int16 yypact[] =
{
      25,    31,    54,    43,   -49,    48,   -49,    46,   -49,    66,
      83,   -49,   -49,   -49,    57,   -49,   -49,    88,    96,   104,
      57,    57,    57,    86,   -49,    75,   -49,   290,    57,    57,
     -49,   166,    91,   129,    74,   502,   508,   520,    59,   -49,
     -16,   -49,    57,    57,    57,    57,    57,   -49,    57,    57,
     301,   185,   -49,   130,    60,   -49,   -49,    74,    74,    74,
      74,   121,   -49,   -49,   -49,   124,   134,   -49,   102,   102,
      29,    29,   -49,    -3,    -3,   -49,   119,   111,   143,   144,
     150,   151,   138,   446,   464,   474,   140,    74,    74,    74,
      74,    74,   -49,    74,    74,    74,    74,   142,   -49,     0,
     167,   157,   158,   159,   160,   -49,   -49,   -49,   -49,   -49,
     106,   106,    50,    50,   -49,     3,     3,     3,     3,   161,
     162,   310,   179,   180,   181,   183,   186,   178,    56,    62,
      57,   184,   187,    57,    57,    57,    57,   -49,   192,   210,
     -49,   -49,   198,   196,   101,    57,   233,   244,   261,   272,
      57,   193,   -49,   208,   211,   214,   281,   -49,   -49,   -49,
     -49,   319,    57,    57,    57,    57,   -49,   -49,   330,   339,
     213,   348,   -49,   209,   225,   212,   107,    57,   -49,   226,
     235,   359,    57,    57,   245,   224,   368,   219,   236,   246,
     256,    57,    57,    57,   377,   388,   397,   257,   258,   259,
     265,   269,   -49,   271,   283,    57,    57,   406,   417,   299,
     300,    57,   -49,   426,   328,   280,   284,    57,   435,   329,
     -49
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -49,   -49,   -49,   -49,   335,   -49,   273,   -48,   -49,   -49,
     -49,   -49,   -14
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      31,    66,    67,     8,    30,   120,    35,    36,    37,    82,
      83,    84,    85,    14,    50,    51,    42,    43,    44,    45,
      46,    47,    87,    88,    89,    90,    91,    92,    68,    69,
      70,    71,    72,     1,    73,    74,    20,    21,    22,   110,
     111,   112,   113,   114,     3,   115,   116,   117,   118,     8,
       9,    10,    46,    47,     4,    11,    12,     5,    13,    14,
       8,    30,    15,     6,    16,     8,     9,    10,    11,    12,
      14,    13,    17,    91,    92,    14,    18,    55,    56,    39,
      16,    19,    20,    21,    22,   121,    23,    57,    17,   138,
     139,    28,    18,    20,    21,    22,    29,    19,    20,    21,
      22,    32,    23,    78,    79,    80,    81,   154,   155,    33,
      58,    59,    60,   179,   180,    38,   143,    34,    53,   146,
     147,   148,   149,    44,    45,    46,    47,    89,    90,    91,
      92,   156,    54,    77,    99,    86,   161,    97,    98,   100,
      87,    88,    89,    90,    91,    92,   101,   102,   168,   169,
     170,   171,   105,   103,   104,   109,   119,    87,    88,    89,
      90,    91,    92,   181,    93,    94,    95,    96,   185,   186,
     122,   123,   124,   125,   126,   130,   129,   194,   195,   196,
      52,    93,    94,    95,    96,    42,    43,    44,    45,    46,
      47,   207,   208,   132,   137,   133,   134,   213,   135,    76,
     144,   136,   145,   218,    42,    43,    44,    45,    46,    47,
     153,    48,    49,   151,   152,    42,    43,    44,    45,    46,
      47,   150,   162,   163,   164,   176,   190,   174,   178,   165,
      48,    49,    42,    43,    44,    45,    46,    47,   188,   182,
     177,    48,    49,    42,    43,    44,    45,    46,    47,   157,
     183,   191,    42,    43,    44,    45,    46,    47,    48,    49,
     158,   187,   192,    42,    43,    44,    45,    46,    47,    48,
      49,   193,   203,   200,   201,   202,   204,   159,    48,    49,
      42,    43,    44,    45,    46,    47,   205,   216,   160,    48,
      49,    42,    43,    44,    45,    46,    47,   166,   206,   217,
      42,    43,    44,    45,    46,    47,    48,    49,    41,    42,
      43,    44,    45,    46,    47,   211,   212,    48,    49,    75,
      42,    43,    44,    45,    46,    47,    48,    49,   131,    42,
      43,    44,    45,    46,    47,    48,    49,   167,    42,    43,
      44,    45,    46,    47,   215,   220,    48,    49,   172,    42,
      43,    44,    45,    46,    47,    48,    49,   173,    42,    43,
      44,    45,    46,    47,    48,    49,   175,    42,    43,    44,
      45,    46,    47,    65,     0,    48,    49,   184,    42,    43,
      44,    45,    46,    47,    48,    49,   189,    42,    43,    44,
      45,    46,    47,    48,    49,   197,    42,    43,    44,    45,
      46,    47,   142,     0,    48,    49,   198,    42,    43,    44,
      45,    46,    47,    48,    49,   199,    42,    43,    44,    45,
      46,    47,    48,    49,   209,    42,    43,    44,    45,    46,
      47,     0,     0,    48,    49,   210,    42,    43,    44,    45,
      46,    47,    48,    49,   214,    42,    43,    44,    45,    46,
      47,    48,    49,   219,    42,    43,    44,    45,    46,    47,
       0,     0,    48,    49,     0,    87,    88,    89,    90,    91,
      92,    48,    49,     0,     0,     0,     0,     0,     0,     0,
      48,    49,   106,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    87,    88,    89,    90,    91,    92,     0,
       0,   107,     0,     0,     0,     0,     0,    93,    94,    95,
      96,     0,   108,     0,     0,     0,     0,    93,    94,    95,
      96,    42,    43,    44,    45,    46,    47,    42,    43,    44,
      45,    46,    47,     0,     0,     0,     0,     0,    62,    42,
      43,    44,    45,    46,    47,    63,     0,    48,    49,     0,
       0,     0,     0,    48,    49,     0,     0,     0,    64,     0,
       0,     0,     0,     0,     0,    48,    49
};

static const yytype_int16 yycheck[] =
{
      14,    17,    18,     3,     4,     5,    20,    21,    22,    57,
      58,    59,    60,    13,    28,    29,    19,    20,    21,    22,
      23,    24,    19,    20,    21,    22,    23,    24,    42,    43,
      44,    45,    46,     8,    48,    49,    36,    37,    38,    87,
      88,    89,    90,    91,    13,    93,    94,    95,    96,     3,
       4,     5,    23,    24,     0,     9,    10,    14,    12,    13,
       3,     4,    16,    15,    18,     3,     4,     5,     9,    10,
      13,    12,    26,    23,    24,    13,    30,     3,     4,     4,
      18,    35,    36,    37,    38,    99,    40,    13,    26,    33,
      34,    25,    30,    36,    37,    38,    13,    35,    36,    37,
      38,    13,    40,    43,    44,    45,    46,     6,     7,    13,
      36,    37,    38,     6,     7,    29,   130,    13,    27,   133,
     134,   135,   136,    21,    22,    23,    24,    21,    22,    23,
      24,   145,     3,     3,    15,    14,   150,    13,     4,    28,
      19,    20,    21,    22,    23,    24,     3,     3,   162,   163,
     164,   165,    14,     3,     3,    15,    14,    19,    20,    21,
      22,    23,    24,   177,    43,    44,    45,    46,   182,   183,
       3,    14,    14,    14,    14,    13,    15,   191,   192,   193,
      14,    43,    44,    45,    46,    19,    20,    21,    22,    23,
      24,   205,   206,    14,    16,    15,    15,   211,    15,    14,
      16,    15,    15,   217,    19,    20,    21,    22,    23,    24,
      14,    45,    46,     3,    16,    19,    20,    21,    22,    23,
      24,    29,    29,    15,    13,    16,     7,    14,    16,    15,
      45,    46,    19,    20,    21,    22,    23,    24,    14,    13,
      15,    45,    46,    19,    20,    21,    22,    23,    24,    16,
      15,    15,    19,    20,    21,    22,    23,    24,    45,    46,
      16,    16,    16,    19,    20,    21,    22,    23,    24,    45,
      46,    15,     7,    16,    16,    16,     7,    16,    45,    46,
      19,    20,    21,    22,    23,    24,    15,     7,    16,    45,
      46,    19,    20,    21,    22,    23,    24,    16,    15,    15,
      19,    20,    21,    22,    23,    24,    45,    46,    18,    19,
      20,    21,    22,    23,    24,    16,    16,    45,    46,    18,
      19,    20,    21,    22,    23,    24,    45,    46,    18,    19,
      20,    21,    22,    23,    24,    45,    46,    18,    19,    20,
      21,    22,    23,    24,    16,    16,    45,    46,    18,    19,
      20,    21,    22,    23,    24,    45,    46,    18,    19,    20,
      21,    22,    23,    24,    45,    46,    18,    19,    20,    21,
      22,    23,    24,    38,    -1,    45,    46,    18,    19,    20,
      21,    22,    23,    24,    45,    46,    18,    19,    20,    21,
      22,    23,    24,    45,    46,    18,    19,    20,    21,    22,
      23,    24,   129,    -1,    45,    46,    18,    19,    20,    21,
      22,    23,    24,    45,    46,    18,    19,    20,    21,    22,
      23,    24,    45,    46,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    45,    46,    18,    19,    20,    21,    22,
      23,    24,    45,    46,    18,    19,    20,    21,    22,    23,
      24,    45,    46,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    45,    46,    -1,    19,    20,    21,    22,    23,
      24,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    36,    19,    20,    21,    22,    23,    24,    43,
      44,    45,    46,    19,    20,    21,    22,    23,    24,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,
      46,    -1,    38,    -1,    -1,    -1,    -1,    43,    44,    45,
      46,    19,    20,    21,    22,    23,    24,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    36,    19,
      20,    21,    22,    23,    24,    37,    -1,    45,    46,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    48,    13,     0,    14,    15,    49,     3,     4,
       5,     9,    10,    12,    13,    16,    18,    26,    30,    35,
      36,    37,    38,    40,    50,    51,    53,    59,    25,    13,
       4,    59,    13,    13,    13,    59,    59,    59,    29,     4,
      52,    18,    19,    20,    21,    22,    23,    24,    45,    46,
      59,    59,    14,    27,     3,     3,     4,    13,    36,    37,
      38,    54,    36,    37,    38,    51,    17,    18,    59,    59,
      59,    59,    59,    59,    59,    18,    14,     3,    43,    44,
      45,    46,    54,    54,    54,    54,    14,    19,    20,    21,
      22,    23,    24,    43,    44,    45,    46,    13,     4,    15,
      28,     3,     3,     3,     3,    14,    36,    37,    38,    15,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    14,
       5,    59,     3,    14,    14,    14,    14,    55,    56,    15,
      13,    18,    14,    15,    15,    15,    15,    16,    33,    34,
      57,    58,    53,    59,    16,    15,    59,    59,    59,    59,
      29,     3,    16,    14,     6,     7,    59,    16,    16,    16,
      16,    59,    29,    15,    13,    15,    16,    18,    59,    59,
      59,    59,    18,    18,    14,    18,    16,    15,    16,     6,
       7,    59,    13,    15,    18,    59,    59,    16,    14,    18,
       7,    15,    16,    15,    59,    59,    59,    18,    18,    18,
      16,    16,    16,     7,     7,    15,    15,    59,    59,    18,
      18,    16,    16,    59,    18,    16,     7,    15,    59,    18,
      16
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 47 "1707116.y"
    {  struct_table_checker();
                                            printf("\nSuccessful compilation of your program!! Congratulations !! \n"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 58 "1707116.y"
    { printf("\nvalid declaration\n"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 71 "1707116.y"
    {
						if(key_table((yyvsp[(3) - (3)].string)))
						{
							printf("\n%s is already declared\n", (yyvsp[(3) - (3)].string) );
						}
						else
						{
							insert(&table[ttt],(yyvsp[(3) - (3)].string), ttt);
							printf("\nprint %s under id1 cm var, storing in the %d position of the table table",(yyvsp[(3) - (3)].string),ttt);
							ttt++;


						}
			;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 86 "1707116.y"
    {
				if(key_table((yyvsp[(1) - (1)].string)))
				{
					printf("\n%s is already declared\n", (yyvsp[(1) - (1)].string) );
				}
				else
				{
					insert(&table[ttt],(yyvsp[(1) - (1)].string), ttt);
							printf("\nprint %s under var, storing in the %d position of the table table",(yyvsp[(1) - (1)].string),ttt);
							ttt++;
				}
			;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 103 "1707116.y"
    { printf("\nvalue of expression: %d\n", ((yyvsp[(1) - (2)].number))); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 105 "1707116.y"
    {
							if(key_table((yyvsp[(1) - (4)].string))){  /*returns 1 if variable is already in the structure */
								int i = key_table((yyvsp[(1) - (4)].string));  /*returns the value of the variable */
								if (!i){
									insert(&table[ttt], (yyvsp[(1) - (4)].string), (yyvsp[(3) - (4)].number));
									ttt++;
								}
								table[i].n = (yyvsp[(3) - (4)].number);
								printf("\n(%s) Value of the variable: %d\t\n",(yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].number));
							}
							else {
								printf("%s not declared yet\n",(yyvsp[(1) - (4)].string));
							}

						;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 127 "1707116.y"
    {
								if((yyvsp[(3) - (8)].number))
								{
									printf("\nvalue of expression in IF: %d\n",((yyvsp[(6) - (8)].number)));
								}
								else
								{
									printf("\ncondition value zero in IF block\n");
								}
							;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 139 "1707116.y"
    {
								 	if((yyvsp[(3) - (13)].number))
									{
										printf("\nvalue of expression in IF: %d\n",(yyvsp[(6) - (13)].number));
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",(yyvsp[(11) - (13)].number));
									}
								   ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 152 "1707116.y"
    {
								 	if((yyvsp[(3) - (26)].number))
									{
										if((yyvsp[(8) - (26)].number))
											printf("\nvalue of expression middle IF: %d\n",(yyvsp[(11) - (26)].number));
                                        else
                                            printf("\nvalue of expression in middle ELSE: %d\n",(yyvsp[(16) - (26)].number));
										printf("\nvalue of expression in first IF: %d\n",(yyvsp[(19) - (26)].number));
									}
									else
									{
										printf("\nvalue of expression in else: %d\n",(yyvsp[(24) - (26)].number));
									}
								   ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 169 "1707116.y"
    {
								 	if((yyvsp[(3) - (34)].number))
									{
										if((yyvsp[(8) - (34)].number))
											printf("\nvalue of expression middle IF: %d\n",(yyvsp[(11) - (34)].number));
                                        else if((yyvsp[(16) - (34)].number))
                                            printf("\nvalue of expression in middle ELIF: %d\n",(yyvsp[(19) - (34)].number));
										else
											printf("\nvalue of expression middle ELSE: %d\n",(yyvsp[(24) - (34)].number));
										printf("\nvalue of expression in first IF: %d\n",(yyvsp[(27) - (34)].number));
									}
									else
									{
										printf("\nvalue of expression in else: %d\n",(yyvsp[(32) - (34)].number));
									}
								   ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 188 "1707116.y"
    {
								 	if((yyvsp[(3) - (21)].number))
									{
										printf("\nvalue of expression in IF: %d\n",(yyvsp[(6) - (21)].number));
									}
									else if((yyvsp[(11) - (21)].number))
									{
										printf("\nvalue of expression in ELIF: %d\n",(yyvsp[(14) - (21)].number));
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",(yyvsp[(19) - (21)].number));
									}
								   ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 205 "1707116.y"
    {
                                    int i;
                                    printf("\n");
                                    for(i=(yyvsp[(4) - (10)].number);i<=(yyvsp[(6) - (10)].number);i++)
                                        printf("for loop statement for %d\n",i);
                                    printf("\n");
                                    ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 216 "1707116.y"
    {
										int i=(yyvsp[(5) - (9)].number);
										printf("While LOOP: ");
										while((yyvsp[(3) - (9)].number)>i)
                                            printf("%d ",i++);
										printf("\n");
										printf("value of the expression: %d\n",(yyvsp[(8) - (9)].number));

	;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 225 "1707116.y"
    {
										int i=(yyvsp[(5) - (9)].number);
										printf("While LOOP: ");
										while((yyvsp[(3) - (9)].number)<i)
                                            printf("%d ",i--);
										printf("\n");
										printf("value of the expression: %d\n",(yyvsp[(8) - (9)].number));

	;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 234 "1707116.y"
    {
										int i=(yyvsp[(5) - (9)].number);
										printf("While LOOP: ");
										while((yyvsp[(3) - (9)].number)>=i)
                                            printf("%d ",i++);
										printf("\n");
										printf("value of the expression: %d\n",(yyvsp[(8) - (9)].number));

	;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 243 "1707116.y"
    {
										int i=(yyvsp[(5) - (9)].number);
										printf("While LOOP: ");
										while((yyvsp[(3) - (9)].number)<=i)
                                            printf("%d ",i--);
										printf("\n");
										printf("value of the expression: %d\n",(yyvsp[(8) - (9)].number));

	;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 255 "1707116.y"
    {
								printf("CUSTOM Function Declared\n");
							;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 263 "1707116.y"
    {printf("SWITCH CASE compiled successfully !!\n\n");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 267 "1707116.y"
    { (yyval.number) = (yyvsp[(1) - (1)].number); val = (yyval.number);	;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 269 "1707116.y"
    { (yyval.number) = key_table((yyvsp[(1) - (1)].string)); val = (yyval.number);;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 271 "1707116.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number); val = (yyval.number); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 273 "1707116.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) - (yyvsp[(3) - (3)].number); val = (yyval.number); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 275 "1707116.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * (yyvsp[(3) - (3)].number);  val = (yyval.number);;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 277 "1707116.y"
    { 	if((yyvsp[(3) - (3)].number))
                                            {
                                                    (yyval.number) = (yyvsp[(1) - (3)].number) / (yyvsp[(3) - (3)].number); val = (yyval.number);
                                            }
                                            else
                                            {
                                                (yyval.number) = 0;
                                                 val = (yyval.number);
                                            }
                                            ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 287 "1707116.y"
    { (yyval.number) = pow((yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number));  val = (yyval.number);;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 289 "1707116.y"
    {
                                            int mult=1 ,i;
                                            for(i=(yyvsp[(1) - (2)].number);i>0;i--)
                                            {
                                                mult=mult*i;
                                            }
                                            (yyval.number)=mult; val = (yyval.number);

                                         ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 299 "1707116.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) < (yyvsp[(3) - (3)].number); val = (yyval.number); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 301 "1707116.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) > (yyvsp[(3) - (3)].number);  val = (yyval.number);;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 303 "1707116.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) >= (yyvsp[(3) - (3)].number);  val = (yyval.number);;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 305 "1707116.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) <= (yyvsp[(3) - (3)].number); val = (yyval.number); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 307 "1707116.y"
    { (yyval.number) = (yyvsp[(2) - (3)].number);	 val = (yyval.number);;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 309 "1707116.y"
    { (yyval.number)=(yyvsp[(2) - (3)].number)+1; printf("inc: %d\n",(yyval.number)); val = (yyval.number);;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 311 "1707116.y"
    { (yyval.number)=(yyvsp[(2) - (3)].number)-1; printf("dec: %d\n",(yyval.number)); val = (yyval.number);;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 313 "1707116.y"
    {
                                            if((yyvsp[(2) - (3)].number) != 0)
                                            {
                                                (yyval.number) = 0; val = (yyval.number);
                                            }
                                            else{
                                                (yyval.number) = 1 ; val = (yyval.number);
                                            }
                                        ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 334 "1707116.y"
    {

                            if(val==(yyvsp[(2) - (5)].number)){
                                  switch_checker_variable=1;
                                  printf("\nCase No : %d  and Result :  %d\n",(yyvsp[(2) - (5)].number),(yyvsp[(4) - (5)].number));
                            }
                        ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 343 "1707116.y"
    {
                            if(switch_checker_variable!=1)
                                printf("\nResult in default Value is :  %d\n",(yyvsp[(3) - (4)].number));
                            switch_checker_variable=0;
                        ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 354 "1707116.y"
    { (yyval.number) = (yyvsp[(1) - (1)].number); 	;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 356 "1707116.y"
    { (yyval.number) = key_table((yyvsp[(1) - (1)].string)); printf("Variable value: %d",(yyval.number));}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 358 "1707116.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 360 "1707116.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) - (yyvsp[(3) - (3)].number); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 362 "1707116.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * (yyvsp[(3) - (3)].number); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 364 "1707116.y"
    { 	if((yyvsp[(3) - (3)].number))
				  		{
				     			(yyval.number) = (yyvsp[(1) - (3)].number) / (yyvsp[(3) - (3)].number);
				  		}
				  		else
				  		{
							(yyval.number) = 0;
							printf("\ndivision by zero\t");
				  		}
				    	;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 374 "1707116.y"
    { (yyval.number) = pow((yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 376 "1707116.y"
    {
						int mult=1 ,i;
						for(i=(yyvsp[(1) - (2)].number);i>0;i--)
						{
							mult=mult*i;
						}
						(yyval.number)=mult;

					 ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 386 "1707116.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) < (yyvsp[(3) - (3)].number); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 388 "1707116.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) > (yyvsp[(3) - (3)].number); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 390 "1707116.y"
    { (yyval.number) = (yyvsp[(2) - (3)].number);	;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 392 "1707116.y"
    { (yyval.number)=(yyvsp[(2) - (3)].number)+1; printf(" inc: %d\n",(yyval.number));;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 394 "1707116.y"
    { (yyval.number)=(yyvsp[(2) - (3)].number)-1; printf(" dec: %d\n",(yyval.number));;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 396 "1707116.y"
    {
						if((yyvsp[(2) - (3)].number) != 0)
						{
							(yyval.number) = 0; printf(" not: %d\n",(yyval.number));
						}
						else{
							(yyval.number) = 1 ; printf(" aff: %d\n",(yyval.number));
						}
					;}
    break;



/* Line 1455 of yacc.c  */
#line 2172 "1707116.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 412 "1707116.y"


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

