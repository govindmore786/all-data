/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "m.y"

#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int flag=0;
 int yyparse();
void yyerror(const char *s);

#line 81 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_integer = 3,                    /* integer  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_IF = 5,                         /* IF  */
  YYSYMBOL_ELSE = 6,                       /* ELSE  */
  YYSYMBOL_WHILE = 7,                      /* WHILE  */
  YYSYMBOL_INT = 8,                        /* INT  */
  YYSYMBOL_BOOLEAN = 9,                    /* BOOLEAN  */
  YYSYMBOL_VOID = 10,                      /* VOID  */
  YYSYMBOL_DOUBLE = 11,                    /* DOUBLE  */
  YYSYMBOL_STRING = 12,                    /* STRING  */
  YYSYMBOL_CHAR = 13,                      /* CHAR  */
  YYSYMBOL_DEF = 14,                       /* DEF  */
  YYSYMBOL_IDENTIFIER = 15,                /* IDENTIFIER  */
  YYSYMBOL_CLASS = 16,                     /* CLASS  */
  YYSYMBOL_EQ = 17,                        /* EQ  */
  YYSYMBOL_GQ = 18,                        /* GQ  */
  YYSYMBOL_LQ = 19,                        /* LQ  */
  YYSYMBOL_G = 20,                         /* G  */
  YYSYMBOL_L = 21,                         /* L  */
  YYSYMBOL_PRINT = 22,                     /* PRINT  */
  YYSYMBOL_SQSTRG = 23,                    /* SQSTRG  */
  YYSYMBOL_DQSTRG = 24,                    /* DQSTRG  */
  YYSYMBOL_FL = 25,                        /* FL  */
  YYSYMBOL_TR = 26,                        /* TR  */
  YYSYMBOL_RETURN = 27,                    /* RETURN  */
  YYSYMBOL_SWITCH = 28,                    /* SWITCH  */
  YYSYMBOL_CASE = 29,                      /* CASE  */
  YYSYMBOL_BREAK = 30,                     /* BREAK  */
  YYSYMBOL_DEFAULT = 31,                   /* DEFAULT  */
  YYSYMBOL_FOR = 32,                       /* FOR  */
  YYSYMBOL_THIS = 33,                      /* THIS  */
  YYSYMBOL_PRINTLN = 34,                   /* PRINTLN  */
  YYSYMBOL_ARR = 35,                       /* ARR  */
  YYSYMBOL_D = 36,                         /* D  */
  YYSYMBOL_STOP = 37,                      /* STOP  */
  YYSYMBOL_DSLASH = 38,                    /* DSLASH  */
  YYSYMBOL_DPLUS = 39,                     /* DPLUS  */
  YYSYMBOL_FLOATV = 40,                    /* FLOATV  */
  YYSYMBOL_cmtc = 41,                      /* cmtc  */
  YYSYMBOL_cmto = 42,                      /* cmto  */
  YYSYMBOL_43_ = 43,                       /* '('  */
  YYSYMBOL_44_ = 44,                       /* ')'  */
  YYSYMBOL_45_ = 45,                       /* '{'  */
  YYSYMBOL_46_ = 46,                       /* '}'  */
  YYSYMBOL_47_ = 47,                       /* ','  */
  YYSYMBOL_48_ = 48,                       /* '='  */
  YYSYMBOL_49_ = 49,                       /* ':'  */
  YYSYMBOL_50_ = 50,                       /* ';'  */
  YYSYMBOL_51_ = 51,                       /* '+'  */
  YYSYMBOL_52_ = 52,                       /* '-'  */
  YYSYMBOL_53_ = 53,                       /* '*'  */
  YYSYMBOL_54_ = 54,                       /* '/'  */
  YYSYMBOL_55_ = 55,                       /* '.'  */
  YYSYMBOL_56_ = 56,                       /* '['  */
  YYSYMBOL_57_ = 57,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 58,                  /* $accept  */
  YYSYMBOL_start = 59,                     /* start  */
  YYSYMBOL_begin = 60,                     /* begin  */
  YYSYMBOL_end = 61,                       /* end  */
  YYSYMBOL_ifelsestmt = 62,                /* ifelsestmt  */
  YYSYMBOL_whilestmt = 63,                 /* whilestmt  */
  YYSYMBOL_cndtn = 64,                     /* cndtn  */
  YYSYMBOL_any = 65,                       /* any  */
  YYSYMBOL_both = 66,                      /* both  */
  YYSYMBOL_statements = 67,                /* statements  */
  YYSYMBOL_statement = 68,                 /* statement  */
  YYSYMBOL_vd = 69,                        /* vd  */
  YYSYMBOL_rtrn = 70,                      /* rtrn  */
  YYSYMBOL_Declarations = 71,              /* Declarations  */
  YYSYMBOL_Declaration = 72,               /* Declaration  */
  YYSYMBOL_swtchcs = 73,                   /* swtchcs  */
  YYSYMBOL_cases = 74,                     /* cases  */
  YYSYMBOL_case = 75,                      /* case  */
  YYSYMBOL_frlp = 76,                      /* frlp  */
  YYSYMBOL_incdc = 77,                     /* incdc  */
  YYSYMBOL_smcln = 78,                     /* smcln  */
  YYSYMBOL_print = 79,                     /* print  */
  YYSYMBOL_pt = 80,                        /* pt  */
  YYSYMBOL_def_statement = 81,             /* def_statement  */
  YYSYMBOL_this = 82,                      /* this  */
  YYSYMBOL_function_definition = 83,       /* function_definition  */
  YYSYMBOL_CMMT = 84,                      /* CMMT  */
  YYSYMBOL_cmmt = 85,                      /* cmmt  */
  YYSYMBOL_identifiers = 86,               /* identifiers  */
  YYSYMBOL_parameters = 87,                /* parameters  */
  YYSYMBOL_variable_definition = 88,       /* variable_definition  */
  YYSYMBOL_expression = 89,                /* expression  */
  YYSYMBOL_array = 90,                     /* array  */
  YYSYMBOL_elmts = 91,                     /* elmts  */
  YYSYMBOL_elmt = 92,                      /* elmt  */
  YYSYMBOL_chrs = 93,                      /* chrs  */
  YYSYMBOL_chr = 94,                       /* chr  */
  YYSYMBOL_functioncall = 95,              /* functioncall  */
  YYSYMBOL_dec = 96,                       /* dec  */
  YYSYMBOL_additionsint = 97,              /* additionsint  */
  YYSYMBOL_additionint = 98,               /* additionint  */
  YYSYMBOL_additionsvar = 99,              /* additionsvar  */
  YYSYMBOL_additionvar = 100,              /* additionvar  */
  YYSYMBOL_subtractionsint = 101,          /* subtractionsint  */
  YYSYMBOL_subtractionint = 102,           /* subtractionint  */
  YYSYMBOL_subtractionsvar = 103,          /* subtractionsvar  */
  YYSYMBOL_subtractionvar = 104,           /* subtractionvar  */
  YYSYMBOL_divisionsint = 105,             /* divisionsint  */
  YYSYMBOL_divisionint = 106,              /* divisionint  */
  YYSYMBOL_divisionsvar = 107,             /* divisionsvar  */
  YYSYMBOL_divisionvar = 108,              /* divisionvar  */
  YYSYMBOL_multiplicationsint = 109,       /* multiplicationsint  */
  YYSYMBOL_multiplicationint = 110,        /* multiplicationint  */
  YYSYMBOL_multiplicationsvar = 111,       /* multiplicationsvar  */
  YYSYMBOL_multiplicationvar = 112,        /* multiplicationvar  */
  YYSYMBOL_anyarth = 113,                  /* anyarth  */
  YYSYMBOL_modele = 114                    /* modele  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  94
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   861

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  163
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  330

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      43,    44,    53,    51,    47,    52,    55,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,    50,
       2,    48,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,    57,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    46,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    13,    13,    14,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    25,    26,    26,    27,
      28,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    59,    60,
      61,    62,    63,    66,    67,    68,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      96,    97,    98,    99,   100,   101,   103,   103,   104,   106,
     107,   109,   110,   111,   111,   112,   113,   114,   117,   118,
     119,   120,   121,   123,   124,   126,   128,   128,   129,   129,
     129,   129,   129,   130,   130,   131,   131,   131,   131,   132,
     133,   134,   135,   135,   136,   136,   137,   137,   138,   138,
     139,   139,   140,   140,   141,   141,   142,   142,   143,   143,
     144,   144,   145,   145,   146,   146,   147,   147,   148,   148,
     149,   149,   150,   150,   151,   151,   152,   153,   154,   155,
     156,   157,   158,   159
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "integer", "FLOAT",
  "IF", "ELSE", "WHILE", "INT", "BOOLEAN", "VOID", "DOUBLE", "STRING",
  "CHAR", "DEF", "IDENTIFIER", "CLASS", "EQ", "GQ", "LQ", "G", "L",
  "PRINT", "SQSTRG", "DQSTRG", "FL", "TR", "RETURN", "SWITCH", "CASE",
  "BREAK", "DEFAULT", "FOR", "THIS", "PRINTLN", "ARR", "D", "STOP",
  "DSLASH", "DPLUS", "FLOATV", "cmtc", "cmto", "'('", "')'", "'{'", "'}'",
  "','", "'='", "':'", "';'", "'+'", "'-'", "'*'", "'/'", "'.'", "'['",
  "']'", "$accept", "start", "begin", "end", "ifelsestmt", "whilestmt",
  "cndtn", "any", "both", "statements", "statement", "vd", "rtrn",
  "Declarations", "Declaration", "swtchcs", "cases", "case", "frlp",
  "incdc", "smcln", "print", "pt", "def_statement", "this",
  "function_definition", "CMMT", "cmmt", "identifiers", "parameters",
  "variable_definition", "expression", "array", "elmts", "elmt", "chrs",
  "chr", "functioncall", "dec", "additionsint", "additionint",
  "additionsvar", "additionvar", "subtractionsint", "subtractionint",
  "subtractionsvar", "subtractionvar", "divisionsint", "divisionint",
  "divisionsvar", "divisionvar", "multiplicationsint", "multiplicationint",
  "multiplicationsvar", "multiplicationvar", "anyarth", "modele", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-219)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-117)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     819,   108,     6,    26,    57,    60,    84,   110,   261,  -219,
    -219,  -219,    90,    87,    91,    55,  -219,    53,   140,   141,
     164,   143,  -219,  -219,   819,  -219,  -219,  -219,   195,  -219,
    -219,  -219,  -219,  -219,   178,   136,  -219,  -219,  -219,  -219,
     144,  -219,   175,  -219,  -219,  -219,   189,  -219,   198,   169,
     217,   169,   209,   169,   226,   169,   215,   169,   228,   169,
     221,   169,  -219,  -219,  -219,  -219,  -219,    53,    53,   191,
    -219,  -219,     5,  -219,    44,   222,  -219,   205,  -219,  -219,
     247,  -219,  -219,  -219,   171,   233,   243,  -219,  -219,  -219,
      53,   212,  -219,    72,  -219,  -219,  -219,  -219,   250,   233,
    -219,  -219,  -219,  -219,  -219,   169,   169,    95,  -219,  -219,
     819,  -219,   211,  -219,   219,   169,  -219,  -219,   216,   169,
    -219,   220,   169,  -219,   227,   169,  -219,   229,   169,  -219,
     218,   169,  -219,   234,   169,  -219,   230,   235,   231,    63,
     271,    39,  -219,   245,    77,   121,  -219,   255,   246,   249,
     244,   253,  -219,   291,  -219,  -219,    -3,  -219,  -219,  -219,
     258,   266,   313,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,   252,    53,    53,    53,    53,    53,   274,   254,   278,
     189,   198,   217,   209,   226,   215,   228,   221,  -219,  -219,
      29,   254,  -219,   169,   169,   819,   202,   169,   169,   169,
     819,  -219,   295,   308,   319,   320,   322,   288,   289,    53,
     323,  -219,   173,   169,   169,  -219,   819,  -219,  -219,  -219,
    -219,  -219,   819,  -219,   294,   327,  -219,  -219,   351,   296,
     297,   301,   302,    37,  -219,  -219,  -219,  -219,  -219,   387,
    -219,  -219,  -219,  -219,   293,   328,   328,   310,   169,  -219,
    -219,   423,   459,   819,  -219,   169,  -219,  -219,  -219,  -219,
     169,  -219,   169,   304,    20,    97,  -219,   158,   346,  -219,
      14,   169,   495,  -219,  -219,  -219,   311,  -219,    53,   321,
     331,  -219,   332,    81,   324,    34,  -219,  -219,   169,   202,
     325,   819,   819,   819,   205,   337,   326,   819,  -219,    67,
     338,   747,   531,   567,   819,    53,   603,   169,   819,  -219,
    -219,  -219,   639,   333,   169,  -219,   783,   169,   341,  -219,
    -219,  -219,   819,   675,   366,   343,   819,   711,   169,  -219
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,   125,     0,     0,     0,     0,     0,     0,   129,    86,
     117,   118,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,    24,    28,     4,    19,    27,    26,    47,    53,
      29,    30,    46,    25,     0,    21,    33,    22,    31,    45,
      23,    32,     0,   114,    34,    35,    36,   123,    40,    79,
      37,    79,    41,    79,    39,    79,    43,    79,    38,    79,
      42,    79,    44,   124,   132,   148,   140,     0,     0,    58,
      61,    60,    79,    76,     0,     0,   128,   136,   152,   144,
       0,    51,    50,    49,     0,     0,     0,    16,    15,    18,
      92,    59,    93,     0,     1,     5,     2,    20,     0,     0,
      55,    56,    57,    84,    85,    79,    79,     0,   115,   116,
      52,   113,   125,   122,   129,    79,    78,   127,   133,    79,
     131,   137,    79,   135,   141,    79,   139,   145,    79,   143,
     149,    79,   147,   153,    79,   151,     0,     0,     0,   154,
       0,   154,    88,     0,    79,     0,    77,     0,     0,     0,
       0,     0,    17,     0,    94,    91,    79,    54,    80,    81,
       0,     0,    52,   126,   130,   136,   134,   138,   142,   146,
     150,     0,     0,     0,     0,     0,     0,     0,    62,   129,
     155,   159,   156,   160,   158,   162,   157,   161,    64,    95,
       0,   103,   104,    79,    79,    52,     0,    79,    79,    79,
      52,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    63,   154,    79,    79,   121,    52,    10,    11,    12,
      14,    13,    52,    97,     0,     0,   101,   102,     0,   115,
     116,   117,   118,     0,   107,   112,    98,   100,   120,     0,
      72,    73,    74,    75,     0,     0,     0,     0,    79,    82,
      83,     0,     0,    52,    96,    79,   108,   109,   110,   111,
      79,   106,    79,     0,     0,     0,    67,     0,     0,    89,
      79,    79,     0,    99,   105,    48,     0,   103,     0,     0,
       0,    68,     0,     0,     0,     0,     6,     9,    79,     0,
       0,    52,    52,    52,     0,     0,     0,    52,    90,     0,
       0,     0,     0,     0,    52,     0,     0,    79,    52,    69,
      66,    65,     0,     0,    79,   163,     0,    79,     0,     7,
      70,    71,    52,     0,     0,     0,    52,     0,    79,     8
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -219,  -219,  -219,  -219,  -219,  -219,   -62,    -5,  -219,   -59,
     -24,  -219,  -219,  -219,    13,  -219,   130,  -128,  -219,   128,
     -48,  -219,  -219,    18,  -219,  -219,  -219,  -219,  -219,  -219,
      22,   135,  -219,   114,  -218,  -219,   -38,  -219,  -219,  -123,
     -36,  -120,   -46,  -112,   -42,  -111,   -35,  -108,   -32,  -107,
     -31,  -104,   -44,  -103,   -34,   265,  -219
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    20,    21,    96,    22,    23,   136,   137,    90,    24,
      25,    26,    27,    28,    29,    30,   265,   266,    31,    32,
     142,    33,    34,    35,    36,    37,    38,    39,    93,   190,
      40,   197,    41,   233,   234,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,   198,    62
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      97,   117,   115,   120,   111,   123,   138,   126,   119,   129,
     113,   132,    89,   135,   131,   261,   180,   122,   180,   181,
     285,   181,   125,   277,   192,   128,   134,   182,   183,   182,
     183,   184,   185,   184,   185,   186,   187,   186,   187,   296,
     229,   100,   191,   192,   223,   212,   101,   116,   140,    67,
     102,   162,   230,   141,   179,   116,    87,   158,   159,   143,
     231,   232,   193,   194,   116,   278,   178,   163,    88,    68,
     229,   164,    69,   224,   166,    70,   225,   167,   179,   297,
     168,   261,   230,   169,   195,   152,   170,   154,   144,   180,
     231,   232,   181,    81,   260,   196,   201,   149,   150,    71,
     182,   183,   101,   101,   184,   185,   102,   102,   186,   187,
      86,  -115,   157,   155,   215,    82,    83,   101,   160,   161,
      73,   102,   200,  -115,   307,    72,   264,   116,   280,    75,
      84,  -115,  -115,   294,    85,   115,   228,   281,    97,   281,
     119,   239,   131,  -115,   113,   226,   227,   247,   122,   236,
     237,   238,   125,   134,   128,    91,    92,   251,   235,    63,
      64,    65,    66,   252,    94,   249,   250,   217,   218,   219,
     220,   221,   202,   203,   204,   205,   191,   192,   108,     4,
      95,   103,     5,   -56,     6,    98,   148,   264,   179,   282,
     109,   -57,   112,   104,   272,   235,   193,   194,    10,    11,
     269,   105,   106,     4,    97,   229,     5,   273,     6,    98,
     110,    18,   274,   114,   275,    97,   290,   230,   195,   116,
     118,   107,   286,   287,   121,   231,   232,    97,    97,   124,
     127,   130,   301,   302,   303,    18,   133,   145,   306,   139,
     298,     4,    99,   313,     5,   312,     6,    98,    97,   316,
     147,   235,   172,   173,   174,   175,   176,   146,   151,   315,
     153,   235,    63,   323,  -116,   156,   319,   327,    64,   321,
      76,    65,   165,    18,   171,   177,  -116,    97,    97,    97,
     329,    66,    97,    79,  -116,  -116,   189,    78,    97,   199,
     207,   206,    97,   208,   209,   211,  -116,   216,   240,    97,
      73,   210,   213,    97,    74,    63,    64,    65,    66,    75,
     214,   241,    76,    77,    78,    79,     1,    80,     2,   222,
       3,     4,   242,   243,     5,   244,     6,     7,     8,    76,
     165,    78,    79,   245,   246,     9,    10,    11,   248,   253,
      12,    13,   254,   256,   257,    14,    15,    16,   258,   259,
     263,    17,   276,    18,     1,    19,     2,   264,     3,     4,
     268,   283,     5,   116,     6,     7,     8,   289,   295,   305,
     291,   300,   325,     9,    10,    11,   267,   318,    12,    13,
     292,   293,   304,    14,    15,    16,   322,   308,   326,    17,
       1,    18,     2,    19,     3,     4,   284,   255,     5,   279,
       6,     7,     8,   299,   188,     0,     0,     0,     0,     9,
      10,    11,     0,     0,    12,    13,     0,     0,     0,    14,
      15,    16,     0,     0,     0,    17,     1,    18,     2,    19,
       3,     4,     0,   262,     5,     0,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,    11,     0,     0,
      12,    13,     0,     0,     0,    14,    15,    16,     0,     0,
       0,    17,     1,    18,     2,    19,     3,     4,     0,   270,
       5,     0,     6,     7,     8,     0,     0,     0,     0,     0,
       0,     9,    10,    11,     0,     0,    12,    13,     0,     0,
       0,    14,    15,    16,     0,     0,     0,    17,     1,    18,
       2,    19,     3,     4,     0,   271,     5,     0,     6,     7,
       8,     0,     0,     0,     0,     0,     0,     9,    10,    11,
       0,     0,    12,    13,     0,     0,     0,    14,    15,    16,
       0,     0,     0,    17,     1,    18,     2,    19,     3,     4,
       0,   288,     5,     0,     6,     7,     8,     0,     0,     0,
       0,     0,     0,     9,    10,    11,     0,     0,    12,    13,
       0,     0,     0,    14,    15,    16,     0,     0,     0,    17,
       1,    18,     2,    19,     3,     4,     0,   310,     5,     0,
       6,     7,     8,     0,     0,     0,     0,     0,     0,     9,
      10,    11,     0,     0,    12,    13,     0,     0,     0,    14,
      15,    16,     0,     0,     0,    17,     1,    18,     2,    19,
       3,     4,     0,   311,     5,     0,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,    11,     0,     0,
      12,    13,     0,     0,     0,    14,    15,    16,     0,     0,
       0,    17,     1,    18,     2,    19,     3,     4,     0,   314,
       5,     0,     6,     7,     8,     0,     0,     0,     0,     0,
       0,     9,    10,    11,     0,     0,    12,    13,     0,     0,
       0,    14,    15,    16,     0,     0,     0,    17,     1,    18,
       2,    19,     3,     4,     0,   317,     5,     0,     6,     7,
       8,     0,     0,     0,     0,     0,     0,     9,    10,    11,
       0,     0,    12,    13,     0,     0,     0,    14,    15,    16,
       0,     0,     0,    17,     1,    18,     2,    19,     3,     4,
       0,   324,     5,     0,     6,     7,     8,     0,     0,     0,
       0,     0,     0,     9,    10,    11,     0,     0,    12,    13,
       0,     0,     0,    14,    15,    16,     0,     0,     0,    17,
       1,    18,     2,    19,     3,     4,     0,   328,     5,     0,
       6,     7,     8,     0,     0,     0,     0,     0,     0,     9,
      10,    11,     0,     0,    12,    13,     0,   309,     0,    14,
      15,    16,     0,     0,     0,    17,     1,    18,     2,    19,
       3,     4,     0,     0,     5,     0,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     9,    10,    11,     0,     0,
      12,    13,     0,   320,     0,    14,    15,    16,     0,     0,
       0,    17,     1,    18,     2,    19,     3,     4,     0,     0,
       5,     0,     6,     7,     8,     0,     0,     0,     0,     0,
       0,     9,    10,    11,     0,     0,    12,    13,     0,     0,
       0,    14,    15,    16,     0,     0,     0,    17,     0,    18,
       0,    19
};

static const yytype_int16 yycheck[] =
{
      24,    49,    48,    51,    42,    53,    68,    55,    50,    57,
      46,    59,    17,    61,    58,   233,   139,    52,   141,   139,
       6,   141,    54,     3,     4,    56,    60,   139,   139,   141,
     141,   139,   139,   141,   141,   139,   139,   141,   141,     5,
       3,    28,     3,     4,    15,    48,    28,    50,    43,    43,
      28,   110,    15,    48,    15,    50,     3,   105,   106,    15,
      23,    24,    23,    24,    50,    45,     3,   115,    15,    43,
       3,   119,    15,    44,   122,    15,    47,   125,    15,    45,
     128,   299,    15,   131,    45,    90,   134,    15,    44,   212,
      23,    24,   212,     3,    57,    56,   144,    84,    85,    15,
     212,   212,    84,    85,   212,   212,    84,    85,   212,   212,
      55,     3,    99,    41,   162,    25,    26,    99,    23,    24,
      39,    99,    45,    15,    57,    15,    29,    50,    31,    48,
      43,    23,    24,    52,    43,   181,   195,   265,   162,   267,
     182,   200,   186,    35,   180,   193,   194,   209,   183,   197,
     198,   199,   184,   187,   185,    15,    15,   216,   196,    51,
      52,    53,    54,   222,     0,   213,   214,   172,   173,   174,
     175,   176,    51,    52,    53,    54,     3,     4,     3,     8,
      37,     3,    11,    47,    13,    14,    15,    29,    15,    31,
      15,    47,     3,    15,   253,   233,    23,    24,    23,    24,
     248,    23,    24,     8,   228,     3,    11,   255,    13,    14,
      35,    40,   260,    15,   262,   239,   278,    15,    45,    50,
       3,    43,   270,   271,    15,    23,    24,   251,   252,     3,
      15,     3,   291,   292,   293,    40,    15,    15,   297,    48,
     288,     8,    47,   305,    11,   304,    13,    14,   272,   308,
       3,   289,    17,    18,    19,    20,    21,    52,    15,   307,
      48,   299,    51,   322,     3,    15,   314,   326,    52,   317,
      51,    53,    52,    40,    44,    44,    15,   301,   302,   303,
     328,    54,   306,    54,    23,    24,    15,    53,   312,    44,
      44,    36,   316,    44,    50,     4,    35,    45,     3,   323,
      39,    48,    44,   327,    43,    51,    52,    53,    54,    48,
      44,     3,    51,    52,    53,    54,     3,    56,     5,    45,
       7,     8,     3,     3,    11,     3,    13,    14,    15,    51,
      52,    53,    54,    45,    45,    22,    23,    24,    15,    45,
      27,    28,    15,    47,    47,    32,    33,    34,    47,    47,
      57,    38,    48,    40,     3,    42,     5,    29,     7,     8,
      50,    15,    11,    50,    13,    14,    15,    56,    44,    43,
      49,    46,     6,    22,    23,    24,   246,    44,    27,    28,
      49,    49,    45,    32,    33,    34,    45,    49,    45,    38,
       3,    40,     5,    42,     7,     8,   268,    46,    11,   264,
      13,    14,    15,   289,   139,    -1,    -1,    -1,    -1,    22,
      23,    24,    -1,    -1,    27,    28,    -1,    -1,    -1,    32,
      33,    34,    -1,    -1,    -1,    38,     3,    40,     5,    42,
       7,     8,    -1,    46,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,    -1,
      27,    28,    -1,    -1,    -1,    32,    33,    34,    -1,    -1,
      -1,    38,     3,    40,     5,    42,     7,     8,    -1,    46,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    -1,    -1,    27,    28,    -1,    -1,
      -1,    32,    33,    34,    -1,    -1,    -1,    38,     3,    40,
       5,    42,     7,     8,    -1,    46,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      -1,    -1,    27,    28,    -1,    -1,    -1,    32,    33,    34,
      -1,    -1,    -1,    38,     3,    40,     5,    42,     7,     8,
      -1,    46,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    -1,    -1,    27,    28,
      -1,    -1,    -1,    32,    33,    34,    -1,    -1,    -1,    38,
       3,    40,     5,    42,     7,     8,    -1,    46,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    -1,    -1,    27,    28,    -1,    -1,    -1,    32,
      33,    34,    -1,    -1,    -1,    38,     3,    40,     5,    42,
       7,     8,    -1,    46,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,    -1,
      27,    28,    -1,    -1,    -1,    32,    33,    34,    -1,    -1,
      -1,    38,     3,    40,     5,    42,     7,     8,    -1,    46,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    -1,    -1,    27,    28,    -1,    -1,
      -1,    32,    33,    34,    -1,    -1,    -1,    38,     3,    40,
       5,    42,     7,     8,    -1,    46,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      -1,    -1,    27,    28,    -1,    -1,    -1,    32,    33,    34,
      -1,    -1,    -1,    38,     3,    40,     5,    42,     7,     8,
      -1,    46,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    -1,    -1,    27,    28,
      -1,    -1,    -1,    32,    33,    34,    -1,    -1,    -1,    38,
       3,    40,     5,    42,     7,     8,    -1,    46,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      33,    34,    -1,    -1,    -1,    38,     3,    40,     5,    42,
       7,     8,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    33,    34,    -1,    -1,
      -1,    38,     3,    40,     5,    42,     7,     8,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    -1,    -1,    27,    28,    -1,    -1,
      -1,    32,    33,    34,    -1,    -1,    -1,    38,    -1,    40,
      -1,    42
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,     7,     8,    11,    13,    14,    15,    22,
      23,    24,    27,    28,    32,    33,    34,    38,    40,    42,
      59,    60,    62,    63,    67,    68,    69,    70,    71,    72,
      73,    76,    77,    79,    80,    81,    82,    83,    84,    85,
      88,    90,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   114,    51,    52,    53,    54,    43,    43,    15,
      15,    15,    15,    39,    43,    48,    51,    52,    53,    54,
      56,     3,    25,    26,    43,    43,    55,     3,    15,    65,
      66,    15,    15,    86,     0,    37,    61,    68,    14,    47,
      72,    81,    88,     3,    15,    23,    24,    43,     3,    15,
      35,    94,     3,    98,    15,   100,    50,    78,     3,   102,
      78,    15,   104,    78,     3,   106,    78,    15,   108,    78,
       3,   110,    78,    15,   112,    78,    64,    65,    64,    48,
      43,    48,    78,    15,    44,    15,    52,     3,    15,    72,
      72,    15,    65,    48,    15,    41,    15,    72,    78,    78,
      23,    24,    67,    78,    78,    52,    78,    78,    78,    78,
      78,    44,    17,    18,    19,    20,    21,    44,     3,    15,
      97,    99,   101,   103,   105,   107,   109,   111,   113,    15,
      87,     3,     4,    23,    24,    45,    56,    89,   113,    44,
      45,    78,    51,    52,    53,    54,    36,    44,    44,    50,
      48,     4,    48,    44,    44,    78,    45,    65,    65,    65,
      65,    65,    45,    15,    44,    47,    78,    78,    67,     3,
      15,    23,    24,    91,    92,    94,    78,    78,    78,    67,
       3,     3,     3,     3,     3,    45,    45,    64,    15,    78,
      78,    67,    67,    45,    15,    46,    47,    47,    47,    47,
      57,    92,    46,    57,    29,    74,    75,    74,    50,    78,
      46,    46,    67,    78,    78,    78,    48,     3,    45,    89,
      31,    75,    31,    15,    77,     6,    78,    78,    46,    56,
      64,    49,    49,    49,    52,    44,     5,    45,    78,    91,
      46,    67,    67,    67,    45,    43,    67,    57,    49,    30,
      46,    46,    67,    64,    46,    78,    67,    46,    44,    78,
      30,    78,    45,    67,    46,     6,    45,    67,    46,    78
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    62,    62,    62,    63,
      64,    64,    64,    64,    64,    65,    65,    66,    66,    67,
      67,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    69,    70,
      70,    70,    70,    71,    71,    71,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    73,    73,    74,    74,    75,
      75,    76,    77,    77,    77,    77,    77,    77,    78,    78,
      79,    79,    79,    79,    79,    79,    80,    80,    81,    82,
      83,    84,    85,    86,    86,    87,    87,    87,    88,    88,
      88,    88,    88,    89,    89,    90,    91,    91,    92,    92,
      92,    92,    92,    93,    93,    94,    94,    94,    94,    95,
      95,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   102,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   107,   107,   108,   108,   109,   109,   110,   110,
     111,   111,   112,   112,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   114
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     8,    12,    20,     8,
       3,     3,     3,     3,     3,     1,     1,     2,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     7,     2,
       2,     2,     0,     1,     3,     2,     1,     1,     2,     2,
       2,     2,     4,     4,     4,    10,    10,     1,     2,     5,
       7,    12,     5,     5,     5,     5,     2,     3,     1,     0,
       3,     3,     5,     5,     2,     2,     1,     1,     3,     6,
       9,     3,     2,     1,     2,     1,     3,     2,     5,     7,
       5,     5,     5,     1,     1,     7,     2,     1,     2,     2,
       2,     2,     1,     2,     1,     1,     1,     1,     1,     4,
       5,     4,     2,     1,     2,     1,     3,     2,     2,     1,
       3,     2,     2,     1,     3,     2,     2,     1,     3,     2,
       2,     1,     3,     2,     2,     1,     3,     2,     2,     1,
       3,     2,     2,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,    11
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 5: /* end: STOP  */
#line 15 "m.y"
           { return 0 ;}
#line 1638 "y.tab.c"
    break;


#line 1642 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 160 "m.y"
 

void main() 
{
    printf("\nenter anything\n");
    yyparse();
     if(flag==0) 
   	printf("\nThe code is Valid\n"); 
}
void yyerror(const char *s) {
    printf("Error: %s\n", s);
    flag = 1;
}
        


  


