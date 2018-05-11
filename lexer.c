/****************************************************************************
*                         A C A D E M I C   C O P Y
* 
* This file was produced by an ACADEMIC COPY of Parser Generator. It is for
* use in non-commercial software only. An ACADEMIC COPY of Parser Generator
* can only be used by a student, or a member of an academic community. If
* however you want to use Parser Generator for commercial purposes then you
* will need to purchase a license. For more information see the online help or
* go to the Bumble-Bee Software homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* lexer.c
* C source file generated from lexer.l.
* 
* Date: 01/18/17
* Time: 10:01:58
* 
* ALex Version: 2.07
****************************************************************************/

#include <yylex.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTLEXER

#line 1 ".\\lexer.l"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "parser.h"
extern char yylval[100];


#line 49 "lexer.c"
/* repeated because of possible precompiled header */
#include <yylex.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTLEXER

#include ".\lexer.h"

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/* yytext */
static char YYNEAR yysatext[(YYTEXT_SIZE) + 1];		/* extra char for \0 */
char YYFAR *YYNEAR YYDCDECL yystext = yysatext;
char YYFAR *YYNEAR YYDCDECL yytext = yysatext;
int YYNEAR YYDCDECL yystext_size = (YYTEXT_SIZE);
int YYNEAR YYDCDECL yytext_size = (YYTEXT_SIZE);
int YYNEAR YYDCDECL yytext_max = (YYTEXT_MAX);

/* yystatebuf */
#if (YYTEXT_SIZE) != 0
static int YYNEAR yysastatebuf[(YYTEXT_SIZE)];
int YYFAR *YYNEAR YYDCDECL yysstatebuf = yysastatebuf;
int YYFAR *YYNEAR YYDCDECL yystatebuf = yysastatebuf;
#else
int YYFAR *YYNEAR YYDCDECL yysstatebuf = NULL;
int YYFAR *YYNEAR YYDCDECL yystatebuf = NULL;
#endif

/* yyunputbuf */
#if (YYUNPUT_SIZE) != 0
static int YYNEAR yysaunputbuf[(YYUNPUT_SIZE)];
int YYFAR *YYNEAR YYDCDECL yysunputbufptr = yysaunputbuf;
int YYFAR *YYNEAR YYDCDECL yyunputbufptr = yysaunputbuf;
#else
int YYFAR *YYNEAR YYDCDECL yysunputbufptr = NULL;
int YYFAR *YYNEAR YYDCDECL yyunputbufptr = NULL;
#endif
int YYNEAR YYDCDECL yysunput_size = (YYUNPUT_SIZE);
int YYNEAR YYDCDECL yyunput_size = (YYUNPUT_SIZE);
int YYNEAR YYDCDECL yyunput_max = (YYUNPUT_MAX);

/* backwards compatability with lex */
#ifdef input
#ifdef YYPROTOTYPE
int YYCDECL yyinput(void)
#else
int YYCDECL yyinput()
#endif
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
#ifdef YYPROTOTYPE
void YYCDECL yyoutput(int ch)
#else
void YYCDECL yyoutput(ch)
int ch;
#endif
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
#ifdef YYPROTOTYPE
void YYCDECL yyunput(int ch)
#else
void YYCDECL yyunput(ch)
int ch;
#endif
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		/* <warning: unreachable code> off */
#endif
#endif

