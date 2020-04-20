/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ab.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>

    FILE *yyin;
    FILE *yyout;
    int lineno;
    int Tno=0;
    int Cno=-1;
    int t_eq;
    char astemp[20000];
    // int tstack[1000];
    // int tstacktop=0;

    char *t_identifier_name;
    char* rc0;
    char* rc1;
    char* rc2;
    char *temp;
    int vld = 0;
    extern char* yytext();
    char* copp[]={"<",">","<=",">=","==","!=","==","!=","AND","OR","XOR"};

    extern int yylex();
    void yyerror();
    int tt = 1;
    int tt2 = 1;
    int nnn = 1;
    char *current_i;
    char stk[1000][1000];
    int tops=-1;
    int yydebug=1;
    int isConditional=0;

    int update = 0;
    int valid = 0;
    int nor = 1;
    int c_op = 0;
    int ep_op = 0;
    int e_op = 0;
    int quadnum = 0;
    int p_ast = 0;
    int e_ast = 0;
    int ini_1 = 0;
    int ini_2 = 0;
    int v_for, v_while, v_if, v_else_if, v_else, v_echo, v_print;
    int v_temp = 0;//use_check
    int v_label = 0;

    #define INT_EGER 0
    #define FLOAT_NUM 1
    #define STR_ING 2
    #define NULL_TYPE 3
    #define SIZE 211
    #define MAXTOKENLEN 40
    #define MAX_VAL_LEN 100
    #define UNDEF 0

    typedef struct L_PP
    {
        int label_number;
        struct L_PP *prev;
        struct L_PP *next;
    } v_label_node;

    v_label_node *v_l;
    v_label_node *v_l2;
    v_label_node *v_l3;
    v_label_node *v_l4;

    typedef struct icref{
        char index[1000];
        char ic[10000];
        struct icref* next;
    } icref;

    struct quadruple
    {
        int line;
        char *op;
        char *arg1;
        char *arg2;
        char *result;
    } tuple[1000];

    typedef struct RefList
    {
        int lineno;
        struct RefList *next;
        int type;
    } RefList;

    typedef struct list_t
    {
        char st_name[MAXTOKENLEN];
        int st_size;
        int scope;
        RefList *lines;
        int st_type;
        char *data_type;
        char *data_value;
        struct list_t *next;
    } list_t;

    typedef struct AST
    {
        char *name;
        struct AST *parent;
        struct AST *left;
        struct AST *right;
    } node;

    typedef struct L_P
    {
        struct AST *addr;
        struct L_P *prev;
        struct L_P *next;
    } node_p;


    /*typedef struct snode_t
    {
        char *value;
    } snode_t;*/
    typedef struct snode
    {
        char* t_nodes[1000];
        int nf;
        int ln;
        struct snode *next;
    } snode;

    extern int nic;
    extern int pnic;
    extern int no_of_sn = 1;
    snode *list_root;
    snode *l_root;

    snode* new_sn();

    typedef struct icg_quadruples{
            char *op;
            char *arg1;
            char *arg2;
            char *res;
    } icg;

    int icg_count = 0;
    icg q[250];
    char *icode;
    char *icode_prev;
    char *icode_temp;
    int no_of_temp = 0;
    int no_of_labels = 0;



    char* we;
    node* expr_p;
    int icg_a=0;
    int icg_at=1;
    node_p* poi;
    node_p* e_poi;
    extern int ln_num;
    node* root;
    node* head;
    int temporaryGenerated = 0;
    int tupleIndex = 0;
    node *e,*e1,*e2,*e3,*e4,*e5,*e6,*e7,*e8,*e9,*e10;
    extern void s_current_lookup(char *idi);
    char *r_current_lookup();
    static list_t **hash_table;
    void init_hash_table();
    unsigned int hash(char *key);
    void bn(char *op);
    extern void insert(char *name, int len, int type, int lineno, int c_scope);
    list_t *lookup(char *name);
    node* buildTree(char *op, char *left, char *right, node* new1);
    void printTree(node *tree);
    void display_icg();
    void newICG(int index);
    void codeGenerator(char*,char*,char*,char*);
    char* newTemp();
    extern void symtab_dump(FILE * of, int dp);
    extern void e_vld(int vld);
    

#line 256 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_S_COMMENT = 258,
    T_M_COMMENT = 259,
    T_WHITESPACE = 260,
    T_OPEN_TAG = 261,
    T_CLOSE_TAG = 262,
    T_DOLLAR = 263,
    T_UNDERSCORE = 264,
    T_SEMI_COLON = 265,
    T_O_NBRAC = 266,
    T_C_NBRAC = 267,
    T_O_CBRAC = 268,
    T_C_CBRAC = 269,
    T_CONCAT = 270,
    T_DOUBLE_QUOTE = 271,
    T_SINGLE_QUOTE = 272,
    T_COMMA = 273,
    T_AND_EQUAL = 274,
    T_IS_EQUAL = 275,
    T_IDENTICAL = 276,
    T_NOT_EQUAL = 277,
    T_NOT_IDENTICAL = 278,
    T_LESSER_THAN = 279,
    T_GREATER_THAN = 280,
    T_LESSER_EQUAL = 281,
    T_GREATER_EQUAL = 282,
    T_LOGICAL_AND = 283,
    T_AND_OP = 284,
    T_LOGICAL_OR = 285,
    T_OR_OP = 286,
    T_LOGICAL_XOR = 287,
    T_NOT = 288,
    T_FOR = 289,
    T_WHILE = 290,
    T_IF = 291,
    T_ELSE = 292,
    T_ELSEIF = 293,
    T_ECHO = 294,
    T_PRINT = 295,
    T_INCREMENT = 296,
    T_DECREMENT = 297,
    T_PLUS = 298,
    T_MINUS = 299,
    T_DIVIDE = 300,
    T_MULTIPLY = 301,
    T_NULL = 302,
    T_LETTERS = 303,
    T_CR = 304,
    T_NEW_LINE = 305,
    T_ANY_CHAR = 306,
    T_IDENTIFIER = 307,
    T_STR = 308,
    T_INTEGER = 309,
    T_FLOAT = 310,
    T_BOOL_T = 311,
    T_BOOL_F = 312
  };
#endif
/* Tokens.  */
#define T_S_COMMENT 258
#define T_M_COMMENT 259
#define T_WHITESPACE 260
#define T_OPEN_TAG 261
#define T_CLOSE_TAG 262
#define T_DOLLAR 263
#define T_UNDERSCORE 264
#define T_SEMI_COLON 265
#define T_O_NBRAC 266
#define T_C_NBRAC 267
#define T_O_CBRAC 268
#define T_C_CBRAC 269
#define T_CONCAT 270
#define T_DOUBLE_QUOTE 271
#define T_SINGLE_QUOTE 272
#define T_COMMA 273
#define T_AND_EQUAL 274
#define T_IS_EQUAL 275
#define T_IDENTICAL 276
#define T_NOT_EQUAL 277
#define T_NOT_IDENTICAL 278
#define T_LESSER_THAN 279
#define T_GREATER_THAN 280
#define T_LESSER_EQUAL 281
#define T_GREATER_EQUAL 282
#define T_LOGICAL_AND 283
#define T_AND_OP 284
#define T_LOGICAL_OR 285
#define T_OR_OP 286
#define T_LOGICAL_XOR 287
#define T_NOT 288
#define T_FOR 289
#define T_WHILE 290
#define T_IF 291
#define T_ELSE 292
#define T_ELSEIF 293
#define T_ECHO 294
#define T_PRINT 295
#define T_INCREMENT 296
#define T_DECREMENT 297
#define T_PLUS 298
#define T_MINUS 299
#define T_DIVIDE 300
#define T_MULTIPLY 301
#define T_NULL 302
#define T_LETTERS 303
#define T_CR 304
#define T_NEW_LINE 305
#define T_ANY_CHAR 306
#define T_IDENTIFIER 307
#define T_STR 308
#define T_INTEGER 309
#define T_FLOAT 310
#define T_BOOL_T 311
#define T_BOOL_F 312

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 191 "ab.y" /* yacc.c:355  */

        int integer;
        float decimal;
        char op;
        int cop;
        char *string;
        struct
        {   int type;
            char tno; 
            int integer;
            float decimal;
            char *string;
        } mul;
    

#line 426 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 443 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   202

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  88
/* YYNRULES -- Number of rules.  */
#define YYNRULES  143
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  213

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   235,   235,   239,   235,   245,   253,   245,   268,   271,
     274,   277,   342,   344,   345,   345,   354,   358,   363,   376,
     395,   409,   429,   433,   454,   459,   464,   465,   466,   473,
     480,   486,   492,   502,   513,   514,   515,   516,   517,   518,
     523,   529,   537,   546,   555,   564,   573,   582,   591,   602,
     606,   610,   614,   615,   617,   617,   619,   652,   698,  1029,
    1031,  1358,  1363,  1687,  1691,  2115,  2115,  2116,  2127,  2138,
    2138,  2153,  2153,  2153,  2154,  2154,  2154,  2155,  2155,  2155,
    2156,  2157,  2165,  2156,  2189,  2190,  2218,  2242,  2242,  2188,
    2252,  2283,  2306,  2314,  2251,  2338,  2340,  2340,  2338,  2349,
    2353,  2363,  2389,  2397,  2405,  2349,  2421,  2421,  2426,  2440,
    2444,  2454,  2488,  2496,  2504,  2440,  2534,  2536,  2534,  2541,
    2543,  2541,  2548,  2550,  2548,  2555,  2558,  2555,  2563,  2565,
    2563,  2570,  2570,  2570,  2570,  2570,  2570,  2570,  2570,  2571,
    2573,  2571,  2577,  2580
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_S_COMMENT", "T_M_COMMENT",
  "T_WHITESPACE", "T_OPEN_TAG", "T_CLOSE_TAG", "T_DOLLAR", "T_UNDERSCORE",
  "T_SEMI_COLON", "T_O_NBRAC", "T_C_NBRAC", "T_O_CBRAC", "T_C_CBRAC",
  "T_CONCAT", "T_DOUBLE_QUOTE", "T_SINGLE_QUOTE", "T_COMMA", "T_AND_EQUAL",
  "T_IS_EQUAL", "T_IDENTICAL", "T_NOT_EQUAL", "T_NOT_IDENTICAL",
  "T_LESSER_THAN", "T_GREATER_THAN", "T_LESSER_EQUAL", "T_GREATER_EQUAL",
  "T_LOGICAL_AND", "T_AND_OP", "T_LOGICAL_OR", "T_OR_OP", "T_LOGICAL_XOR",
  "T_NOT", "T_FOR", "T_WHILE", "T_IF", "T_ELSE", "T_ELSEIF", "T_ECHO",
  "T_PRINT", "T_INCREMENT", "T_DECREMENT", "T_PLUS", "T_MINUS", "T_DIVIDE",
  "T_MULTIPLY", "T_NULL", "T_LETTERS", "T_CR", "T_NEW_LINE", "T_ANY_CHAR",
  "T_IDENTIFIER", "T_STR", "T_INTEGER", "T_FLOAT", "T_BOOL_T", "T_BOOL_F",
  "$accept", "start", "$@1", "$@2", "$@3", "$@4", "DELM", "PE",
  "PRINT_ECHO", "PRINT", "ECHO", "$@5", "BOOLEAN", "DIG", "CONST", "IN_DE",
  "OPERDIV", "OPERMUL", "OPER", "AA_OPER", "A_OPER", "CC_OPER1", "CC_OPER",
  "C_OPER1", "C_OPER", "ET", "EE", "EXPR2", "EXPR1", "EXPR", "ASIGN",
  "ITER", "COND1", "COND", "F_ASIGN", "F_COND", "F_ITER", "F_CL", "$@6",
  "$@7", "FOR", "$@8", "$@9", "$@10", "$@11", "$@12", "WHILE", "$@13",
  "$@14", "$@15", "$@16", "ELSE", "$@17", "$@18", "$@19", "ELSEIF", "$@20",
  "$@21", "$@22", "$@23", "$@24", "$@25", "I_OP", "IF", "$@26", "$@27",
  "$@28", "$@29", "$@30", "$@31", "CODE", "$@32", "$@33", "$@34", "$@35",
  "$@36", "$@37", "$@38", "$@39", "$@40", "$@41", "$@42", "$@43", "$@44",
  "$@45", "$@46", "$@47", "end", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

#define YYPACT_NINF -161

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-161)))

