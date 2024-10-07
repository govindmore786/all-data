/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    integer = 258,                 /* integer  */
    FLOAT = 259,                   /* FLOAT  */
    IF = 260,                      /* IF  */
    ELSE = 261,                    /* ELSE  */
    WHILE = 262,                   /* WHILE  */
    INT = 263,                     /* INT  */
    BOOLEAN = 264,                 /* BOOLEAN  */
    VOID = 265,                    /* VOID  */
    DOUBLE = 266,                  /* DOUBLE  */
    STRING = 267,                  /* STRING  */
    CHAR = 268,                    /* CHAR  */
    DEF = 269,                     /* DEF  */
    IDENTIFIER = 270,              /* IDENTIFIER  */
    CLASS = 271,                   /* CLASS  */
    EQ = 272,                      /* EQ  */
    GQ = 273,                      /* GQ  */
    LQ = 274,                      /* LQ  */
    G = 275,                       /* G  */
    L = 276,                       /* L  */
    PRINT = 277,                   /* PRINT  */
    SQSTRG = 278,                  /* SQSTRG  */
    DQSTRG = 279,                  /* DQSTRG  */
    FL = 280,                      /* FL  */
    TR = 281,                      /* TR  */
    RETURN = 282,                  /* RETURN  */
    SWITCH = 283,                  /* SWITCH  */
    CASE = 284,                    /* CASE  */
    BREAK = 285,                   /* BREAK  */
    DEFAULT = 286,                 /* DEFAULT  */
    FOR = 287,                     /* FOR  */
    THIS = 288,                    /* THIS  */
    PRINTLN = 289,                 /* PRINTLN  */
    ARR = 290,                     /* ARR  */
    D = 291,                       /* D  */
    STOP = 292,                    /* STOP  */
    DSLASH = 293,                  /* DSLASH  */
    DPLUS = 294,                   /* DPLUS  */
    FLOATV = 295,                  /* FLOATV  */
    cmtc = 296,                    /* cmtc  */
    cmto = 297                     /* cmto  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define integer 258
#define FLOAT 259
#define IF 260
#define ELSE 261
#define WHILE 262
#define INT 263
#define BOOLEAN 264
#define VOID 265
#define DOUBLE 266
#define STRING 267
#define CHAR 268
#define DEF 269
#define IDENTIFIER 270
#define CLASS 271
#define EQ 272
#define GQ 273
#define LQ 274
#define G 275
#define L 276
#define PRINT 277
#define SQSTRG 278
#define DQSTRG 279
#define FL 280
#define TR 281
#define RETURN 282
#define SWITCH 283
#define CASE 284
#define BREAK 285
#define DEFAULT 286
#define FOR 287
#define THIS 288
#define PRINTLN 289
#define ARR 290
#define D 291
#define STOP 292
#define DSLASH 293
#define DPLUS 294
#define FLOATV 295
#define cmtc 296
#define cmto 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