#ifdef YYPROTOTYPE
int YYCDECL yylexeraction(int action)
#else
int YYCDECL yylexeraction(action)
int action;
#endif
{
	yyreturnflg = YYTRUE;
	switch (action) {
	case 1:
		{
#line 11 ".\\lexer.l"
;
#line 170 "lexer.c"
		}
		break;
	case 2:
		{
#line 12 ".\\lexer.l"
return Int;
#line 177 "lexer.c"
		}
		break;
	case 3:
		{
#line 13 ".\\lexer.l"
return Float;
#line 184 "lexer.c"
		}
		break;
	case 4:
		{
#line 14 ".\\lexer.l"
return For;
#line 191 "lexer.c"
		}
		break;
	case 5:
		{
#line 15 ".\\lexer.l"
return While;
#line 198 "lexer.c"
		}
		break;
	case 6:
		{
#line 16 ".\\lexer.l"
return If;
#line 205 "lexer.c"
		}
		break;
	case 7:
		{
#line 17 ".\\lexer.l"
return Else;
#line 212 "lexer.c"
		}
		break;
	case 8:
		{
#line 18 ".\\lexer.l"
return Do;
#line 219 "lexer.c"
		}
		break;
	case 9:
		{
#line 19 ".\\lexer.l"
return IfElse;
#line 226 "lexer.c"
		}
		break;
	case 10:
		{
#line 21 ".\\lexer.l"
	strcpy_s(yylval,sizeof(yylval),yytext); return Eq;
#line 233 "lexer.c"
		}
		break;
	case 11:
		{
#line 22 ".\\lexer.l"
	strcpy_s(yylval,sizeof(yylval),yytext); return Lt;
#line 240 "lexer.c"
		}
		break;
	case 12:
		{
#line 23 ".\\lexer.l"
	strcpy_s(yylval,sizeof(yylval),yytext); return Gt;
#line 247 "lexer.c"
		}
		break;
	case 13:
		{
#line 24 ".\\lexer.l"
	strcpy_s(yylval,sizeof(yylval),yytext); return Nq;
#line 254 "lexer.c"
		}
		break;
	case 14:
		{
#line 28 ".\\lexer.l"

	strcpy_s(yylval,sizeof(yylval),yytext);
	return Number;

#line 264 "lexer.c"
		}
		break;
	case 15:
		{
#line 33 ".\\lexer.l"

		strcpy_s(yylval,sizeof(yylval),yytext);
		return Identifier;

#line 274 "lexer.c"
		}
		break;
	case 16:
		{
#line 37 ".\\lexer.l"
return yytext[0];
#line 281 "lexer.c"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = YYFALSE;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		/* <warning: unreachable code> to the old state */
#endif
#endif
YYCONST yymatch_t YYNEARFAR YYBASED_CODE YYDCDECL yymatch[] = {
	0
};

int YYNEAR YYDCDECL yytransitionmax = 210;
YYCONST yytransition_t YYNEARFAR YYBASED_CODE YYDCDECL yytransition[] = {
	{ 0, 0 },
	{ 4, 1 },
	{ 4, 1 },
	{ 30, 18 },
	{ 4, 4 },
	{ 4, 4 },
	{ 19, 7 },
	{ 20, 8 },
	{ 7, 7 },
	{ 7, 7 },
	{ 7, 7 },
	{ 7, 7 },
	{ 7, 7 },
	{ 7, 7 },
	{ 7, 7 },
	{ 7, 7 },
	{ 7, 7 },
	{ 7, 7 },
	{ 27, 15 },
	{ 25, 14 },
	{ 29, 16 },
	{ 37, 30 },
	{ 26, 14 },
	{ 37, 30 },
	{ 4, 1 },
	{ 5, 1 },
	{ 28, 15 },
	{ 4, 4 },
	{ 21, 9 },
	{ 22, 10 },
	{ 31, 24 },
	{ 32, 25 },
	{ 33, 26 },
	{ 34, 27 },
	{ 35, 28 },
	{ 30, 18 },
	{ 36, 29 },
	{ 23, 12 },
	{ 6, 1 },
	{ 39, 31 },
	{ 7, 1 },
	{ 7, 1 },
	{ 7, 1 },
	{ 7, 1 },
	{ 7, 1 },
	{ 7, 1 },
	{ 7, 1 },
	{ 7, 1 },
	{ 7, 1 },
	{ 7, 1 },
	{ 40, 32 },
	{ 41, 34 },
	{ 8, 1 },
	{ 9, 1 },
	{ 10, 1 },
	{ 42, 36 },
	{ 24, 13 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 43, 40 },
	{ 44, 41 },
	{ 45, 42 },
	{ 46, 44 },
	{ 11, 1 },
	{ 17, 5 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 12, 1 },
	{ 13, 1 },
	{ 14, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 15, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 16, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 1 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 0, 0 },
	{ 11, 46 },
	{ 0, 0 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 11, 46 },
	{ 38, 38 },
	{ 38, 38 },
	{ 38, 38 },
	{ 38, 38 },
	{ 38, 38 },
	{ 38, 38 },
	{ 38, 38 },
	{ 38, 38 },
	{ 38, 38 },
	{ 38, 38 },
	{ 18, 19 },
	{ 18, 19 },
	{ 18, 19 },
	{ 18, 19 },
	{ 18, 19 },
	{ 18, 19 },
	{ 18, 19 },
	{ 18, 19 },
	{ 18, 19 },
	{ 18, 19 }
};

YYCONST yystate_t YYNEARFAR YYBASED_CODE YYDCDECL yystate[] = {
	{ 0, 0, 0 },
	{ -3, -8, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 16 },
	{ 0, -5, 1 },
	{ 0, 27, 16 },
	{ 19, 0, 16 },
	{ 0, -40, 14 },
	{ 0, -54, 16 },
	{ 0, -33, 16 },
	{ 0, -32, 16 },
	{ 46, 0, 15 },
	{ 46, -74, 15 },
	{ 46, -52, 15 },
	{ 46, -89, 15 },
	{ 46, -84, 15 },
	{ 46, -84, 15 },
	{ 0, 0, 13 },
	{ 19, -66, 14 },
	{ 0, 152, 0 },
	{ 0, 0, 11 },
	{ 0, 0, 10 },
	{ 0, 0, 12 },
	{ 46, 0, 8 },
	{ 46, -85, 15 },
	{ 46, -80, 15 },
	{ 46, -82, 15 },
	{ 46, -68, 6 },
	{ 46, -82, 15 },
	{ 46, -69, 15 },
	{ 38, -22, 0 },
	{ 46, -62, 15 },
	{ 46, -47, 15 },
	{ 46, 0, 4 },
	{ 46, -57, 15 },
	{ 46, 0, 2 },
	{ 46, -53, 15 },
	{ 38, 0, 0 },
	{ 0, 142, 14 },
	{ 46, 0, 7 },
	{ 46, -33, 15 },
	{ 46, -31, 15 },
	{ 46, -16, 15 },
	{ 46, 0, 3 },
	{ 46, -15, 15 },
	{ 46, 0, 5 },
	{ 0, 67, 9 }
};

YYCONST yybackup_t YYNEARFAR YYBASED_CODE YYDCDECL yybackup[] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

#line 38 ".\\lexer.l"

main()
{
char c=' ';
   errno_t f1= fopen_s(&yyin,"prog.txt","r");
   errno_t f2= fopen_s(&yyout,"res.txt","w");
	yyparse();
	scanf_s("%c",&c);
	fclose(yyin);
	fclose(yyout);
	//yyparse();
}