#define YYTABLE_NINF -143

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,  -161,  -161,     5,    59,    59,  -161,  -161,   -20,     0,
       1,    10,    20,    17,    25,    71,    77,   -30,  -161,    83,
      73,  -161,    78,  -161,  -161,  -161,    81,  -161,    80,  -161,
      36,    36,    36,    36,  -161,  -161,   -12,    45,  -161,  -161,
    -161,    83,  -161,  -161,  -161,    36,  -161,    36,    89,    36,
     -31,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,
    -161,  -161,    43,    60,   -23,    21,    36,    81,    36,  -161,
    -161,  -161,  -161,    86,  -161,    88,    91,    93,    95,  -161,
    -161,    81,  -161,   105,  -161,    67,  -161,    81,  -161,  -161,
    -161,  -161,  -161,   110,  -161,    81,  -161,    81,  -161,  -161,
    -161,  -161,    81,  -161,  -161,    81,  -161,  -161,   111,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,    36,    58,   106,   116,
      31,   -13,  -161,    81,  -161,  -161,  -161,  -161,  -161,   117,
    -161,    67,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,
    -161,  -161,    81,  -161,  -161,  -161,  -161,    81,   118,  -161,
    -161,  -161,    81,  -161,  -161,   126,   128,   123,  -161,  -161,
     129,    81,   119,    82,  -161,  -161,  -161,  -161,    82,   -30,
     130,  -161,   125,  -161,  -161,   131,   -30,   134,  -161,  -161,
      55,    41,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,
      82,   135,   136,  -161,  -161,  -161,   137,    82,    81,  -161,
    -161,  -161,   138,   141,  -161,   142,  -161,    82,  -161,   140,
    -161,    41,  -161
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,     2,     0,   139,   139,     1,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,     0,
       0,   117,     0,   120,   109,   123,     0,   126,     0,   129,
     139,   139,   139,   139,    26,    27,     0,     0,    65,    66,
     140,     0,   143,     7,    84,   139,    90,   139,     0,   139,
       0,    25,    57,    23,    19,    18,    16,    17,    14,    24,
      22,    56,    59,    61,    63,    12,   139,     0,   139,   132,
     134,   136,   138,     0,    39,     0,     0,     0,     0,    54,
      40,     0,    55,     0,     4,    73,   118,     0,   121,   110,
     124,    21,    20,     0,    28,     0,    29,     0,    33,    32,
      30,    31,     0,     8,     9,     0,    11,   127,     0,   130,
      38,    36,    37,    35,    34,    64,   139,     0,    71,     0,
      68,    69,    91,     0,    15,    58,    60,    62,    10,     0,
     141,    73,    85,    45,    47,    46,    48,    41,    42,    43,
      44,    52,     0,    49,    50,    51,    53,     0,     0,   111,
      13,    72,    76,    67,    70,     0,     0,    74,    86,    92,
       0,    76,     0,   139,   112,    75,    87,    93,   139,    79,
       0,   113,    77,    88,    94,     0,     0,     0,   114,    78,
       0,   108,    80,    81,    89,    95,    99,   107,   106,   115,
     139,     0,     0,    82,    96,   100,     0,   139,     0,    83,
      97,   101,     0,     0,    98,     0,   102,   139,   103,     0,
     104,   108,   105
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,   -57,  -161,
    -161,  -161,  -161,  -161,  -161,   113,  -161,  -161,  -161,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,  -161,    61,    53,   -22,
     -84,  -160,    15,   -85,    28,    -1,  -161,  -161,  -161,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,
    -161,  -161,   -50,  -161,  -161,  -161,  -161,  -161,  -161,  -161,
      -5,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,  -161,   121
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     5,    41,     4,    19,   105,   106,    58,    29,
      27,    93,    59,    60,    61,    37,    95,    97,   102,    80,
      81,   141,   146,   142,   147,    38,    62,    63,    64,   120,
      39,    40,   121,   157,   119,   158,   173,   184,   190,   196,
      21,    85,   152,   162,   169,   177,    23,    87,   148,   163,
     170,   187,   191,   197,   202,   188,   192,   198,   203,   207,
     209,   211,   189,    25,    48,   123,   156,   168,   175,   181,
       7,     8,    45,     9,    47,    10,    49,    11,    66,    12,
      68,    13,    14,    15,    16,    17,    83,    43
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,   118,   122,    73,    65,     6,    98,    74,    99,   172,
     108,    34,    35,     1,    20,   143,   179,   144,     2,   145,
     100,   101,    36,    91,    92,    69,    70,    71,    72,    34,
      35,    75,    76,    77,    78,    22,   103,    24,   149,   104,
      86,  -137,    88,  -142,    90,    65,  -135,   118,   128,    26,
    -142,   133,   134,   135,   136,   137,   138,   139,   140,   115,
      28,   107,   154,   109,  -137,   182,  -142,    30,   183,  -135,
    -116,  -119,  -122,    73,    31,  -125,  -128,    74,   185,   186,
     127,    32,    33,    65,    44,  -133,  -131,  -137,    94,    46,
      42,    67,  -135,  -116,  -119,  -122,  -142,    82,  -125,  -128,
      89,    75,    76,    77,    78,   110,    96,   111,  -133,  -131,
     112,   130,   113,   201,   114,   116,  -116,  -119,  -122,   117,
     124,  -125,  -128,   129,   131,    50,   132,   150,    51,   166,
     155,  -133,  -131,    52,    53,    54,    55,    56,    57,   159,
     160,   161,   164,   176,   174,   178,   180,   195,   194,    79,
     126,   199,   204,   205,   210,   206,   125,   153,   167,   151,
     165,   212,    84,   171,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   193,     0,     0,     0,     0,
       0,     0,   200,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   208
};

