/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 191 "ab.y" /* yacc.c:1909  */

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
    

#line 184 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