static const yytype_int16 yycheck[] =
{
       5,    85,    87,    15,    26,     0,    29,    19,    31,   169,
      67,    41,    42,     1,    34,    28,   176,    30,     6,    32,
      43,    44,    52,    54,    55,    30,    31,    32,    33,    41,
      42,    43,    44,    45,    46,    35,    15,    36,   123,    18,
      45,     5,    47,     7,    49,    67,    10,   131,   105,    39,
      14,    20,    21,    22,    23,    24,    25,    26,    27,    81,
      40,    66,   147,    68,     5,    10,     7,    50,    13,    10,
      34,    35,    36,    15,    49,    39,    40,    19,    37,    38,
     102,    10,     5,   105,    11,    49,    50,     5,    45,    11,
       7,    11,    10,    34,    35,    36,    14,    52,    39,    40,
      11,    43,    44,    45,    46,    19,    46,    19,    49,    50,
      19,   116,    19,   198,    19,    10,    34,    35,    36,    52,
      10,    39,    40,    12,    18,    44,    10,    10,    47,    10,
      12,    49,    50,    52,    53,    54,    55,    56,    57,    13,
      12,    18,    13,    18,    14,    14,    12,    11,    13,    36,
      97,    14,    14,    12,    14,    13,    95,   142,   163,   131,
     161,   211,    41,   168,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   190,    -1,    -1,    -1,    -1,
      -1,    -1,   197,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   207
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     6,    59,    62,    60,     0,   128,   129,   131,
     133,   135,   137,   139,   140,   141,   142,   143,   128,    63,
      34,    98,    35,   104,    36,   121,    39,    68,    40,    67,
      50,    49,    10,     5,    41,    42,    52,    73,    83,    88,
      89,    61,     7,   145,    11,   130,    11,   132,   122,   134,
      44,    47,    52,    53,    54,    55,    56,    57,    66,    70,
      71,    72,    84,    85,    86,    87,   136,    11,   138,   128,
     128,   128,   128,    15,    19,    43,    44,    45,    46,    73,
      77,    78,    52,   144,   145,    99,   128,   105,   128,    11,
     128,    54,    55,    69,    45,    74,    46,    75,    29,    31,
      43,    44,    76,    15,    18,    64,    65,   128,    66,   128,
      19,    19,    19,    19,    19,    87,    10,    52,    88,    92,
      87,    90,    91,   123,    10,    85,    86,    87,    66,    12,
     128,    18,    10,    20,    21,    22,    23,    24,    25,    26,
      27,    79,    81,    28,    30,    32,    80,    82,   106,    91,
      10,    92,   100,    90,    91,    12,   124,    91,    93,    13,
      12,    18,   101,   107,    13,    93,    10,   128,   125,   102,
     108,   128,    89,    94,    14,   126,    18,   103,    14,    89,
      12,   127,    10,    13,    95,    37,    38,   109,   113,   120,
      96,   110,   114,   128,    13,    11,    97,   111,   115,    14,
     128,    91,   112,   116,    14,    12,    13,   117,   128,   118,
      14,   119,   120
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    60,    61,    59,    62,    63,    59,    64,    64,
      65,    66,    66,    67,    69,    68,    70,    70,    71,    71,
      71,    71,    72,    72,    72,    72,    73,    73,    74,    75,
      76,    76,    76,    76,    77,    77,    77,    77,    77,    77,
      78,    79,    79,    79,    79,    79,    79,    79,    79,    80,
      80,    80,    81,    82,    83,    83,    84,    84,    85,    85,
      86,    86,    87,    87,    88,    89,    89,    90,    90,    91,
      91,    92,    92,    92,    93,    93,    93,    94,    94,    94,
      95,    96,    97,    95,    99,   100,   101,   102,   103,    98,
     105,   106,   107,   108,   104,   110,   111,   112,   109,   114,
     115,   116,   117,   118,   119,   113,   120,   120,   120,   122,
     123,   124,   125,   126,   127,   121,   129,   130,   128,   131,
     132,   128,   133,   134,   128,   135,   136,   128,   137,   138,
     128,   139,   128,   140,   128,   141,   128,   142,   128,   143,
     144,   128,   128,   145
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     5,     0,     0,     5,     1,     1,
       2,     2,     1,     5,     0,     4,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     3,     1,     1,
       3,     1,     3,     0,     1,     3,     0,     1,     3,     0,
       1,     0,     0,     5,     0,     0,     0,     0,     0,    14,
       0,     0,     0,     0,    11,     0,     0,     0,     7,     0,
       0,     0,     0,     0,     0,    14,     1,     1,     0,     0,
       0,     0,     0,     0,     0,    14,     0,     0,     4,     0,
       0,     4,     0,     0,     4,     0,     0,     4,     0,     0,
       4,     0,     3,     0,     3,     0,     3,     0,     3,     0,
       0,     5,     0,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 235 "ab.y" /* yacc.c:1646  */
    {
        root = buildTree("PHP_CODE_O","CODE","ER_P_C", NULL);
        head=root;head = root->left;ini_1=1;
    }
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 239 "ab.y" /* yacc.c:1646  */
    {
        head=root;
    }
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 242 "ab.y" /* yacc.c:1646  */
    {
        buildTree("","","PHP_CODE_C", root);
    }
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 245 "ab.y" /* yacc.c:1646  */
    {
        e_ast = 1;
        if(ini_1==0){
            root = buildTree("ER_P_O","CODE","ER_P_C", NULL);
            head=root;head = root->left;
            ini_1=1;
        };
    }
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 253 "ab.y" /* yacc.c:1646  */
    {    
        if(ini_2==1)
        {
            head=root;
        };
        e_ast = 1;
    }
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 260 "ab.y" /* yacc.c:1646  */
    {
        root = buildTree("","","PHP_CODE_C", root);
        e_ast = 1;
    }
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 268 "ab.y" /* yacc.c:1646  */
    { 
        e_vld(0); 
    }
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 271 "ab.y" /* yacc.c:1646  */
    { 
        e_vld(0); 
    }
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 274 "ab.y" /* yacc.c:1646  */
    { 
        (yyval.mul) = (yyvsp[0].mul); 
    }
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 278 "ab.y" /* yacc.c:1646  */
    {
        int sss = 0;
        char s[1000];
        if ((yyvsp[-1].mul).type == INT_EGER)
        {
            sprintf(s, "%d", (yyvsp[-1].mul).integer);
            sss = 1;
        }
        if ((yyvsp[-1].mul).type == STR_ING)
        {
            sprintf(s, "%s", (yyvsp[-1].mul).string);
            sss = 1;
        }
        if ((yyvsp[-1].mul).type == FLOAT_NUM)
        {
            sprintf(s, "%f", (yyvsp[-1].mul).decimal);
            sss = 1;
        }
        char a[1000];
        int aaa = 0;
        if ((yyvsp[0].mul).type == INT_EGER)
        {
            sprintf(a, "%d", (yyvsp[0].mul).integer);
            aaa = 1;
        }
        if ((yyvsp[0].mul).type == STR_ING)
        {
            sprintf(a, "%s", (yyvsp[0].mul).string);
            aaa = 1;
        }
        if ((yyvsp[0].mul).type == FLOAT_NUM)
        {
            sprintf(a, "%f", (yyvsp[0].mul).decimal);
            aaa = 1;
        }
        if(aaa==1 && sss==1)
        {
            strcat(s, a);
        }
        else if(aaa==0 && sss==1)
        {
            ;//pass
        }
        else if(aaa==1 && sss==0)
        {
            strcat(s, a);
        }
        else if(aaa==0 && sss==0)
        {
            sprintf(s, "%s", "");
        }
        (yyval.mul).type = STR_ING;
        (yyval.mul).string = s;
        if(ep_op == 1)
        {
            char *ss = (char*)malloc(sizeof(char)*100);
            sprintf(ss, "%s", s);
            buildTree("",ss,"",head->left);
            //printf(" -[%s]- \n", head->left->name);
            head = head->parent;
            c_op = 0;
        }
        ep_op = 0;
    }
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 342 "ab.y" /* yacc.c:1646  */
    { (yyval.mul) = (yyvsp[0].mul); }
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 345 "ab.y" /* yacc.c:1646  */
    {
        if ((yyvsp[0].mul).type == INT_EGER)
            printf("%d\n", (yyvsp[0].mul).integer);
        if ((yyvsp[0].mul).type == STR_ING)
            printf("%s\n", (yyvsp[0].mul).string);
        if ((yyvsp[0].mul).type == FLOAT_NUM)
            printf("%f\n", (yyvsp[0].mul).decimal);
    }
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 355 "ab.y" /* yacc.c:1646  */
    {
        (yyval.integer) = 1;
    }
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 359 "ab.y" /* yacc.c:1646  */
    {
        (yyval.integer) = 0;
    }
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 364 "ab.y" /* yacc.c:1646  */
    {
        (yyval.mul).type = FLOAT_NUM;
        (yyval.mul).decimal = (yyvsp[0].decimal);
        char *ss = (char*)malloc(sizeof(char)*100);
        if(c_op == 1)
        {
            sprintf(ss, "%f", (yyvsp[0].decimal));
            head = buildTree("",ss,"CODE_C",head);
            head = head->right;
            c_op = 0;
        }
    }
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 377 "ab.y" /* yacc.c:1646  */
    {
        (yyval.mul).type = INT_EGER;
        (yyval.mul).integer = (yyvsp[0].integer);
        if(c_op == 1)
        {
            char *ss = (char*)malloc(sizeof(char)*100);
            sprintf(ss, "%d", (yyvsp[0].integer));
            //exit(0);

            head = buildTree("",ss,"CODE_C",head);
            head = head->right;

            //buildTree("",ss,"CODE_C",head->left->right);
            //head = head->parent;
            //printf(" -[%s]- \n", head->name);
            c_op = 0;
        }
    }
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 396 "ab.y" /* yacc.c:1646  */
    {
        (yyval.mul).type = FLOAT_NUM;
        (yyval.mul).decimal = -(yyvsp[0].decimal);
        char *ss = (char*)malloc(sizeof(char)*100);
        if(c_op == 1)
        {
            sprintf(ss, "%f", -(yyvsp[0].decimal));
            head = buildTree("",ss,"CODE_C",head);
            head = head->right;
            c_op = 0;
        }
    }
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 410 "ab.y" /* yacc.c:1646  */
    {
        (yyval.mul).type = INT_EGER;
        (yyval.mul).integer = -(yyvsp[0].integer);
        if(c_op == 1)
        {
            char *ss = (char*)malloc(sizeof(char)*100);
            sprintf(ss, "%d", -(yyvsp[0].integer));
            //exit(0);

            head = buildTree("",ss,"CODE_C",head);
            head = head->right;

            //buildTree("",ss,"CODE_C",head->left->right);
            //head = head->parent;
            //printf(" -[%s]- \n", head->name);
            c_op = 0;
        }
    }
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 429 "ab.y" /* yacc.c:1646  */
    { 
        c_op = 0;
        (yyval.mul) = (yyvsp[0].mul); 
    }
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 434 "ab.y" /* yacc.c:1646  */
    {
        (yyval.mul).type = STR_ING;
        (yyval.mul).string = (yyvsp[0].string);
        char *ss = (char*)malloc(sizeof(char)*100);
        if(c_op == 1)
        {
            sprintf(ss, "%s", (yyvsp[0].string));
            head = buildTree("",ss,"CODE_C",head);
            head = head->right;
            c_op = 0;
        }
        if(ep_op == 1)
        {
            sprintf(ss, "%s", (yyvsp[0].string));
            buildTree("",ss,"",head);
            //printf(" -[%s]- \n", head->left->name);
            //head = head->parent;
            ep_op = 0;
        }
    }
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 455 "ab.y" /* yacc.c:1646  */
    {
        (yyval.mul).type = INT_EGER;
        (yyval.mul).integer = (yyvsp[0].integer);
    }
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 460 "ab.y" /* yacc.c:1646  */
    {
        (yyval.mul).type = NULL_TYPE;
    }
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 464 "ab.y" /* yacc.c:1646  */
    { e_vld(0); }
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 465 "ab.y" /* yacc.c:1646  */
    { e_vld(0); }
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 466 "ab.y" /* yacc.c:1646  */
    { 
        //e_op = 1;
        //head = buildTree("","/","",head);
        (yyval.op) = '/'; 
        icg_at = 1;
    }
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 473 "ab.y" /* yacc.c:1646  */
    { 
        //e_op = 1;
        //head = buildTree("","*","",head);
        (yyval.op) = '*'; 
        icg_at = 1;
    }
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 480 "ab.y" /* yacc.c:1646  */
    {  
        //e_op = 1;
        //head = buildTree("","+","",head);
        (yyval.op) = '+'; 
        icg_at = 1;
    }
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 486 "ab.y" /* yacc.c:1646  */
    {  
        //e_op = 1;
        //head = buildTree("","-","",head);
        (yyval.op) = '-'; 
        icg_at = 1;
    }
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 492 "ab.y" /* yacc.c:1646  */
    {  
        //e_op = 1;
        //head = buildTree("","||","",head);
        //c_op = 1;
        //head = buildTree("","CODE_C","",head);
        //head=head->left;
        //head = buildTree("","||","CODE_C",head);
        (yyval.op) = '|'; 
        icg_at = 1;
    }
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 502 "ab.y" /* yacc.c:1646  */
    {  
        //e_op = 1;
        //exit(0);
        //head = buildTree("","&&","",head);
        //c_op = 1;
        //head = buildTree("","&&","CODE_C",head);
        //head=head->right;
        (yyval.op) = '&'; 
        icg_at = 1;
    }
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 513 "ab.y" /* yacc.c:1646  */
    { (yyval.op) = 'M'; }
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 514 "ab.y" /* yacc.c:1646  */
    { (yyval.op) = 'D'; }
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 515 "ab.y" /* yacc.c:1646  */
    { (yyval.op) = 'P'; }
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 516 "ab.y" /* yacc.c:1646  */
    { (yyval.op) = 'S'; }
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 517 "ab.y" /* yacc.c:1646  */
    { (yyval.op) = 'C'; }
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 518 "ab.y" /* yacc.c:1646  */
    { 
        (yyval.op) = '='; 
        icg_a = 1;
    }
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 524 "ab.y" /* yacc.c:1646  */
    {
        e_vld(1);
        (yyval.op) = (yyvsp[0].op);
    }
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 529 "ab.y" /* yacc.c:1646  */
    {(yyval.cop)=0;
        c_op = 1;
        //printf(" -[%s]- \n", head->name);
        head = buildTree("",rc0,"CODE_C",head);
        head=head->right;
        head = buildTree("","<","CODE_C",head);
        head=head->right;
    }
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 537 "ab.y" /* yacc.c:1646  */
    {(yyval.cop)=1;
        c_op = 1;
        //head = buildTree("","CODE_C","",head);
        //head=head->left;
        head = buildTree("",rc0,"CODE_C",head);
        head=head->right;
        head = buildTree("","<","CODE_C",head);
        head=head->right;
    }
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 546 "ab.y" /* yacc.c:1646  */
    {(yyval.cop)=2;
        c_op = 1;
        //head = buildTree("","CODE_C","",head);
        //head=head->left;
        head = buildTree("",rc0,"CODE_C",head);
        head=head->right;
        head = buildTree("","<=","CODE_C",head);
        head=head->right;
    }
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 555 "ab.y" /* yacc.c:1646  */
    {(yyval.cop)=3;
        c_op = 1;
        //head = buildTree("","CODE_C","",head);
        //head=head->left;
        head = buildTree("",rc0,"CODE_C",head);
        head=head->right;
        head = buildTree("",">=","CODE_C",head);
        head=head->right;
    }
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 564 "ab.y" /* yacc.c:1646  */
    {(yyval.cop)=4;
        c_op = 1;
        //head = buildTree("","CODE_C","",head);
        //head=head->left;
        head = buildTree("",rc0,"CODE_C",head);
        head=head->right;
        head = buildTree("","==","CODE_C",head);
        head=head->right;
    }
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 573 "ab.y" /* yacc.c:1646  */
    {(yyval.cop)=5;
        c_op = 1;
        //head = buildTree("","CODE_C","",head);
        //head=head->left;
        head = buildTree("",rc0,"CODE_C",head);
        head=head->right;
        head = buildTree("","!=","CODE_C",head);
        head=head->right;
    }
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 582 "ab.y" /* yacc.c:1646  */
    {(yyval.cop)=6;
        c_op = 1;
        //head = buildTree("","CODE_C","",head);
        //head=head->left;
        head = buildTree("",rc0,"CODE_C",head);
        head=head->right;
        head = buildTree("","===","CODE_C",head);
        head=head->right;
    }
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 591 "ab.y" /* yacc.c:1646  */
    { (yyval.cop)=7;
        c_op = 1;
        //head = buildTree("","CODE_C","",head);
        //head=head->left;
        head = buildTree("",rc0,"CODE_C",head);
        head=head->right;
        head = buildTree("","!==","CODE_C",head);
        head=head->right;

    }
#line 2258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 602 "ab.y" /* yacc.c:1646  */
    { (yyval.cop)=8;
        head = buildTree("","AND","CODE_C",head);
        head=head->right;
    }
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 606 "ab.y" /* yacc.c:1646  */
    {  (yyval.cop)=9;
        head = buildTree("","OR","CODE_C",head);
        head=head->right;
    }
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 610 "ab.y" /* yacc.c:1646  */
    {  (yyval.cop)=10;
        head = buildTree("","XOR","CODE_C",head);
        head=head->right;
    }
#line 2285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 614 "ab.y" /* yacc.c:1646  */
    { e_vld(0);(yyval.cop)=(yyvsp[0].cop); }
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 615 "ab.y" /* yacc.c:1646  */
    { e_vld(0);(yyval.cop)=(yyvsp[0].cop); }
#line 2297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 619 "ab.y" /* yacc.c:1646  */
    { (yyval.mul) = (yyvsp[0].mul); int tno1=-1,tno2=-1;
    if((yyvsp[0].mul).tno==-1){
    if((yyvsp[0].mul).type==INT_EGER){
    // sprintf(astemp," %s\nT%d = %d ",astemp,++Tno,$1.integer);
        if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = %d",astemp,++Tno,(yyvsp[0].mul).integer);
}
    // Tno++;
    }
    else if((yyvsp[0].mul).type==STR_ING){
    // sprintf(astemp," %s\nT%d = %d ",astemp,++Tno,$1.string);
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = %s",astemp,++Tno,(yyvsp[0].mul).string);
}
    // Tno++;
    }
    else if((yyvsp[0].mul).type==FLOAT_NUM){

    // sprintf(astemp," %s\nT%d = %d ",astemp,++Tno,$1.integer);
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = %f",astemp,++Tno,(yyvsp[0].mul).decimal);
}
    // Tno++;
    }tno1=Tno;}
    else{
        tno1=(yyvsp[0].mul).tno;
    }
    //printf("%d\n",$3.tno);

    (yyval.mul).tno=Tno; }
#line 2335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 653 "ab.y" /* yacc.c:1646  */
    {
        //buildTree("","-","-",head);
        //printf(" [%s] \n",t_identifier_name);
        //buildTree("",t_identifier_name,"",head->left);
        //head = head->parent;

        list_t *c = lookup((yyvsp[0].string));
        if (c->data_value != NULL)
        {
            if (c->data_type == "Integer")
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = atoi(c->data_value);
            }
            if (c->data_type == "String")
            {
                (yyval.mul).type = STR_ING;
                (yyval.mul).string = c->data_value;
            }
            if (c->data_type == "Float")
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = atof(c->data_value);
            }
        }
        else
        {
            printf("Error: %s called before initialization\n", (yyvsp[0].string));
            tt = 0;
        }

        int tno1=-1,tno2=-1;
    if((yyval.mul).tno==-1){
                if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = %s",astemp,++Tno,(yyvsp[0].string));
}
    tno1=Tno;}
    else{
        tno1=(yyval.mul).tno;
    }
    //printf("%d\n",$3.tno);

    (yyval.mul).tno=Tno;
    }
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 698 "ab.y" /* yacc.c:1646  */
    {
    //printf("EXPR2\n");
    // we=newTemp(); 

        //codeGenerator($1,$2,$3,we);

        //expr_p = (node*)malloc(sizeof(node));
        //expr_p->name = (char*)malloc(sizeof(char)*100);
        //expr_p = buildTree("","","", expr_p);
        //expr_p->name = "";
        //printf(" -[%s]- ", head->name);
        char r1[100]; 
        char r2[100]; 
        int inva = 0;
        if ((yyvsp[-2].mul).type == STR_ING||(yyvsp[0].mul).type == STR_ING)
        {
            printf("Error: Non-Numeric value encountered\n");
            tt = 0;
        }
        // printf("beforee: %s",astemp);
    // printf("%s\n %c ",astemp,$2);
        // printf("%d %d \n",$1.type,$3.type);
    // printf("%c\n",$1.tno);
    int tno1=-1,tno2=-1;
    if((yyvsp[-2].mul).tno==-1){
    if((yyvsp[-2].mul).type==INT_EGER){
    // sprintf(astemp," %s\nT%d = %d ",astemp,++Tno,$1.integer);
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = %d",astemp,++Tno,(yyvsp[-2].mul).integer);
}
    // Tno++;
    }
    else if((yyvsp[-2].mul).type==STR_ING){
    // sprintf(astemp," %s\nT%d = %d ",astemp,++Tno,$1.string);
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = %s",astemp,++Tno,(yyvsp[-2].mul).string);
}
    // Tno++;
    }
    else if((yyvsp[-2].mul).type==FLOAT_NUM){

    // sprintf(astemp," %s\nT%d = %d ",astemp,++Tno,$1.integer);
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = %f",astemp,++Tno,(yyvsp[-2].mul).decimal);
}
    // Tno++;
    }tno1=Tno;}
    else{
        tno1=(yyvsp[-2].mul).tno;
    }
    //printf("%d\n",$3.tno);

    if((yyvsp[0].mul).tno==-1){
    if((yyvsp[0].mul).type==INT_EGER){
    // sprintf(astemp," %s\nT%d = %d ",astemp,++Tno,$3.integer);
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = %d",astemp,++Tno,(yyvsp[0].mul).integer);
}
    // Tno++;
    }
    else if((yyvsp[0].mul).type==STR_ING){
    // sprintf(astemp," %s\nT%d = %d ",astemp,++Tno,$3.string);
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = %s",astemp,++Tno,(yyvsp[0].mul).string);
}
    // Tno++;
    }
    else if((yyvsp[0].mul).type==FLOAT_NUM){

    // sprintf(astemp," %s\nT%d = %d ",astemp,++Tno,$3.integer);
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = %f",astemp,++Tno,(yyvsp[0].mul).decimal);
}

    // Tno++;
    }tno2=Tno;}
    else{
        tno2=(yyvsp[0].mul).tno;
    }
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = T%d %c T%d",astemp,++Tno,tno1,(yyvsp[-1].op),tno2); 
}
    (yyval.mul).tno=Tno;
    // tstack[tstacktop++]=Tno;
        // sprintf(astemp,"%s\n  %c ",astemp,$2);
        // printf("under expr1 : %s",astemp);
        switch ((yyvsp[-1].op))
        {
        case '+':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {   
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal + (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).integer + (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal + (yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer + (yyvsp[0].mul).integer;
                break;
            }
        case '-':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal - (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).integer - (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal - (yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer - (yyvsp[0].mul).integer;
                break;
            }
        case '*':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal * (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).integer * (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal * (yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer * (yyvsp[0].mul).integer;
                break;
            }
        case '/':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal / (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).integer / (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal / (yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                if ((yyvsp[-2].mul).integer % (yyvsp[0].mul).integer == 0)
                {
                    (yyval.mul).type = INT_EGER;
                    (yyval.mul).integer = (yyvsp[-2].mul).integer / (yyvsp[0].mul).integer;
                    break;
                }
                else
                {
                    (yyval.mul).type = FLOAT_NUM;
                    (yyval.mul).decimal = (float)(yyvsp[-2].mul).integer / (float)(yyvsp[0].mul).integer;
                    break;
                }
            }
        case '^':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (int)(yyvsp[-2].mul).decimal ^ (int)(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer ^ (int)(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (int)(yyvsp[-2].mul).decimal ^ (yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer ^ (yyvsp[0].mul).integer;
                break;
            }
        case '&':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (int)(yyvsp[-2].mul).decimal & (int)(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer & (int)(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (int)(yyvsp[-2].mul).decimal & (yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer & (yyvsp[0].mul).integer;
                break;
            }
        case '|':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (int)(yyvsp[-2].mul).decimal|(int)(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer|(int)(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (int)(yyvsp[-2].mul).decimal|(yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer|(yyvsp[0].mul).integer;
                break;
            }
        case 'A':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).decimal && (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer && (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).decimal && (yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer && (yyvsp[0].mul).integer;
                break;
            }
        case 'O':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).decimal||(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer||(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).decimal||(yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer||(yyvsp[0].mul).integer;
                break;
            }
        }}
#line 2720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1029 "ab.y" /* yacc.c:1646  */
    {(yyval.mul)=(yyvsp[0].mul);
    }
#line 2727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1031 "ab.y" /* yacc.c:1646  */
    {
    //printf("EXPR1\n");
    // we=newTemp(); 
        //codeGenerator($1,$2,$3,we);

        //expr_p = (node*)malloc(sizeof(node));
        //expr_p->name = (char*)malloc(sizeof(char)*100);
        //expr_p = buildTree("","","", expr_p);
        //expr_p->name = "";
        //printf(" -[%s]- ", head->name);
        char r1[100]; 
        char r2[100]; 
        int inva = 0;
        if ((yyvsp[-2].mul).type == STR_ING||(yyvsp[0].mul).type == STR_ING)
        {
            printf("Error: Non-Numeric value encountered\n");
            tt = 0;
        }
        // printf("beforee: %s",astemp);    
    int tno1=-1,tno2=-1;
    if((yyvsp[-2].mul).tno==-1){
    if((yyvsp[-2].mul).type==INT_EGER){
    // sprintf(astemp," %s\nT%d = %d ",astemp,++Tno,$1.integer);
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = %d",astemp,++Tno,(yyvsp[-2].mul).integer);
}

    // Tno++;
    }
    else if((yyvsp[-2].mul).type==STR_ING){
    // sprintf(astemp," %s\nT%d = %d ",astemp,++Tno,$1.string);
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = %s",astemp,++Tno,(yyvsp[-2].mul).string);
}
    // Tno++;
    }
    else if((yyvsp[-2].mul).type==FLOAT_NUM){

    // sprintf(astemp," %s\nT%d = %d ",astemp,++Tno,$1.integer);
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = %f",astemp,++Tno,(yyvsp[-2].mul).decimal);
}

    // Tno++;
    }tno1=Tno;}
    else{
        tno1=(yyvsp[-2].mul).tno;
    }
    //printf("%d\n",$3.tno);

    if((yyvsp[0].mul).tno==-1){
    if((yyvsp[0].mul).type==INT_EGER){
    // sprintf(astemp," %s\nT%d = %d ",astemp,++Tno,$3.integer);
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = %d",astemp,++Tno,(yyvsp[0].mul).integer);
}

    // Tno++;
    }
    else if((yyvsp[0].mul).type==STR_ING){
    // sprintf(astemp," %s\nT%d = %d ",astemp,++Tno,$3.string);
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = %s",astemp,++Tno,(yyvsp[0].mul).string);
}
    // Tno++;
    }
    else if((yyvsp[0].mul).type==FLOAT_NUM){

    // sprintf(astemp," %s\nT%d = %d ",astemp,++Tno,$3.integer);
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = %f",astemp,++Tno,(yyvsp[0].mul).decimal);
}

    // Tno++;
    }tno2=Tno;}
    else{
        tno2=(yyvsp[0].mul).tno;
    }
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = T%d %c T%d",astemp,++Tno,tno1,(yyvsp[-1].op),tno2); 
}
    (yyval.mul).tno=Tno;
        switch ((yyvsp[-1].op))
        {
        case '+':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {   
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal + (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).integer + (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal + (yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer + (yyvsp[0].mul).integer;
                break;
            }
        case '-':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal - (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).integer - (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal - (yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer - (yyvsp[0].mul).integer;
                break;
            }
        case '*':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal * (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).integer * (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal * (yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer * (yyvsp[0].mul).integer;
                break;
            }
        case '/':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal / (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).integer / (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal / (yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                if ((yyvsp[-2].mul).integer % (yyvsp[0].mul).integer == 0)
                {
                    (yyval.mul).type = INT_EGER;
                    (yyval.mul).integer = (yyvsp[-2].mul).integer / (yyvsp[0].mul).integer;
                    break;
                }
                else
                {
                    (yyval.mul).type = FLOAT_NUM;
                    (yyval.mul).decimal = (float)(yyvsp[-2].mul).integer / (float)(yyvsp[0].mul).integer;
                    break;
                }
            }
        case '^':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (int)(yyvsp[-2].mul).decimal ^ (int)(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer ^ (int)(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (int)(yyvsp[-2].mul).decimal ^ (yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer ^ (yyvsp[0].mul).integer;
                break;
            }
        case '&':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (int)(yyvsp[-2].mul).decimal & (int)(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer & (int)(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (int)(yyvsp[-2].mul).decimal & (yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer & (yyvsp[0].mul).integer;
                break;
            }
        case '|':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (int)(yyvsp[-2].mul).decimal|(int)(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer|(int)(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (int)(yyvsp[-2].mul).decimal|(yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer|(yyvsp[0].mul).integer;
                break;
            }
        case 'A':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).decimal && (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer && (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).decimal && (yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer && (yyvsp[0].mul).integer;
                break;
            }
        case 'O':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).decimal||(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer||(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).decimal||(yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer||(yyvsp[0].mul).integer;
                break;
            }
        }}
#line 3058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 1358 "ab.y" /* yacc.c:1646  */
    {(yyval.mul)=(yyvsp[0].mul);
    // Tv=0;
    //printf("EXPR1-EXPR2\n");
    }
#line 3067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 1364 "ab.y" /* yacc.c:1646  */
    {  //printf("EXPR\n");
        // we=newTemp(); 
        //codeGenerator($1,$2,$3,we);
        // sprintf(astemp,"%s %c ",astemp,$2);
        //expr_p = (node*)malloc(sizeof(node));
        //expr_p->name = (char*)malloc(sizeof(char)*100);
        //expr_p = buildTree("","","", expr_p);
        //expr_p->name = "";
        //printf(" -[%s]- ", head->name);
        char r1[100]; 
        char r2[100]; 
        int inva = 0;
        if ((yyvsp[-2].mul).type == STR_ING||(yyvsp[0].mul).type == STR_ING)
        {
            printf("Error: Non-Numeric value encountered\n");
            tt = 0;
        }
    int tno1=-1,tno2=-1;
    if((yyvsp[-2].mul).tno==-1){
    if((yyvsp[-2].mul).type==INT_EGER){
    // sprintf(astemp," %s\nT%d = %d ",astemp,++Tno,$1.integer);
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = %d",astemp,++Tno,(yyvsp[-2].mul).integer);
}
    // Tno++;
    }
    else if((yyvsp[-2].mul).type==STR_ING){
    // sprintf(astemp," %s\nT%d = %d ",astemp,++Tno,$1.string);
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = %s",astemp,++Tno,(yyvsp[-2].mul).string);
}
    // Tno++;
    }
    else if((yyvsp[-2].mul).type==FLOAT_NUM){

    // sprintf(astemp," %s\nT%d = %d ",astemp,++Tno,$1.integer);
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = %f",astemp,++Tno,(yyvsp[-2].mul).decimal);
}
    // Tno++;
    }tno1=Tno;}
    else{
        tno1=(yyvsp[-2].mul).tno;
    }
    //printf("%d\n",$3.tno);

    if((yyvsp[0].mul).tno==-1){
    if((yyvsp[0].mul).type==INT_EGER){
    // sprintf(astemp," %s\nT%d = %d ",astemp,++Tno,$3.integer);
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = %d",astemp,++Tno,(yyvsp[0].mul).integer);
}
    // Tno++;
    }
    else if((yyvsp[0].mul).type==STR_ING){
    // sprintf(astemp," %s\nT%d = %d ",astemp,++Tno,$3.string);
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = %s",astemp,++Tno,(yyvsp[0].mul).string);
}
    // Tno++;
    }
    else if((yyvsp[0].mul).type==FLOAT_NUM){

    // sprintf(astemp," %s\nT%d = %d ",astemp,++Tno,$3.integer);
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = %f",astemp,++Tno,(yyvsp[0].mul).decimal);
}
    // Tno++;
    }tno2=Tno;}
    else{
        tno2=(yyvsp[0].mul).tno;
    }
            if(tt == 1 || tt2 == 1)
{
    sprintf(astemp,"%s\nT%d = T%d %c T%d",astemp,++Tno,tno1,(yyvsp[-1].op),tno2); 
}
    (yyval.mul).tno=Tno;  
    switch ((yyvsp[-1].op))

        {
        case '+':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal + (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).integer + (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal + (yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer + (yyvsp[0].mul).integer;
                break;
            }
        case '-':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal - (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).integer - (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal - (yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer - (yyvsp[0].mul).integer;
                break;
            }
        case '*':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal * (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).integer * (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal * (yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer * (yyvsp[0].mul).integer;
                break;
            }
        case '/':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal / (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).integer / (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[-2].mul).decimal / (yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                if ((yyvsp[-2].mul).integer % (yyvsp[0].mul).integer == 0)
                {
                    (yyval.mul).type = INT_EGER;
                    (yyval.mul).integer = (yyvsp[-2].mul).integer / (yyvsp[0].mul).integer;
                    break;
                }
                else
                {
                    (yyval.mul).type = FLOAT_NUM;
                    (yyval.mul).decimal = (float)(yyvsp[-2].mul).integer / (float)(yyvsp[0].mul).integer;
                    break;
                }
            }
        case '^':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (int)(yyvsp[-2].mul).decimal ^ (int)(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer ^ (int)(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (int)(yyvsp[-2].mul).decimal ^ (yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer ^ (yyvsp[0].mul).integer;
                break;
            }
        case '&':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (int)(yyvsp[-2].mul).decimal & (int)(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer & (int)(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (int)(yyvsp[-2].mul).decimal & (yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer & (yyvsp[0].mul).integer;
                break;
            }
        case '|':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (int)(yyvsp[-2].mul).decimal|(int)(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer|(int)(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (int)(yyvsp[-2].mul).decimal|(yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer|(yyvsp[0].mul).integer;
                break;
            }
        case 'A':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).decimal && (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer && (yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).decimal && (yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer && (yyvsp[0].mul).integer;
                break;
            }
        case 'O':
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).decimal||(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer||(yyvsp[0].mul).decimal;
                break;
            }
            if ((yyvsp[-2].mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).decimal||(yyvsp[0].mul).integer;
                break;
            }
            if ((yyvsp[-2].mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[-2].mul).integer||(yyvsp[0].mul).integer;
                break;
            }
        }
        // printf("EXPR1 OPER EXPR \n");
    }
#line 3395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 1687 "ab.y" /* yacc.c:1646  */
    { (yyval.mul) = (yyvsp[0].mul); //printf("EXPR-EXPR1\n");
    }
#line 3402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 1692 "ab.y" /* yacc.c:1646  */
    { 
       
            //newICG(icg_count);
        //q[icg_count].res=t_identifier_name;
        //q[icg_count].op="=";
        //icg_count+=1;

        /*{buildTree("","","",head);head=head->left;}*/
        int a_op_s = 0;
        //char opp = "";
        int inva = 0;
        (yyval.mul).type = NULL_TYPE;
        list_t *c = lookup((yyvsp[-2].string));
        if (c->data_value != NULL)
        {
            if (c->data_type == "Integer")
            {
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = atoi(c->data_value);
            }
            if (c->data_type == "String")
            {
                (yyval.mul).type = STR_ING;
                (yyval.mul).string = c->data_value;
            }
            if (c->data_type == "Float")
            {
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = atof(c->data_value);
            }
        }

        if ((yyvsp[0].mul).type == INT_EGER)
        {
            switch ((yyvsp[-1].op))
            {
            case '=':
                    if(tt == 1 || tt2 == 1)
{
                sprintf(astemp,"%s\n%s %c T%d",astemp,(yyvsp[-2].string),(yyvsp[-1].op),Tno);
}
                (yyval.mul).type = INT_EGER;
                (yyval.mul).integer = (yyvsp[0].mul).integer;
                a_op_s = 1;
                break;
            case 'M':
                    if(tt == 1 || tt2 == 1)
{
                sprintf(astemp,"%s\nT%d = %s",astemp,++Tno,(yyvsp[-2].string));
                sprintf(astemp,"%s\nT%d = T%d * T%d",astemp,++Tno,Tno,Tno-1);
                sprintf(astemp,"%s\n%s = T%d",astemp,(yyvsp[-2].string),Tno);
}
                if ((yyval.mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
                {
                    (yyval.mul).type = FLOAT_NUM;
                    (yyval.mul).decimal = (yyval.mul).decimal * (yyvsp[0].mul).integer;
                    a_op_s = 1;
                    break;
                }
                if ((yyval.mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
                {
                    (yyval.mul).type = INT_EGER;
                    (yyval.mul).integer = (yyval.mul).integer * (yyvsp[0].mul).integer;
                    a_op_s = 1;
                    break;
                }
            case 'D':
                        if(tt == 1 || tt2 == 1)
{
                sprintf(astemp,"%s\nT%d = %s",astemp,++Tno,(yyvsp[-2].string));
                sprintf(astemp,"%s\nT%d = T%d / T%d",astemp,++Tno,Tno,Tno-1);
                sprintf(astemp,"%s\n%s = T%d",astemp,(yyvsp[-2].string),Tno);
}
                if ((yyval.mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
                {
                    (yyval.mul).type = FLOAT_NUM;
                    if((yyvsp[0].mul).integer == 0)
                    {
                        printf("Error: Operation Division by 0 Not Allowed\n");
                        inva = 1;
                        break;
                    }
                    (yyval.mul).decimal = (yyval.mul).decimal / (yyvsp[0].mul).integer;
                    a_op_s = 1;
                    break;
                }
                if ((yyval.mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
                {
                    if((yyvsp[0].mul).integer == 0)
                    {
                        printf("Error: Operation Division by 0 Not Allowed\n");
                        inva = 1;
                        break;
                    }
                    if ((yyval.mul).integer % (yyvsp[0].mul).integer == 0)
                    {
                        (yyval.mul).type = INT_EGER;
                        (yyval.mul).integer = (yyval.mul).integer / (yyvsp[0].mul).integer;
                        a_op_s = 1;
                        break;
                    }
                    else
                    {
                        (yyval.mul).type = FLOAT_NUM;
                        (yyval.mul).decimal = (float)(yyval.mul).integer / (float)(yyvsp[0].mul).integer;
                        a_op_s = 1;
                        break;
                    }
                }
            case 'P':
                    if(tt == 1 || tt2 == 1)
{
                sprintf(astemp,"%s\nT%d = %s",astemp,++Tno,(yyvsp[-2].string));
                sprintf(astemp,"%s\nT%d = T%d + T%d",astemp,++Tno,Tno,Tno-1);
                sprintf(astemp,"%s\n%s = T%d",astemp,(yyvsp[-2].string),Tno);
}
                if ((yyval.mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
                {
                    (yyval.mul).type = FLOAT_NUM;
                    (yyval.mul).decimal = (yyval.mul).decimal + (yyvsp[0].mul).integer;
                    a_op_s = 1;
                    break;
                }
                if ((yyval.mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
                {
                    (yyval.mul).type = INT_EGER;
                    (yyval.mul).integer = (yyval.mul).integer + (yyvsp[0].mul).integer;
                    a_op_s = 1;
                    break;
                }
            case 'S':
                    if(tt == 1 || tt2 == 1)
{
                sprintf(astemp,"%s\nT%d = %s",astemp,++Tno,(yyvsp[-2].string));
                sprintf(astemp,"%s\nT%d = T%d - T%d",astemp,++Tno,Tno,Tno-1);
                sprintf(astemp,"%s\n%s = T%d",astemp,(yyvsp[-2].string),Tno);
}
                if ((yyval.mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
                {
                    (yyval.mul).type = FLOAT_NUM;
                    (yyval.mul).decimal = (yyval.mul).decimal - (yyvsp[0].mul).integer;
                    a_op_s = 1;
                    break;
                }
                if ((yyval.mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
                {
                    (yyval.mul).type = INT_EGER;
                    (yyval.mul).integer = (yyval.mul).integer - (yyvsp[0].mul).integer;
                    a_op_s = 1;
                    break;
                }
            case 'C':
                    if(tt == 1 || tt2 == 1)
{
                sprintf(astemp,"%s\nT%d = %s",astemp,++Tno,(yyvsp[-2].string));
                sprintf(astemp,"%s\nT%d = T%d . T%d",astemp,++Tno,Tno,Tno-1);
                sprintf(astemp,"%s\n%s = T%d",astemp,(yyvsp[-2].string),Tno);
}
                if ((yyval.mul).type == FLOAT_NUM && (yyvsp[0].mul).type == INT_EGER)
                {
                    (yyval.mul).type = STR_ING;
                    sprintf((yyval.mul).string, "%f%d", (yyval.mul).decimal, (yyvsp[0].mul).integer);
                    a_op_s = 1;
                    break;
                }
                if ((yyval.mul).type == INT_EGER && (yyvsp[0].mul).type == INT_EGER)
                {
                    (yyval.mul).type = STR_ING;
                    sprintf((yyval.mul).string, "%d%d", (yyval.mul).integer, (yyvsp[0].mul).integer);
                    a_op_s = 1;
                    break;
                }
                if ((yyval.mul).type == STR_ING && (yyvsp[0].mul).type == INT_EGER)
                {
                    (yyval.mul).type = STR_ING;
                    sprintf((yyval.mul).string, "%s%d", (yyval.mul).string, (yyvsp[0].mul).integer);
                    a_op_s = 1;
                    break;
                }
                tt = 0;
                printf("Error: Operation Not Allowed\n");
                (yyval.mul).type = NULL_TYPE;
            }
        }
        
        if ((yyvsp[0].mul).type == FLOAT_NUM)
        {
            switch ((yyvsp[-1].op))
            {
            case '=':
                    if(tt == 1 || tt2 == 1)
{
                sprintf(astemp,"%s\n%s %c T%d",astemp,(yyvsp[-2].string),(yyvsp[-1].op),Tno);
}
                (yyval.mul).type = FLOAT_NUM;
                (yyval.mul).decimal = (yyvsp[0].mul).decimal;
                a_op_s = 1;
                break;
            case 'M':
                    if(tt == 1 || tt2 == 1)
{
                sprintf(astemp,"%s\nT%d = %s",astemp,++Tno,(yyvsp[-2].string));
                sprintf(astemp,"%s\nT%d = T%d * T%d",astemp,++Tno,Tno,Tno-1);
                sprintf(astemp,"%s\n%s = T%d",astemp,(yyvsp[-2].string),Tno);
}
                if ((yyval.mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
                {
                    (yyval.mul).type = FLOAT_NUM;
                    (yyval.mul).decimal = (yyval.mul).decimal * (yyvsp[0].mul).decimal;
                    a_op_s = 1;
                    break;
                }
                if ((yyval.mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
                {
                    (yyval.mul).type = FLOAT_NUM;
                    (yyval.mul).integer = (yyval.mul).integer * (yyvsp[0].mul).decimal;
                    a_op_s = 1;
                    break;
                }
            case 'D':
                    if(tt == 1 || tt2 == 1)
{
            sprintf(astemp,"%s\nT%d = %s",astemp,++Tno,(yyvsp[-2].string));
                sprintf(astemp,"%s\nT%d = T%d / T%d",astemp,++Tno,Tno,Tno-1);
                sprintf(astemp,"%s\n%s = T%d",astemp,(yyvsp[-2].string),Tno);
}
                if ((yyval.mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
                {
                    (yyval.mul).type = FLOAT_NUM;
                    if((yyvsp[0].mul).decimal == 0)
                    {
                        printf("Error: Operation Division by 0 Not Allowed\n");
                        inva = 1;
                        break;
                    }
                    (yyval.mul).decimal = (yyval.mul).decimal / (yyvsp[0].mul).decimal;
                    a_op_s = 1;
                    break;
                }
                if ((yyval.mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
                {
                    (yyval.mul).type = FLOAT_NUM;
                    if((yyvsp[0].mul).decimal == 0)
                    {
                        printf("Error: Operation Division by 0 Not Allowed\n");
                        inva = 1;
                        break;
                    }
                    (yyval.mul).decimal = (yyval.mul).integer / (yyvsp[0].mul).decimal;
                    a_op_s = 1;
                    break;
                }
            case 'P':
                    if(tt == 1 || tt2 == 1)
{
            sprintf(astemp,"%s\nT%d = %s",astemp,++Tno,(yyvsp[-2].string));
                sprintf(astemp,"%s\nT%d = T%d + T%d",astemp,++Tno,Tno,Tno-1);
                sprintf(astemp,"%s\n%s = T%d",astemp,(yyvsp[-2].string),Tno);
}
                if ((yyval.mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
                {
                    (yyval.mul).type = FLOAT_NUM;
                    (yyval.mul).decimal = (yyval.mul).decimal + (yyvsp[0].mul).decimal;
                    a_op_s = 1;
                    break;
                }
                if ((yyval.mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
                {
                    (yyval.mul).type = FLOAT_NUM;
                    (yyval.mul).decimal = (yyval.mul).integer + (yyvsp[0].mul).decimal;
                    a_op_s = 1;
                    break;
                }
            case 'S':
                    if(tt == 1 || tt2 == 1)
{
            sprintf(astemp,"%s\nT%d = %s",astemp,++Tno,(yyvsp[-2].string));
                sprintf(astemp,"%s\nT%d = T%d - T%d",astemp,++Tno,Tno,Tno-1);
                sprintf(astemp,"%s\n%s = T%d",astemp,(yyvsp[-2].string),Tno);
}
                if ((yyval.mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
                {
                    (yyval.mul).type = FLOAT_NUM;
                    (yyval.mul).decimal = (yyval.mul).decimal - (yyvsp[0].mul).decimal;
                    a_op_s = 1;
                    break;
                }
                if ((yyval.mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
                {
                    (yyval.mul).type = FLOAT_NUM;
                    (yyval.mul).decimal = (yyval.mul).integer - (yyvsp[0].mul).decimal;
                    a_op_s = 1;
                    break;
                }
            case 'C':
                    if(tt == 1 || tt2 == 1)
{
                sprintf(astemp,"%s\nT%d = %s",astemp,++Tno,(yyvsp[-2].string));
                sprintf(astemp,"%s\nT%d = T%d . T%d",astemp,++Tno,Tno,Tno-1);
                sprintf(astemp,"%s\n%s = T%d",astemp,(yyvsp[-2].string),Tno);
}
                if ((yyval.mul).type == FLOAT_NUM && (yyvsp[0].mul).type == FLOAT_NUM)
                {
                    (yyval.mul).type = STR_ING;
                    sprintf((yyval.mul).string, "%f%f", (yyval.mul).decimal, (yyvsp[0].mul).decimal);
                    a_op_s = 1;
                    break;
                }
                if ((yyval.mul).type == INT_EGER && (yyvsp[0].mul).type == FLOAT_NUM)
                {
                    (yyval.mul).type = STR_ING;
                    sprintf((yyval.mul).string, "%d%f", (yyval.mul).integer, (yyvsp[0].mul).decimal);
                    a_op_s = 1;
                    break;
                }
                if ((yyval.mul).type == STR_ING && (yyvsp[0].mul).type == FLOAT_NUM)
                {
                    (yyval.mul).type = STR_ING;
                    sprintf((yyval.mul).string, "%s%f", (yyval.mul).string, (yyvsp[0].mul).decimal);
                    a_op_s = 1;
                    break;
                }
                tt = 0;
                printf("Error: Operation Not Allowed\n");
                (yyval.mul).type = NULL_TYPE;
            }
        }

        if ((yyvsp[0].mul).type == STR_ING)
        {
            switch ((yyvsp[-1].op))
            {
            case '=':
                    if(tt == 1 || tt2 == 1)
{
                sprintf(astemp,"%s\n%s %c T%d",astemp,(yyvsp[-2].string),(yyvsp[-1].op),Tno);
}
                (yyval.mul).type = STR_ING;
                (yyval.mul).string = (yyvsp[0].mul).string;
                a_op_s = 1;
                break;
            case 'M':
            case 'D':
            case 'P':
            case 'S':
                tt = 0;
                printf("Error: Operation Not Allowed\n");
                (yyval.mul).type = NULL_TYPE;
                break;
            case 'C':
                if ((yyval.mul).type == FLOAT_NUM && (yyvsp[0].mul).type == STR_ING)
                {
                    (yyval.mul).type = STR_ING;
                    sprintf((yyval.mul).string, "%f%s", (yyval.mul).decimal, (yyvsp[0].mul).string);
                    a_op_s = 1;
                    break;
                }
                if ((yyval.mul).type == INT_EGER && (yyvsp[0].mul).type == STR_ING)
                {
                    (yyval.mul).type = STR_ING;
                    sprintf((yyval.mul).string, "%d%s", (yyval.mul).integer, (yyvsp[0].mul).string);
                    a_op_s = 1;
                    break;
                }
                if ((yyval.mul).type == STR_ING && (yyvsp[0].mul).type == STR_ING)
                {
                    (yyval.mul).type = STR_ING;
                    sprintf((yyval.mul).string, "%s%s", (yyval.mul).string, (yyvsp[0].mul).string);
                    a_op_s = 1;
                    break;
                }
                tt = 0;
                printf("Error: Operation Not Allowed\n");
                (yyval.mul).type = NULL_TYPE;
            }
        }

        c->data_type = malloc(sizeof(char) * 20);
        c->data_value = malloc(sizeof(char) * 100);
        char a[100];
        if ((yyval.mul).type == INT_EGER)
        {
            c->data_type = "Integer";
            sprintf(a, "%d", (yyval.mul).integer);
            memcpy(c->data_value, a, sizeof(a));
        }
        else if ((yyval.mul).type == FLOAT_NUM)
        {
            c->data_type = "Float";
            sprintf(a, "%f", (yyval.mul).decimal);
            memcpy(c->data_value, a, sizeof(a));
        }
        else if ((yyval.mul).type == STR_ING)
        {
            c->data_type = "String";
            sprintf(a, "%s", (yyval.mul).string);
            memcpy(c->data_value, a, sizeof(a));
        }
        if(a_op_s==1 && inva == 0)
        {
            buildTree("","=","",head);
            //printf(" -[%s]- ",head->name);
            head=head->left;
            buildTree("",c,c->data_value,head);
            head=head->parent;
            a_op_s=0;
        }
    //printf("%s\n",astemp);
    //sprintf(icode,"%s\n%s",astemp);
            if(tt == 1 || tt2 == 1)
{
        free(icode_temp);
        icode_temp = (char*)malloc(sizeof(char)*100);
        sprintf(icode_temp, "%s",astemp);//\n
        // printf("\n%s\n",astemp);
        strcat(icode, icode_temp);//UNCOMMENT
    sprintf(astemp,"");
}
    }
#line 3826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 2116 "ab.y" /* yacc.c:1646  */
    {
                if(tt == 1 || tt2 == 1)
{
        sprintf(astemp,"%s\nT%d = T%d %s T%d",astemp,++Tno,(yyvsp[-2].mul).tno,copp[(yyvsp[-1].cop)],(yyvsp[0].mul).tno);
        Cno=Tno;
        sprintf(icode,"%s\n%s",icode,astemp);
        sprintf(astemp,"");
}
        (yyval.mul).tno=Cno;
        // printf("%d",$$.tno);

    }
#line 3843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 2127 "ab.y" /* yacc.c:1646  */
    { //printf("%d***",$1.type);$$=$1;
                if(tt == 1 || tt2 == 1)
{
        Cno=Tno;
        sprintf(icode,"%s\n%s",icode,astemp);
        sprintf(astemp,"");
}
        (yyval.mul).tno=Cno; 
        // printf("%d",$$.tno);
    }
#line 3858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 2138 "ab.y" /* yacc.c:1646  */
    {(yyval.mul)=(yyvsp[0].mul);}
#line 3864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 2138 "ab.y" /* yacc.c:1646  */
    {
                if(tt == 1 || tt2 == 1)
{
        sprintf(astemp,"%s\nT%d = T%d %s T%d",astemp,++Tno,(yyvsp[-2].mul).tno,copp[(yyvsp[-1].cop)],(yyvsp[0].mul).tno);
        Cno=Tno;
        sprintf(icode,"%s\n%s",icode,astemp);
        sprintf(astemp,"");
}
        (yyval.mul).tno=Cno;
        // printf("%d",$$.tno);
        
    }
#line 3881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 2157 "ab.y" /* yacc.c:1646  */
    {buildTree("","","CODE",head);head=head->right;

            free(icode_temp);
            icode_temp = (char*)malloc(sizeof(char)*100);
            sprintf(icode_temp, "\nL%d:", v_l3->label_number+1);
            strcat(icode, icode_temp);
            v_l3 = v_l3->next;

    }
#line 3895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 2165 "ab.y" /* yacc.c:1646  */
    {
        
        v_l3 = v_l3->prev;
        free(icode_temp);
        icode_temp = (char*)malloc(sizeof(char)*100);
        sprintf(icode_temp, "GOTO L%d", v_l3->label_number);
        strcat(icode, icode_temp);

        /*head=head->parent;*/
    }
#line 3910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 2174 "ab.y" /* yacc.c:1646  */
    {

        v_l3 = v_l3->prev;
        free(icode_temp);
        icode_temp = (char*)malloc(sizeof(char)*100);
        //sprintf(icode_temp, "L%d on %d:\n", v_l3->label_number, ln_num);
        sprintf(icode_temp, "L%d:", v_l3->label_number);
        strcat(icode, icode_temp);

    }
#line 3925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 2189 "ab.y" /* yacc.c:1646  */
    {buildTree("","ASIGN","",head);head=head->left;}
#line 3931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 2190 "ab.y" /* yacc.c:1646  */
    {buildTree("","","CONDITION",head);head=head->right;

    e_poi=(node_p*)malloc(sizeof(node_p));
    e_poi->addr=(node*)malloc(sizeof(node));
    e_poi->prev=(node_p*)malloc(sizeof(node_p));
    e_poi->next=(node_p*)malloc(sizeof(node_p));
    e_poi->addr=head;
    e_poi->next->prev=head;
    e_poi=e_poi->next;

    buildTree("","CODE_C","",head);head=head->left;

        //v_l3 = (v_label_node*)malloc(sizeof(v_label_node));
        //v_l3->prev=(v_label_node*)malloc(sizeof(v_label_node));
        v_l3->next = (v_label_node*)malloc(sizeof(v_label_node));
        v_l3->next->prev  = (v_label_node*)malloc(sizeof(v_label_node));
        v_l3->next->prev  = v_l3;
        v_l3->label_number=v_label+2;
        v_l3 = v_l3->next;

        free(icode_temp);
        icode_temp = (char*)malloc(sizeof(char)*100);
        sprintf(icode_temp, "\nL%d:", v_label);
        strcat(icode, icode_temp);
        v_label += 1;


        
    }
#line 3965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 2218 "ab.y" /* yacc.c:1646  */
    {
        free(icode_temp);
        icode_temp = (char*)malloc(sizeof(char)*100);
        sprintf(icode_temp, "\nIF T%d",Cno);//Change to IF
        strcat(icode, icode_temp);

        
        free(icode_temp);
        icode_temp = (char*)malloc(sizeof(char)*100);
        sprintf(icode_temp, " TRUE GOTO L%d ELSE GOTO L%d", v_label, v_label+1);
        strcat(icode, icode_temp);

        v_label+=1;

        //v_l3 = (v_label_node*)malloc(sizeof(v_label_node));
        //v_l3->prev=(v_label_node*)malloc(sizeof(v_label_node));
        v_l3->next = (v_label_node*)malloc(sizeof(v_label_node));
        v_l3->next->prev  = (v_label_node*)malloc(sizeof(v_label_node));
        v_l3->next->prev  = v_l3;
        v_l3->label_number=v_label-2;

        v_label+=1;
        
        e_poi=e_poi->prev;head=e_poi;}
#line 3994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 2242 "ab.y" /* yacc.c:1646  */
    {buildTree("","","ITER",head);head=head->right;}
#line 4000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 2242 "ab.y" /* yacc.c:1646  */
    {head=head->parent;/**/head=head->parent;/**/head=head->parent;}
#line 4006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 2252 "ab.y" /* yacc.c:1646  */
    {buildTree("","CONDITION","",head);head=head->left;

    e_poi=(node_p*)malloc(sizeof(node_p));
    e_poi->addr=(node*)malloc(sizeof(node));
    e_poi->prev=(node_p*)malloc(sizeof(node_p));
    e_poi->next=(node_p*)malloc(sizeof(node_p));
    e_poi->addr=head;
    e_poi->next->prev=head;
    e_poi=e_poi->next;

    buildTree("","CODE_C","",head);head=head->left;


        //v_l3 = (v_label_node*)malloc(sizeof(v_label_node));
        //v_l3->prev=(v_label_node*)malloc(sizeof(v_label_node));
        v_l4->next = (v_label_node*)malloc(sizeof(v_label_node));
        v_l4->next->prev  = (v_label_node*)malloc(sizeof(v_label_node));
        v_l4->next->prev  = v_l4;
        v_l4->label_number=v_label+2;
        v_l4 = v_l4->next;

        free(icode_temp);
        icode_temp = (char*)malloc(sizeof(char)*100);
        sprintf(icode_temp, "\nL%d:", v_label);
        strcat(icode, icode_temp);
        v_label += 1;





    }
#line 4043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 2283 "ab.y" /* yacc.c:1646  */
    {
                free(icode_temp);
        icode_temp = (char*)malloc(sizeof(char)*100);
        sprintf(icode_temp, "\nIF T%d",Cno);//Change to IF
        strcat(icode, icode_temp);
        free(icode_temp);
        icode_temp = (char*)malloc(sizeof(char)*100);
        sprintf(icode_temp, " TRUE GOTO L%d ELSE GOTO L%d", v_label, v_label+1);
        strcat(icode, icode_temp);

        v_label+=1;

        //v_l3 = (v_label_node*)malloc(sizeof(v_label_node));
        //v_l3->prev=(v_label_node*)malloc(sizeof(v_label_node));
        v_l4->next = (v_label_node*)malloc(sizeof(v_label_node));
        v_l4->next->prev  = (v_label_node*)malloc(sizeof(v_label_node));
        v_l4->next->prev  = v_l4;
        v_l4->label_number=v_label-2;

        v_label+=1;
        
        
        e_poi=e_poi->prev;head=e_poi;/*head=head->parent;*/}
#line 4071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 2306 "ab.y" /* yacc.c:1646  */
    {buildTree("","","CODE",head);head=head->right;

            free(icode_temp);
            icode_temp = (char*)malloc(sizeof(char)*100);
            sprintf(icode_temp, "\nL%d:", v_l4->label_number+1);
            strcat(icode, icode_temp);
            v_l4 = v_l4->next;

    }
#line 4085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 2314 "ab.y" /* yacc.c:1646  */
    {
        
        v_l4 = v_l4->prev;
        free(icode_temp);
        icode_temp = (char*)malloc(sizeof(char)*100);
        sprintf(icode_temp, "\nGOTO L%d", v_l4->label_number);
        strcat(icode, icode_temp);

        /*head=head->parent;/*head=head->parent;*/}
#line 4099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 2323 "ab.y" /* yacc.c:1646  */
    {
        
        v_l4 = v_l4->prev;
        free(icode_temp);
        icode_temp = (char*)malloc(sizeof(char)*100);
        sprintf(icode_temp, "\nL%d:", v_l4->label_number);
        strcat(icode, icode_temp);

        /*head=head->parent;*/
    }
#line 4114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 2338 "ab.y" /* yacc.c:1646  */
    {
        buildTree("","","ELSE",head);head=head->right;}
#line 4121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 2340 "ab.y" /* yacc.c:1646  */
    {/*printf(" -[%s]- ",head->parent->right->name)*/;buildTree("","","CODE",head);head=head->right;}
#line 4127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 2340 "ab.y" /* yacc.c:1646  */
    {/*head=head->parent;*/}
#line 4133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 2341 "ab.y" /* yacc.c:1646  */
    {/*head=head->parent;*/}
#line 4139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 2349 "ab.y" /* yacc.c:1646  */
    {

        
        buildTree("","","ELSEIF",head);head=head->right;}
#line 4148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 2353 "ab.y" /* yacc.c:1646  */
    {buildTree("","CONDITION","",head);head=head->left;

    e_poi=(node_p*)malloc(sizeof(node_p));
    e_poi->addr=(node*)malloc(sizeof(node));
    e_poi->prev=(node_p*)malloc(sizeof(node_p));
    e_poi->next=(node_p*)malloc(sizeof(node_p));
    e_poi->addr=head;
    e_poi->next->prev=head;
    e_poi=e_poi->next;

    buildTree("","CODE_C","",head);head=head->left;}
#line 4164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 2363 "ab.y" /* yacc.c:1646  */
    {
        
        free(icode_temp);
        icode_temp = (char*)malloc(sizeof(char)*100);
        sprintf(icode_temp, "\nIF T%d",Cno);//Change to IF
        strcat(icode, icode_temp);

        free(icode_temp);
        icode_temp = (char*)malloc(sizeof(char)*100);
        sprintf(icode_temp, " TRUE GOTO L%d ELSE GOTO L%d", v_label, v_label+1);
        strcat(icode, icode_temp);

        v_label+=1;

        //v_l = (v_label_node*)malloc(sizeof(v_label_node));
        //v_l->prev=(v_label_node*)malloc(sizeof(v_label_node));
        v_l->next = (v_label_node*)malloc(sizeof(v_label_node));
        v_l->next->prev  = (v_label_node*)malloc(sizeof(v_label_node));
        v_l->next->prev  = v_l;
        v_l->label_number=v_label;

        v_label+=1;
        
        
        
        e_poi=e_poi->prev;head=e_poi;/*head=head->parent;*/
    }
#line 4196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 2389 "ab.y" /* yacc.c:1646  */
    {

            free(icode_temp);
            icode_temp = (char*)malloc(sizeof(char)*100);
            sprintf(icode_temp, "\nL%d:", v_l->label_number-1);
            strcat(icode, icode_temp);
            v_l = v_l->next;

        buildTree("","","CODE",head);head=head->right;}
#line 4210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 2397 "ab.y" /* yacc.c:1646  */
    {

            free(icode_temp);
            icode_temp = (char*)malloc(sizeof(char)*100);
            sprintf(icode_temp, "\nGOTO L%d", v_l2->label_number);
            strcat(icode, icode_temp);
            //go up l8r when done with if elseif else

            /*head=head->parent;/*head=head->parent;*/}
#line 4224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 2405 "ab.y" /* yacc.c:1646  */
    {

            v_l = v_l->prev;
            free(icode_temp);
            icode_temp = (char*)malloc(sizeof(char)*100);
            sprintf(icode_temp, "\nL%d:", v_l->label_number);
            strcat(icode, icode_temp);

    }
#line 4238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 2414 "ab.y" /* yacc.c:1646  */
    {
        /*head=head->parent;*/
    }
#line 4246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 2421 "ab.y" /* yacc.c:1646  */
    {
                free(icode_temp);
                icode_temp = (char*)malloc(sizeof(char)*100);
                sprintf(icode_temp, "\nL%d:", v_l2->label_number);
                strcat(icode, icode_temp);
            }
#line 4257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 2426 "ab.y" /* yacc.c:1646  */
    {
                free(icode_temp);
                icode_temp = (char*)malloc(sizeof(char)*100);
                sprintf(icode_temp, "\nL%d:", v_l2->label_number);
                strcat(icode, icode_temp);
            }
#line 4268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 2440 "ab.y" /* yacc.c:1646  */
    {


    }
#line 4277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 2444 "ab.y" /* yacc.c:1646  */
    {buildTree("","CONDITION","",head);head=head->left;

    e_poi=(node_p*)malloc(sizeof(node_p));
    e_poi->addr=(node*)malloc(sizeof(node));
    e_poi->prev=(node_p*)malloc(sizeof(node_p));
    e_poi->next=(node_p*)malloc(sizeof(node_p));
    e_poi->addr=head;
    e_poi->next->prev=head;
    e_poi=e_poi->next;

    buildTree("","CODE_C","",head);head=head->left;}
#line 4293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 2454 "ab.y" /* yacc.c:1646  */
    {

        free(icode_temp);
        icode_temp = (char*)malloc(sizeof(char)*100);
        sprintf(icode_temp, "\nIF T%d",Cno);
        strcat(icode, icode_temp);

        free(icode_temp);
        icode_temp = (char*)malloc(sizeof(char)*100);
        sprintf(icode_temp, " TRUE GOTO L%d ELSE GOTO L%d", v_label, v_label+2);
        strcat(icode, icode_temp);

        v_label+=1;

        //v_l = (v_label_node*)malloc(sizeof(v_label_node));
        //v_l->prev=(v_label_node*)malloc(sizeof(v_label_node));
        v_l->next = (v_label_node*)malloc(sizeof(v_label_node));
        v_l->next->prev  = (v_label_node*)malloc(sizeof(v_label_node));
        v_l->next->prev  = v_l;
        v_l->label_number=v_label+1;

        v_label+=1;

        v_l2 = v_l2->next;
        //v_l2 = (v_label_node*)malloc(sizeof(v_label_node));
        //v_l2->prev=(v_label_node*)malloc(sizeof(v_label_node));
        v_l2->next = (v_label_node*)malloc(sizeof(v_label_node));
        v_l2->next->prev  = v_l2;
        v_l2->label_number=v_label-1;

        v_label+=1;


        e_poi=e_poi->prev;head=e_poi;/*printf(" -[%s]-! \n", head->name);/*;/*head=head->parent;*/
        }
#line 4333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 2488 "ab.y" /* yacc.c:1646  */
    {
            
            free(icode_temp);
            icode_temp = (char*)malloc(sizeof(char)*100);
            sprintf(icode_temp, "\nL%d:", v_l->label_number-2);
            strcat(icode, icode_temp);
            v_l = v_l->next;

        buildTree("","","CODE",head);head=head->right;}
#line 4347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 2496 "ab.y" /* yacc.c:1646  */
    {
        
            free(icode_temp);
            icode_temp = (char*)malloc(sizeof(char)*100);
            sprintf(icode_temp, "\nGOTO L%d", v_l2->label_number);
            strcat(icode, icode_temp);
            //go up l8r when done with if elseif else
        
        /*head=head->parent;/*head=head->parent;*/}
#line 4361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 2504 "ab.y" /* yacc.c:1646  */
    {

            v_l = v_l->prev;
            free(icode_temp);
            icode_temp = (char*)malloc(sizeof(char)*100);
            sprintf(icode_temp, "\nL%d:", v_l->label_number);
            strcat(icode, icode_temp);
            }
#line 4374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 2513 "ab.y" /* yacc.c:1646  */
    {
        v_l2 = v_l2->prev;
        //printf("\n--------GOTO L%d\n", v_l2->label_number);
        /*head=head->parent;*/
    }
#line 4384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 2534 "ab.y" /* yacc.c:1646  */
    {   
        tt2 = 1;
        buildTree("","FOR","CODE",head);head=head->left;}
#line 4392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 2536 "ab.y" /* yacc.c:1646  */
    {head=head->parent;
    poi=(node_p*)malloc(sizeof(node_p));
    poi->addr=(node*)malloc(sizeof(node));poi->prev=(node_p*)malloc(sizeof(node_p));poi->next=(node_p*)malloc(sizeof(node_p));
    poi->addr=head;poi->next->prev=head;poi=poi->next;
    head=head->right;}
#line 4402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 2540 "ab.y" /* yacc.c:1646  */
    {poi=poi->prev;head=poi;}
#line 4408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 2541 "ab.y" /* yacc.c:1646  */
    {
        tt2 = 1;
        buildTree("","WHILE","CODE",head);head=head->left;}
#line 4416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 2543 "ab.y" /* yacc.c:1646  */
    {head=head->parent;
    poi=(node_p*)malloc(sizeof(node_p));
    poi->addr=(node*)malloc(sizeof(node));poi->prev=(node_p*)malloc(sizeof(node_p));poi->next=(node_p*)malloc(sizeof(node_p));
    poi->addr=head;poi->next->prev=head;poi=poi->next;
    head=head->right;}
#line 4426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 2547 "ab.y" /* yacc.c:1646  */
    {poi=poi->prev;head=poi;}
#line 4432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 2548 "ab.y" /* yacc.c:1646  */
    {
        tt2 = 1;
        buildTree("","IF","CODE",head);head=head->left;}
#line 4440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 2550 "ab.y" /* yacc.c:1646  */
    {head=head->parent;
    poi=(node_p*)malloc(sizeof(node_p));
    poi->addr=(node*)malloc(sizeof(node));poi->prev=(node_p*)malloc(sizeof(node_p));poi->next=(node_p*)malloc(sizeof(node_p));
    poi->addr=head;poi->next->prev=head;poi=poi->next;
    head=head->right;}
#line 4450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 2554 "ab.y" /* yacc.c:1646  */
    {poi=poi->prev;head=poi;}
#line 4456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 2555 "ab.y" /* yacc.c:1646  */
    {
        tt2 = 1;
        /*printf(" -[%s]- ",head->name);*/
        ep_op = 1;buildTree("","ECHO","CODE",head);head=head->left;}
#line 4465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 2558 "ab.y" /* yacc.c:1646  */
    {ep_op = 0;head=head->parent;
    poi=(node_p*)malloc(sizeof(node_p));
    poi->addr=(node*)malloc(sizeof(node));poi->prev=(node_p*)malloc(sizeof(node_p));poi->next=(node_p*)malloc(sizeof(node_p));
    poi->addr=head;poi->next->prev=head;poi=poi->next;
    head=head->right;}
#line 4475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 2562 "ab.y" /* yacc.c:1646  */
    {poi=poi->prev;head=poi;}
#line 4481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 2563 "ab.y" /* yacc.c:1646  */
    {
        tt2 = 1;
        ep_op = 1;buildTree("","PRINT","CODE",head);head=head->left;}
#line 4489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 2565 "ab.y" /* yacc.c:1646  */
    {ep_op = 0;head=head->parent;
    poi=(node_p*)malloc(sizeof(node_p));
    poi->addr=(node*)malloc(sizeof(node));poi->prev=(node_p*)malloc(sizeof(node_p));poi->next=(node_p*)malloc(sizeof(node_p));
    poi->addr=head;poi->next->prev=head;poi=poi->next;
    head=head->right;}
#line 4499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 2569 "ab.y" /* yacc.c:1646  */
    {poi=poi->prev;head=poi;}
#line 4505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 2570 "ab.y" /* yacc.c:1646  */
    {tt2 = 1;}
#line 4511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 2570 "ab.y" /* yacc.c:1646  */
    {tt2 = 1;}
#line 4517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 2570 "ab.y" /* yacc.c:1646  */
    {tt2 = 1;}
#line 4523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 2570 "ab.y" /* yacc.c:1646  */
    {tt2 = 1;}
#line 4529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 2571 "ab.y" /* yacc.c:1646  */
    {
        tt2 = 1;
        buildTree("","ITER_ASIGN","CODE",head);head=head->left;}
#line 4537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 2573 "ab.y" /* yacc.c:1646  */
    {head=head->parent;
    poi=(node_p*)malloc(sizeof(node_p));
    poi->addr=(node*)malloc(sizeof(node));poi->prev=(node_p*)malloc(sizeof(node_p));poi->next=(node_p*)malloc(sizeof(node_p));
    poi->addr=head;poi->next->prev=head;poi=poi->next;
    head=head->right;}
#line 4547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 2577 "ab.y" /* yacc.c:1646  */
    {poi=poi->prev;head=poi;}
#line 4553 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4557 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 2582 "ab.y" /* yacc.c:1906  */


    void init_hash_table()
    {
        int i;
        hash_table = malloc(SIZE * sizeof(list_t *));
        for (i = 0; i < SIZE; i++)
        {
            hash_table[i] = NULL;
        }
    }

    unsigned int hash(char *key)
    {
        unsigned int hashval = 0;
        for (; *key != '\0'; key++)
        {
            hashval += *key;
        }
        hashval += key[0] % 11 + (key[0] << 3) - key[0];
        return hashval % SIZE;
    }

    void insert(char *name, int len, int type, int lineno, int c_scope)
    {
        unsigned int hashval = hash(name);
        list_t *l = hash_table[hashval];

        while ((l != NULL) && (strcmp(name, l->st_name) != 0))
        {
            l = l->next;
        }
        if (l == NULL)
        {
            l = (list_t *)malloc(sizeof(list_t));
            strncpy(l->st_name, name, len);
            l->st_type = type;
            l->scope = c_scope;
            l->lines = (RefList *)malloc(sizeof(RefList));
            l->lines->lineno = lineno;
            l->lines->next = NULL;
            l->next = hash_table[hashval];
            hash_table[hashval] = l;
            //printf("Inserted Identifier: %s [at line number %d]\n", name, lineno);
        }
        else
        {
            l->scope = c_scope;
            RefList *t = l->lines;
            while (t->next != NULL)
                t = t->next;
            t->next = (RefList *)malloc(sizeof(RefList));
            t->next->lineno = lineno;
            t->next->next = NULL;
            //printf("Encountered Again: %s [at line number %d]\n", name, lineno);
        }
    }

    list_t *lookup(char *name)
    {
        unsigned int hashval = hash(name);
        list_t *l = hash_table[hashval];
        while ((l != NULL) && (strcmp(name, l->st_name) != 0))
        {
            l = l->next;
        }
        //printf("%s",l);
        return l;
    }

    void s_current_lookup(char *idi)
    { 
        free(current_i);
        current_i = malloc(sizeof(char) * 20);
        memcpy(current_i, idi, sizeof(idi));
        update = 1;
    }

    char *r_current_lookup()
    {
        if (update == 1 && valid == 1)
        {
            update = 0;
            return current_i;
        }
    }

    void e_vld(int vld)
    {
        valid = vld;
    }




    snode* new_sn()
    {
        snode* t = (snode*)malloc(sizeof(snode));
        t->nf = 0;
        t->next = NULL;
        return t;
    }

    void bn(char *op)
    {
        if(nic != pnic)
        {
            list_root->next = new_sn();
            list_root = list_root->next;
            list_root->ln = ln_num;
            pnic = nic;
            no_of_sn += 1;
        }
        list_root->t_nodes[list_root->nf] = (char*)malloc(sizeof(char)*50);
        list_root->t_nodes[list_root->nf] = op;
        if(list_root->nf % 3 == 5 && list_root->nf != 3 && list_root->nf != 3)
        {

        }
        else
        {
            //list_root->t_nodes[list_root->nf] = (char*)malloc(sizeof(char)*50);
            //list_root->t_nodes[list_root->nf] = op;
        }
        //printf("\n (%s) ", op);
        list_root->nf += 1;
    }

    void p_sn()
    {
        for(int i = 0; i < no_of_sn; i++)
        {
            //printf("%d",l_root->nf);
            for(int j = 0; j < l_root->nf; j++)
            {
                printf("\n%s --- %d ", l_root->t_nodes[j], l_root->ln);
            }
            l_root=l_root->next;
            printf("\n-----------------\n");
        }
    }


    void strreplace(char string[], char search[], char replace[]){
        char buffer[20002];
        char*p = string;
        while(p=strstr(p, search))
        {
            strncpy(buffer, string, p-string);
            buffer[p-string] = '\0';
            strcat(buffer, replace);
            strcat(buffer, p+strlen(search));
            strcpy(string, buffer);
            p++;
        }
    } 


    node* buildTree(char *op,char *left,char *right, node* new1)
    {
        
        if(nnn == 1)
        {
            node *new12 = (node*)malloc(sizeof(node));
            new12->name = (char*)malloc(sizeof(char)*(strlen(op)+1));
            new12->parent=NULL;
            new12->name = op;
            nnn = 0;
            new1 = new12;
        }
        else{
            ;//printf(" ---[%s]- \n", new1->name);
        }
        
        //new1->left=(node*)malloc(sizeof(node));
        //new1->left->name = (char*)malloc(sizeof(char)*(strlen(left)+1));
        if(left != "")
        {
            new1->left=(node*)malloc(sizeof(node));
            new1->left->parent=(node*)malloc(sizeof(node));
            new1->left->parent=new1;
            new1->left->name = (char*)malloc(sizeof(char)*(strlen(left)+1));
            new1->left->name = left;
        }
        else
        {
            if(new1->left == NULL)
            {
                new1->left=(node*)malloc(sizeof(node));
                new1->left->parent=(node*)malloc(sizeof(node));
                new1->left->parent=new1;
                //new1->left->name = (char*)malloc(sizeof(char)*(strlen(left)+1));
                //new1->left->name = left;
            }
        }
        //new1->right=(node*)malloc(sizeof(node));
        //new1->right->name = (char*)malloc(sizeof(char)*(strlen(right)+1));
        if(right != "")
        {
            new1->right=(node*)malloc(sizeof(node));
            new1->right->parent=(node*)malloc(sizeof(node));
            new1->right->parent=new1;
            new1->right->name = (char*)malloc(sizeof(char)*(strlen(right)+1));
            new1->right->name = right;  
        }
        else
        {
            if(new1->right == NULL)
            {
                new1->right=(node*)malloc(sizeof(node));
                new1->right->parent=(node*)malloc(sizeof(node));
                new1->right->parent=new1;
                //new1->right->name = (char*)malloc(sizeof(char)*(strlen(right)+1));
                //new1->right->name = right;  
            }
        }
        return new1;
    }

    void printTree(node *tree)
    {
        //printf(" [L]%s [N]%s [R]%s",tree->left->name ,tree->name ,tree->right->name);
        if(tree!=NULL)
        {
            printTree(tree->left);
            if(tree->name != NULL)
            {
                printf("[%s]  ",tree->name);
            }
            printTree(tree->right);
        }
        else
        {
            return;
        }
        /*
        if(tree->left || tree->right)
            printf("(");
        printf(" %s ",tree->name);
        if(tree->left)
            printTree(tree->left);
        if(tree->right)
            printTree(tree->right);
        if(tree->left || tree->right)
            printf(")");	
        */
    }

    void display_icg()
    {
        if(quadnum > 0)
        {
            printf("\nIntermediate Code:\n\n");


            printf("\n----------------------------------------\n");
            printf("\nIntermediate Code Generation - Quadruples\n\n");
            printf("\tResult:\t\t Operator:\t Arg1:\t\t Arg2:\t\t \n");
            for(int i=0;i<quadnum;i++)
            {
                    printf("\t%s \t\t %s \t\t %s \t\t %s \t\t \n",q[i].res,q[i].op,q[i].arg1,q[i].arg2);
            }	
        }
        
    }

    void push(char *string)	
    {
        strcpy(stk[++tops], string);
    }

    void codeGenerator(char*op,char*arg1,char*arg2,char*result)
    {
            if(!isConditional)
            {
                tuple[tupleIndex].line=ln_num;      
                tuple[tupleIndex].op=op;
                tuple[tupleIndex].arg1=arg1;
                tuple[tupleIndex].arg2=arg2;
                tuple[tupleIndex].result=result;
                tupleIndex++;
            }
    }

    void file_write_data(const char *filepath, const char *data)
    {
        FILE *fp = fopen(filepath, "wb");
        if (fp != NULL)
        {
            fputs(data, fp);
            fclose(fp);
        }
    }

    char* newTemp()
    {
            temporaryGenerated++;
            char *temp=(char *)malloc(sizeof(2*10));
            sprintf(temp,"t%d",temporaryGenerated);
            return temp;
    }

    void newICG(int index)
    {
        q[index].op = (char*)malloc(sizeof(char)*100);
        q[index].arg1 = (char*)malloc(sizeof(char)*100);
        q[index].arg2 = (char*)malloc(sizeof(char)*100);
        q[index].res = (char*)malloc(sizeof(char)*100);
    }

    void symtab_dump(FILE *of, int dp)
    {
        int i;
        if (dp == 0)
        {
            fprintf(of, "\n[Symbol Table Update: %d]\n", nor);
        }
        else
        {
            fprintf(of, "\n[Final Symbol Table]\n");
        }
        nor += 1;
        fprintf(of, "____________________________________________________________________________________________________________________ \n");
        fprintf(of, " Identifier | Data Type |   Data Value                 |   Scope | Line Numbers   \n");
        fprintf(of, "‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾ \n");
        for (i = 0; i < SIZE; ++i)
        {
            if (hash_table[i] != NULL)
            {
                list_t *l = hash_table[i];
                while (l != NULL)
                {
                    RefList *t = l->lines;
                    fprintf(of, "%-14s ", l->st_name);
                    if (lookup(l->st_name)->data_value == NULL)
                    {
                        fprintf(of, "%-15s ", "UNDEF");
                    }
                    else
                    {
                        fprintf(of, "%-15s ", lookup(l->st_name)->data_type);
                    }
                    if (lookup(l->st_name)->data_value == NULL)
                    {
                        fprintf(of, "%-30s", "UNDEF");
                    }
                    else
                    {
                        fprintf(of, "%-30s", lookup(l->st_name)->data_value);
                    }
                    fprintf(of, "%-12d", lookup(l->st_name)->scope);
                    while (t != NULL)
                    {
                        fprintf(of, "%4d ", t->lineno);
                        t = t->next;
                    }
                    fprintf(of, "\n");
                    l = l->next;
                }
            }
        }
    }

    void yyerror()
    {
        tt = 0;
        tt2 = 0;
        printf("Error on line no: %d\n", ln_num);
        //exit(0);
    }

    void addicref (icref* icroot,char* index, char* ictext){
        if(icroot->next){
            addicref(icroot->next,index,ictext);
        }
        else{
            icref* ic;
            ic=(icref*)malloc(sizeof(icref));
            sprintf(ic->index,"%s",index);
            sprintf(ic->ic,"%s",ictext);
            // icroot->next=ic;
            icroot->next=ic;
        }

    }

    char* lookicref (icref* icroot,char* index){
        if(icroot->index==index){
            return icroot->ic;
        }
        
        if(icroot->next){
            char* a=lookicref(icroot->next,index);
            return a;}
        return -1;

    }

    void* printicref(icref* root){
    if(root){
        printf("%s --- %s\n",root->index,root->ic);
        printicref(root->next);
    }

    }
    int main(int argc, char *argv[])
    {
        int flag;
        icref *icroot=(icref*) malloc(sizeof(icref));
        icode = (char*)malloc(sizeof(char)*10000);
        icode_prev = (char*)malloc(sizeof(char)*100);

        
        v_l = (v_label_node*)malloc(sizeof(v_label_node));
        v_l->prev=(v_label_node*)malloc(sizeof(v_label_node));
        v_l->next=(v_label_node*)malloc(sizeof(v_label_node));
        //v_l->prev = NULL;
        v_l->next->prev = (v_label_node*)malloc(sizeof(v_label_node));
        v_l->next->prev = v_l;
        v_l = v_l->next;

    //---
        v_l3 = (v_label_node*)malloc(sizeof(v_label_node));
        v_l3->prev=(v_label_node*)malloc(sizeof(v_label_node));
        v_l3->next=(v_label_node*)malloc(sizeof(v_label_node));
        //v_l3->prev = NULL;
        v_l3->next->prev = (v_label_node*)malloc(sizeof(v_label_node));
        v_l3->next->prev = v_l3;
        v_l3 = v_l3->next;


        v_l4 = (v_label_node*)malloc(sizeof(v_label_node));
        v_l4->prev=(v_label_node*)malloc(sizeof(v_label_node));
        v_l4->next=(v_label_node*)malloc(sizeof(v_label_node));
        //v_l4->prev = NULL;
        v_l4->next->prev = (v_label_node*)malloc(sizeof(v_label_node));
        v_l4->next->prev = v_l4;
        v_l4 = v_l4->next;
    //---
        
        v_l2 = (v_label_node*)malloc(sizeof(v_label_node));
        v_l2->prev=(v_label_node*)malloc(sizeof(v_label_node));
        v_l2->next=(v_label_node*)malloc(sizeof(v_label_node));
        //v_l2->prev = NULL;
        v_l2->next->prev  = (v_label_node*)malloc(sizeof(v_label_node));
        v_l2->next->prev  = v_l2;
        //v_l2 = v_l2->next;

        strcat(icode, "");


        list_root = (snode*)malloc(sizeof(snode));
        l_root = list_root;

        init_hash_table();
        yyout = fopen("symbol_table.txt", "w");
        flag = yyparse();
        //printicref(icroot);
        if(p_ast == 0)
        {
            printf("\n\n\n-------Abstract Syntax Tree - Inorder Traversal-------\n\n");
            printTree(root);
            p_ast=1;
            printf("\n\n");
        };
        //p_sn();
        //display_icg();
        strreplace(icode, "\n\n", "\n");
        printf("\n\n\n-------Intermediate Code-------\n");
        printf("\n%s\n\n--------------------------\n", icode);
        strcat(icode, "\n");
        if (icode[0] == '\n') 
        {
            icode++;
        }
        file_write_data("intermediate_code.txt", icode);
        if (tt == 1)
        {
            printf("\n\n--------------------------\nValid.\n\n");
        }
        else
        {
            printf("\n\n--------------------------\nInvalid.\n\n");
        }
        symtab_dump(yyout, 0);
        fclose(yyout);
        yyout = fopen("symbol_table_final.txt", "w");
        symtab_dump(yyout, 1);
        fclose(yyout);
        return flag;
    }
