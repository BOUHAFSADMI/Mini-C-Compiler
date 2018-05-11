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
* parser.c
* C source file generated from parser.y.
* 
* Date: 01/18/17
* Time: 10:05:45
* 
* AYACC Version: 2.07
****************************************************************************/

#include <yypars.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTPARSER

#line 1 ".\\parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int quadcourant=0;
int cpt=1,save=0;

typedef struct Quad {
	char op[4];
	char src1[50];
	char src2[50];
	char dest[50];
}Quad;


Quad tab[500];
Quad quad;


typedef struct SADMI{
	char val[50];
	int quadcourant;
	Quad tampon[100];
}SADMI;

#define YYSTYPE SADMI

extern FILE *yyin;
extern FILE *yyout;

void generate(char op[6],char src1[50],char src2[50],char dest[50]);


#line 75 "parser.c"
/* repeated because of possible precompiled header */
#include <yypars.h>

/* namespaces */
#if defined(__cplusplus) && defined(YYSTDCPPLIB)
using namespace std;
#endif
#if defined(__cplusplus) && defined(YYNAMESPACE)
using namespace yl;
#endif

#define YYFASTPARSER

#include ".\parser.h"

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYSTACK_SIZE
#define YYSTACK_SIZE 100
#endif
#ifndef YYSTACK_MAX
#define YYSTACK_MAX 0
#endif

/* (state) stack */
#if (YYSTACK_SIZE) != 0
static yystack_t YYNEAR yystack[(YYSTACK_SIZE)];
yystack_t YYFAR *YYNEAR YYDCDECL yysstackptr = yystack;
yystack_t YYFAR *YYNEAR YYDCDECL yystackptr = yystack;
#else
yystack_t YYFAR *YYNEAR YYDCDECL yysstackptr = NULL;
yystack_t YYFAR *YYNEAR YYDCDECL yystackptr = NULL;
#endif

/* attribute stack */
#if (YYSTACK_SIZE) != 0
static YYSTYPE YYNEAR yyattributestack[(YYSTACK_SIZE)];
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yysattributestackptr = yyattributestack;
void YYFAR *YYNEAR YYDCDECL yyattributestackptr = yyattributestack;
#else
char YYFAR *YYNEAR YYDCDECL yysattributestackptr = (char YYFAR *) yyattributestack;
char YYFAR *YYNEAR YYDCDECL yyattributestackptr = (char YYFAR *) yyattributestack;
#endif
#else
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yysattributestackptr = NULL;
void YYFAR *YYNEAR YYDCDECL yyattributestackptr = NULL;
#else
char YYFAR *YYNEAR YYDCDECL yysattributestackptr = NULL;
char YYFAR *YYNEAR YYDCDECL yyattributestackptr = NULL;
#endif
#endif

int YYNEAR YYDCDECL yysstack_size = (YYSTACK_SIZE);
int YYNEAR YYDCDECL yystack_size = (YYSTACK_SIZE);
int YYNEAR YYDCDECL yystack_max = (YYSTACK_MAX);

/* attributes */
YYSTYPE YYNEAR yyval;
YYSTYPE YYNEAR yylval;
#ifdef YYPROTOTYPE
void YYFAR *YYNEAR YYDCDECL yyvalptr = &yyval;
void YYFAR *YYNEAR YYDCDECL yylvalptr = &yylval;
#else
char YYFAR *YYNEAR YYDCDECL yyvalptr = (char *) &yyval;
char YYFAR *YYNEAR YYDCDECL yylvalptr = (char *) &yylval;
#endif

size_t YYNEAR YYDCDECL yyattribute_size = sizeof(YYSTYPE);

/* yyattribute */
#ifdef YYDEBUG
#ifdef YYPROTOTYPE
static YYSTYPE YYFAR *yyattribute1(int index)
#else
static YYSTYPE YYFAR *yyattribute1(index)
int index;
#endif
{
	YYSTYPE YYFAR *p = &((YYSTYPE YYFAR *) yyattributestackptr)[yytop + index];
	return p;
}
#define yyattribute(index) (*yyattribute1(index))
#else
#define yyattribute(index) (((YYSTYPE YYFAR *) yyattributestackptr)[yytop + (index)])
#endif

#ifdef YYDEBUG
#ifdef YYPROTOTYPE
static void yyinitdebug(YYSTYPE YYFAR **p, int count)
#else
static void yyinitdebug(p, count)
YYSTYPE YYFAR **p;
int count;
#endif
{
	int i;
	yyassert(p != NULL);
	yyassert(count >= 1);

	for (i = 0; i < count; i++) {
		p[i] = &((YYSTYPE YYFAR *) yyattributestackptr)[yytop + i - (count - 1)];
	}
}
#endif

#ifdef YYPROTOTYPE
void YYCDECL yyparseraction(int action)
#else
void YYCDECL yyparseraction(action)
int action;
#endif
{
	switch (action) {
	case 0:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[7];
			yyinitdebug(yya, 7);
#endif
			{
#line 45 ".\\parser.y"

		int i=0;
		for(i=0;i<quadcourant;i++)
		{
			fprintf(yyout,"0x%x :        %s ",i,tab[i].op);
			fprintf(yyout,"     %s      ",tab[i].src1);
			fprintf(yyout,"      %s     ",tab[i].src2);
			fprintf(yyout," %s\n",tab[i].dest);
		}
	
#line 210 "parser.c"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[11];
			yyinitdebug(yya, 11);
#endif
			{
#line 81 ".\\parser.y"

					char str[50];
					
					sprintf_s(str,sizeof(str),"0x%x",yyattribute(8 - 10).quadcourant+1);
					strcpy_s(tab[yyattribute(5 - 10).quadcourant].dest,sizeof(tab[yyattribute(5 - 10).quadcourant].dest),str);	
					
					sprintf_s(str,sizeof(str),"0x%x",quadcourant);
					strcpy_s(tab[yyattribute(8 - 10).quadcourant].dest,sizeof(tab[yyattribute(8 - 10).quadcourant].dest),str);		
					
					
	
#line 233 "parser.c"
			}
		}
		break;
	case 2:
		{
#line 93 ".\\parser.y"

		yyval.quadcourant=quadcourant;
		generate("JZ","","","");
	
#line 244 "parser.c"
		}
		break;
	case 3:
		{
#line 98 ".\\parser.y"

		yyval.quadcourant=quadcourant;
		generate("JMP","","","");
	
#line 254 "parser.c"
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[13];
			yyinitdebug(yya, 13);
#endif
			{
#line 103 ".\\parser.y"

										char str[50];
										int i=0;
										for( i = quadcourant; i<quadcourant+yyattribute(11 - 12).quadcourant-yyattribute(8 - 12).quadcourant;i++) {
												tab[i]=yyattribute(11 - 12).tampon[i-quadcourant];
										}
										
										quadcourant += yyattribute(11 - 12).quadcourant-yyattribute(8 - 12).quadcourant-1;
										
										sprintf_s(str,sizeof(str),"0x%x",yyattribute(5 - 12).quadcourant);
										generate("jmp","","",str);
										
										sprintf_s(str,sizeof(str),"0x%x",quadcourant);
										strcpy_s(tab[yyattribute(8 - 12).quadcourant].dest,sizeof(tab[yyattribute(8 - 12).quadcourant].dest),str);
	
#line 280 "parser.c"
			}
		}
		break;
	case 5:
		{
#line 119 ".\\parser.y"

		yyval.quadcourant=quadcourant;
	
#line 290 "parser.c"
		}
		break;
	case 6:
		{
#line 123 ".\\parser.y"

		yyval.quadcourant=quadcourant;
		generate("JZ","","","");	
		save = quadcourant;
	
#line 301 "parser.c"
		}
		break;
	case 7:
		{
#line 129 ".\\parser.y"

		int i=0;
		yyval.quadcourant=quadcourant;
		for( i = save; i<quadcourant;i++) {
				yyval.tampon[i-save] = tab[i];
		}
		quadcourant=save;
	
#line 315 "parser.c"
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 138 ".\\parser.y"
strcpy_s(yyval.val,sizeof(yyval.val),yyattribute(1 - 1).val);
#line 327 "parser.c"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[8];
			yyinitdebug(yya, 8);
#endif
			{
#line 142 ".\\parser.y"

		char str[50];
		sprintf_s(str,sizeof(str),"0x%x",yyattribute(2 - 7).quadcourant);		
		//generation de Quadruplet
		generate("jmp","","",str);	
		//mise a jour de m2
		sprintf_s(str,sizeof(str),"0x%x",quadcourant);
		strcpy_s(tab[yyattribute(6 - 7).quadcourant].dest,sizeof(tab[yyattribute(6 - 7).quadcourant].dest),str);
	 
#line 348 "parser.c"
			}
		}
		break;
	case 10:
		{
#line 152 ".\\parser.y"

			yyval.quadcourant = quadcourant;
		
#line 358 "parser.c"
		}
		break;
	case 11:
		{
#line 156 ".\\parser.y"

		  //generation de Quadruplet
			yyval.quadcourant = quadcourant;
			generate("JZ","","","");			   
		
#line 369 "parser.c"
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[8];
			yyinitdebug(yya, 8);
#endif
			{
#line 163 ".\\parser.y"

		char str[50];
		sprintf_s(str,sizeof(str),"0x%x",yyattribute(2 - 7).quadcourant);
		generate("JNZ","","",str);		
	
#line 385 "parser.c"
			}
		}
		break;
	case 13:
		{
#line 170 ".\\parser.y"

	yyval.quadcourant=quadcourant;

#line 395 "parser.c"
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[7];
			yyinitdebug(yya, 7);
#endif
			{
#line 175 ".\\parser.y"

																		char str[50];
																		sprintf_s(str,sizeof(str),"0x%x",quadcourant);
																		strcpy_s(tab[yyattribute(5 - 6).quadcourant].dest,sizeof(tab[yyattribute(5 - 6).quadcourant].dest),str);
			
#line 411 "parser.c"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[10];
			yyinitdebug(yya, 10);
#endif
			{
#line 180 ".\\parser.y"

																	char str[50];
																	sprintf_s(str,sizeof(str),"0x%x",quadcourant);
																	strcpy_s(tab[yyattribute(8 - 9).quadcourant].dest,sizeof(tab[yyattribute(8 - 9).quadcourant].dest),str);
																	
																	sprintf_s(str,sizeof(str),"0x%x",yyattribute(8 - 9).quadcourant+1);
																	strcpy_s(tab[yyattribute(5 - 9).quadcourant].dest,sizeof(tab[yyattribute(5 - 9).quadcourant].dest),str);
				
#line 431 "parser.c"
			}
		}
		break;
	case 16:
		{
#line 189 ".\\parser.y"
yyval.quadcourant=quadcourant;
		generate("JZ","","","");
		
#line 441 "parser.c"
		}
		break;
	case 17:
		{
#line 193 ".\\parser.y"

				yyval.quadcourant=quadcourant;
				generate("jmp","","","");	
		
#line 451 "parser.c"
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 203 ".\\parser.y"
generate("=",yyattribute(3 - 3).val,"",yyattribute(1 - 3).val);
#line 463 "parser.c"
			}
		}
		break;
	case 19:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 204 ".\\parser.y"
strcpy_s(yyval.val,sizeof(yyval.val),yyattribute(1 - 1).val);
#line 476 "parser.c"
			}
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 206 ".\\parser.y"

																char str1[50] ;
																char str2[50];
																generate("cmp",yyattribute(1 - 3).val,yyattribute(3 - 3).val,"");																		
																
																sprintf_s(str1,sizeof(str1),"0x%x",quadcourant+3);
																
																if (strcmp(yyattribute(2 - 3).val,"<")==0){
																	 generate("jge","","",str1);
																}
																else 	if (strcmp(yyattribute(2 - 3).val,"<=")==0){															 
																	 generate("jg","","",str1);
																}
																else 	if (strcmp(yyattribute(2 - 3).val,">")==0){																   
																	 generate("jle","","",str1);
																}
																else 	if (strcmp(yyattribute(2 - 3).val,">=")==0){																
																	 generate("jl","","",str1);
																}else 	if (strcmp(yyattribute(2 - 3).val,"!=")==0){																	
																	 generate("je","","",str1);
																}else 	if (strcmp(yyattribute(2 - 3).val,"==")==0){																	
																	 generate("jne","","",str1);
																}
																
																sprintf_s(str2,sizeof(str2),"tmp%d",cpt); 
																++cpt;
																
																generate("=","1","",str2);
																sprintf_s(str1,sizeof(str1),"0x%x",quadcourant+2);
																generate("jmp","","",str1);		
																generate("=","0","",str2);
																
																strcpy_s(yyval.val,sizeof(yyval.val),str2);
														  
#line 522 "parser.c"
			}
		}
		break;
	case 21:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 240 ".\\parser.y"
strcpy_s(yyval.val,sizeof(yyval.val),yyattribute(1 - 1).val);
#line 535 "parser.c"
			}
		}
		break;
	case 22:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 243 ".\\parser.y"
strcpy_s(yyval.val,sizeof(yyval.val),"<");
#line 548 "parser.c"
			}
		}
		break;
	case 23:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 244 ".\\parser.y"
strcpy_s(yyval.val,sizeof(yyval.val),">");
#line 561 "parser.c"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 249 ".\\parser.y"

											char str[50];
											sprintf_s(str,sizeof(str),"tmp%d",cpt);
											cpt++;
										   //generation de Quadruplet
											generate("+",yyattribute(1 - 3).val,yyattribute(3 - 3).val,str);	
											strcpy_s(yyval.val,sizeof(yyval.val),str);
										
#line 581 "parser.c"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 257 ".\\parser.y"

											char str[50];
											sprintf_s(str,sizeof(str),"tmp%d",cpt);
											cpt++;
										   //generation de Quadruplet
											generate("-",yyattribute(1 - 3).val,yyattribute(3 - 3).val,str);	
											strcpy_s(yyval.val,sizeof(yyval.val),str);
									
#line 601 "parser.c"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 265 ".\\parser.y"
	strcpy_s(yyval.val,sizeof(yyval.val),yyattribute(1 - 1).val);
#line 614 "parser.c"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 267 ".\\parser.y"

											char str[50];
											sprintf_s(str,sizeof(str),"tmp%d",cpt);
											cpt++;
										   //generation de Quadruplet
											generate("*",yyattribute(1 - 3).val,yyattribute(3 - 3).val,str);	
											strcpy_s(yyval.val,sizeof(yyval.val),str);
										
#line 634 "parser.c"
			}
		}
		break;
	case 28:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 275 ".\\parser.y"

											char str[50];
											sprintf_s(str,sizeof(str),"tmp%d",cpt);
											cpt++;
										   //generation de Quadruplet
											generate("/",yyattribute(1 - 3).val,yyattribute(3 - 3).val,str);	
											strcpy_s(yyval.val,sizeof(yyval.val),str);
										
#line 654 "parser.c"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[2];
			yyinitdebug(yya, 2);
#endif
			{
#line 283 ".\\parser.y"
strcpy_s(yyval.val,sizeof(yyval.val),yyattribute(1 - 1).val);
#line 667 "parser.c"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[4];
			yyinitdebug(yya, 4);
#endif
			{
#line 285 ".\\parser.y"
strcpy_s(yyval.val,sizeof(yyval.val),yyattribute(2 - 3).val);
#line 680 "parser.c"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 286 ".\\parser.y"

											char str[50];
											sprintf_s(str,sizeof(str),"tmp%d",cpt);
											cpt++;
										   //generation de Quadruplet
											generate("-","",yyattribute(2 - 2).val,str);	
											strcpy_s(yyval.val,sizeof(yyval.val),str);
								
#line 700 "parser.c"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR *yya[3];
			yyinitdebug(yya, 3);
#endif
			{
#line 294 ".\\parser.y"
strcpy_s(yyval.val,sizeof(yyval.val),yyattribute(2 - 2).val);
#line 713 "parser.c"
			}
		}
		break;
	default:
		yyassert(0);
		break;
	}
}
#ifdef YYDEBUG
YYCONST yysymbol_t YYNEARFAR YYBASED_CODE YYDCDECL yysymbol[] = {
	{ "$end", 0 },
	{ "\'(\'", 40 },
	{ "\')\'", 41 },
	{ "\'*\'", 42 },
	{ "\'+\'", 43 },
	{ "\',\'", 44 },
	{ "\'-\'", 45 },
	{ "\'/\'", 47 },
	{ "\';\'", 59 },
	{ "\'<\'", 60 },
	{ "\'=\'", 61 },
	{ "\'>\'", 62 },
	{ "\'{\'", 123 },
	{ "\'}\'", 125 },
	{ "error", 256 },
	{ "Number", 257 },
	{ "Identifier", 258 },
	{ "Int", 259 },
	{ "Float", 260 },
	{ "For", 261 },
	{ "While", 262 },
	{ "Do", 263 },
	{ "If", 264 },
	{ "Else", 265 },
	{ "IfElse", 266 },
	{ "Eq", 267 },
	{ "Lt", 268 },
	{ "Gt", 269 },
	{ "Nq", 270 },
	{ "IF", 271 },
	{ NULL, 0 }
};

YYCONST char *YYCONST YYNEARFAR YYBASED_CODE YYDCDECL yyrule[] = {
	"$accept: Function",
	"Function: Type Identifier \'(\' ArgList \')\' CompoundStmt",
	"ArgList: Arg",
	"ArgList: ArgList \',\' Arg",
	"Arg: Type Identifier",
	"Arg:",
	"Declaration: Type IdentList \';\'",
	"Type: Int",
	"Type: Float",
	"IdentList: Identifier \',\' IdentList",
	"IdentList: Identifier",
	"Stmt: ForStmt",
	"Stmt: WhileStmt",
	"Stmt: DoWhileStmt",
	"Stmt: IfElseStmt",
	"Stmt: Expr \';\'",
	"Stmt: IfStmt",
	"Stmt: CompoundStmt",
	"Stmt: Declaration",
	"Stmt: \';\'",
	"IfElseStmt: IfElse \'(\' Expr \';\' IE1 Stmt \';\' IE2 Stmt \')\'",
	"IE1:",
	"IE2:",
	"ForStmt: For \'(\' Expr \';\' R1 OptExpr \';\' R2 OptExpr \')\' R3 Stmt",
	"R1:",
	"R2:",
	"R3:",
	"OptExpr: Expr",
	"OptExpr:",
	"WhileStmt: While m1 \'(\' Expr \')\' m2 Stmt",
	"m1:",
	"m2:",
	"DoWhileStmt: Do D1 Stmt While \'(\' Expr \')\'",
	"D1:",
	"IfStmt: If \'(\' Expr \')\' F1 Stmt",
	"IfStmt: If \'(\' Expr \')\' F1 Stmt Else F2 Stmt",
	"F1:",
	"F2:",
	"CompoundStmt: \'{\' StmtList \'}\'",
	"StmtList: StmtList Stmt",
	"StmtList:",
	"Expr: Identifier \'=\' Expr",
	"Expr: Rvalue",
	"Rvalue: Rvalue Compare Mag",
	"Rvalue: Mag",
	"Compare: Eq",
	"Compare: \'<\'",
	"Compare: \'>\'",
	"Compare: Lt",
	"Compare: Gt",
	"Compare: Nq",
	"Mag: Mag \'+\' Term",
	"Mag: Mag \'-\' Term",
	"Mag: Term",
	"Term: Term \'*\' Factor",
	"Term: Term \'/\' Factor",
	"Term: Factor",
	"Factor: \'(\' Expr \')\'",
	"Factor: \'-\' Factor",
	"Factor: \'+\' Factor",
	"Factor: Identifier",
	"Factor: Number"
};
#endif

YYCONST yyreduction_t YYNEARFAR YYBASED_CODE YYDCDECL yyreduction[] = {
	{ 0, 1, -1 },
	{ 1, 6, 0 },
	{ 2, 1, -1 },
	{ 2, 3, -1 },
	{ 3, 2, -1 },
	{ 3, 0, -1 },
	{ 4, 3, -1 },
	{ 5, 1, -1 },
	{ 5, 1, -1 },
	{ 6, 3, -1 },
	{ 6, 1, -1 },
	{ 7, 1, -1 },
	{ 7, 1, -1 },
	{ 7, 1, -1 },
	{ 7, 1, -1 },
	{ 7, 2, -1 },
	{ 7, 1, -1 },
	{ 7, 1, -1 },
	{ 7, 1, -1 },
	{ 7, 1, -1 },
	{ 8, 10, 1 },
	{ 9, 0, 2 },
	{ 10, 0, 3 },
	{ 11, 12, 4 },
	{ 12, 0, 5 },
	{ 13, 0, 6 },
	{ 14, 0, 7 },
	{ 15, 1, 8 },
	{ 15, 0, -1 },
	{ 16, 7, 9 },
	{ 17, 0, 10 },
	{ 18, 0, 11 },
	{ 19, 7, 12 },
	{ 20, 0, 13 },
	{ 21, 6, 14 },
	{ 21, 9, 15 },
	{ 22, 0, 16 },
	{ 23, 0, 17 },
	{ 24, 3, -1 },
	{ 25, 2, -1 },
	{ 25, 0, -1 },
	{ 26, 3, 18 },
	{ 26, 1, 19 },
	{ 27, 3, 20 },
	{ 27, 1, 21 },
	{ 28, 1, -1 },
	{ 28, 1, 22 },
	{ 28, 1, 23 },
	{ 28, 1, -1 },
	{ 28, 1, -1 },
	{ 28, 1, -1 },
	{ 29, 3, 24 },
	{ 29, 3, 25 },
	{ 29, 1, 26 },
	{ 30, 3, 27 },
	{ 30, 3, 28 },
	{ 30, 1, 29 },
	{ 31, 3, 30 },
	{ 31, 2, 31 },
	{ 31, 2, 32 },
	{ 31, 1, -1 },
	{ 31, 1, -1 }
};

int YYNEAR YYDCDECL yytokenaction_size = 232;
YYCONST yytokenaction_t YYNEARFAR YYBASED_CODE YYDCDECL yytokenaction[] = {
	{ 111, YYAT_SHIFT, 20 },
	{ 103, YYAT_SHIFT, 17 },
	{ 77, YYAT_SHIFT, 65 },
	{ 108, YYAT_SHIFT, 110 },
	{ 103, YYAT_SHIFT, 18 },
	{ 89, YYAT_SHIFT, 17 },
	{ 103, YYAT_SHIFT, 19 },
	{ 77, YYAT_SHIFT, 66 },
	{ 89, YYAT_SHIFT, 18 },
	{ 87, YYAT_SHIFT, 17 },
	{ 89, YYAT_SHIFT, 19 },
	{ 76, YYAT_SHIFT, 65 },
	{ 87, YYAT_SHIFT, 18 },
	{ 42, YYAT_SHIFT, 65 },
	{ 87, YYAT_SHIFT, 19 },
	{ 106, YYAT_SHIFT, 109 },
	{ 76, YYAT_SHIFT, 66 },
	{ 8, YYAT_SHIFT, 11 },
	{ 42, YYAT_SHIFT, 66 },
	{ 97, YYAT_SHIFT, 102 },
	{ 8, YYAT_SHIFT, 12 },
	{ 41, YYAT_SHIFT, 58 },
	{ 78, YYAT_SHIFT, 56 },
	{ 41, YYAT_SHIFT, 59 },
	{ 78, YYAT_SHIFT, 57 },
	{ 40, YYAT_SHIFT, 56 },
	{ 96, YYAT_SHIFT, 101 },
	{ 40, YYAT_SHIFT, 57 },
	{ 12, YYAT_SHIFT, 1 },
	{ 12, YYAT_SHIFT, 2 },
	{ 6, YYAT_SHIFT, 1 },
	{ 6, YYAT_SHIFT, 2 },
	{ 0, YYAT_SHIFT, 1 },
	{ 0, YYAT_SHIFT, 2 },
	{ 95, YYAT_SHIFT, 100 },
	{ 93, YYAT_SHIFT, 98 },
	{ 83, YYAT_SHIFT, 89 },
	{ 82, YYAT_SHIFT, 88 },
	{ 74, YYAT_SHIFT, 54 },
	{ 73, YYAT_SHIFT, 85 },
	{ 72, YYAT_SHIFT, 84 },
	{ 71, YYAT_SHIFT, 83 },
	{ 69, YYAT_SHIFT, 81 },
	{ 66, YYAT_SHIFT, 44 },
	{ 55, YYAT_SHIFT, 75 },
	{ 54, YYAT_SHIFT, 74 },
	{ 49, YYAT_SHIFT, 70 },
	{ 43, YYAT_SHIFT, 67 },
	{ 30, YYAT_SHIFT, 53 },
	{ 28, YYAT_SHIFT, 52 },
	{ 27, YYAT_SHIFT, 51 },
	{ 24, YYAT_SHIFT, 48 },
	{ 23, YYAT_SHIFT, 47 },
	{ 16, YYAT_SHIFT, 21 },
	{ 11, YYAT_SHIFT, 13 },
	{ 7, YYAT_SHIFT, 10 },
	{ 5, YYAT_SHIFT, 6 },
	{ 4, YYAT_ACCEPT, 0 },
	{ 3, YYAT_SHIFT, 5 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 111, YYAT_SHIFT, 13 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 111, YYAT_SHIFT, 1 },
	{ 111, YYAT_SHIFT, 2 },
	{ 111, YYAT_SHIFT, 24 },
	{ 111, YYAT_SHIFT, 25 },
	{ 111, YYAT_SHIFT, 26 },
	{ 111, YYAT_SHIFT, 27 },
	{ -1, YYAT_ERROR, 0 },
	{ 111, YYAT_SHIFT, 28 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 103, YYAT_SHIFT, 22 },
	{ 103, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 89, YYAT_SHIFT, 22 },
	{ 89, YYAT_SHIFT, 23 },
	{ -1, YYAT_ERROR, 0 },
	{ -1, YYAT_ERROR, 0 },
	{ 87, YYAT_SHIFT, 22 },
	{ 87, YYAT_SHIFT, 23 },
	{ 41, YYAT_SHIFT, 60 },
	{ 41, YYAT_SHIFT, 61 },
	{ 41, YYAT_SHIFT, 62 },
	{ 41, YYAT_SHIFT, 63 }
};

YYCONST yystateaction_t YYNEARFAR YYBASED_CODE YYDCDECL yystateaction[] = {
	{ -227, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 7 },
	{ 0, 0, YYAT_REDUCE, 8 },
	{ -200, 1, YYAT_ERROR, 0 },
	{ 57, 1, YYAT_ERROR, 0 },
	{ 16, 1, YYAT_ERROR, 0 },
	{ -229, 1, YYAT_REDUCE, 5 },
	{ -203, 1, YYAT_ERROR, 0 },
	{ -24, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 2 },
	{ 0, 0, YYAT_REDUCE, 4 },
	{ -69, 1, YYAT_ERROR, 0 },
	{ -231, 1, YYAT_REDUCE, 5 },
	{ 0, 0, YYAT_REDUCE, 40 },
	{ 0, 0, YYAT_REDUCE, 1 },
	{ 0, 0, YYAT_REDUCE, 3 },
	{ -72, 1, YYAT_DEFAULT, 111 },
	{ 0, 0, YYAT_DEFAULT, 89 },
	{ 0, 0, YYAT_DEFAULT, 66 },
	{ 0, 0, YYAT_DEFAULT, 66 },
	{ 0, 0, YYAT_REDUCE, 19 },
	{ 0, 0, YYAT_REDUCE, 38 },
	{ 0, 0, YYAT_REDUCE, 61 },
	{ -9, 1, YYAT_REDUCE, 60 },
	{ 11, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 30 },
	{ 0, 0, YYAT_REDUCE, 33 },
	{ 10, 1, YYAT_ERROR, 0 },
	{ 9, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 11 },
	{ -11, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 12 },
	{ 0, 0, YYAT_REDUCE, 39 },
	{ 0, 0, YYAT_REDUCE, 14 },
	{ 0, 0, YYAT_REDUCE, 13 },
	{ 0, 0, YYAT_REDUCE, 16 },
	{ 0, 0, YYAT_REDUCE, 18 },
	{ 0, 0, YYAT_REDUCE, 17 },
	{ 0, 0, YYAT_DEFAULT, 74 },
	{ 0, 0, YYAT_REDUCE, 56 },
	{ -18, 1, YYAT_REDUCE, 44 },
	{ -39, 1, YYAT_REDUCE, 42 },
	{ -29, 1, YYAT_REDUCE, 53 },
	{ 6, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 60 },
	{ 0, 0, YYAT_REDUCE, 59 },
	{ 0, 0, YYAT_REDUCE, 58 },
	{ 0, 0, YYAT_DEFAULT, 89 },
	{ 0, 0, YYAT_DEFAULT, 89 },
	{ 6, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 111 },
	{ 0, 0, YYAT_DEFAULT, 89 },
	{ 0, 0, YYAT_DEFAULT, 89 },
	{ 0, 0, YYAT_REDUCE, 15 },
	{ 1, 1, YYAT_REDUCE, 10 },
	{ -15, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 66 },
	{ 0, 0, YYAT_DEFAULT, 66 },
	{ 0, 0, YYAT_REDUCE, 46 },
	{ 0, 0, YYAT_REDUCE, 47 },
	{ 0, 0, YYAT_REDUCE, 45 },
	{ 0, 0, YYAT_REDUCE, 48 },
	{ 0, 0, YYAT_REDUCE, 49 },
	{ 0, 0, YYAT_REDUCE, 50 },
	{ 0, 0, YYAT_DEFAULT, 66 },
	{ 0, 0, YYAT_DEFAULT, 66 },
	{ -215, 1, YYAT_DEFAULT, 89 },
	{ 0, 0, YYAT_REDUCE, 57 },
	{ 0, 0, YYAT_REDUCE, 41 },
	{ -17, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 89 },
	{ -221, 1, YYAT_ERROR, 0 },
	{ -1, 1, YYAT_ERROR, 0 },
	{ -20, 1, YYAT_ERROR, 0 },
	{ -220, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 6 },
	{ -31, 1, YYAT_REDUCE, 51 },
	{ -40, 1, YYAT_REDUCE, 52 },
	{ -21, 1, YYAT_REDUCE, 43 },
	{ 0, 0, YYAT_REDUCE, 54 },
	{ 0, 0, YYAT_REDUCE, 55 },
	{ 0, 0, YYAT_REDUCE, 24 },
	{ -4, 1, YYAT_ERROR, 0 },
	{ -4, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 36 },
	{ 0, 0, YYAT_REDUCE, 21 },
	{ 0, 0, YYAT_REDUCE, 9 },
	{ -31, 1, YYAT_REDUCE, 28 },
	{ 0, 0, YYAT_REDUCE, 31 },
	{ -35, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 111 },
	{ 0, 0, YYAT_DEFAULT, 111 },
	{ 0, 0, YYAT_REDUCE, 27 },
	{ -24, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_DEFAULT, 111 },
	{ -7, 1, YYAT_ERROR, 0 },
	{ -239, 1, YYAT_REDUCE, 34 },
	{ -40, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 25 },
	{ 0, 0, YYAT_REDUCE, 29 },
	{ 0, 0, YYAT_REDUCE, 32 },
	{ 0, 0, YYAT_REDUCE, 37 },
	{ 0, 0, YYAT_REDUCE, 22 },
	{ -39, 1, YYAT_REDUCE, 28 },
	{ 0, 0, YYAT_DEFAULT, 111 },
	{ 0, 0, YYAT_DEFAULT, 111 },
	{ -26, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 35 },
	{ -38, 1, YYAT_ERROR, 0 },
	{ 0, 0, YYAT_REDUCE, 26 },
	{ 0, 0, YYAT_REDUCE, 20 },
	{ -59, 1, YYAT_DEFAULT, 89 },
	{ 0, 0, YYAT_REDUCE, 23 }
};

int YYNEAR YYDCDECL yynontermgoto_size = 60;

YYCONST yynontermgoto_t YYNEARFAR YYBASED_CODE YYDCDECL yynontermgoto[] = {
	{ 111, 36 },
	{ 111, 38 },
	{ 103, 106 },
	{ 111, 112 },
	{ 111, 33 },
	{ 0, 4 },
	{ 109, 111 },
	{ 111, 29 },
	{ 89, -1 },
	{ 0, 3 },
	{ 64, 78 },
	{ 64, 42 },
	{ 111, 31 },
	{ 103, 92 },
	{ 103, 41 },
	{ 111, 34 },
	{ 103, 40 },
	{ 111, 35 },
	{ 105, 108 },
	{ 89, 95 },
	{ 111, 37 },
	{ 12, 15 },
	{ 111, 30 },
	{ 12, 7 },
	{ 57, 77 },
	{ 57, 39 },
	{ 6, 8 },
	{ 6, 9 },
	{ 104, 107 },
	{ 102, 105 },
	{ 101, 104 },
	{ 98, 103 },
	{ 94, 99 },
	{ 91, 97 },
	{ 90, 96 },
	{ 88, 94 },
	{ 87, 93 },
	{ 85, 91 },
	{ 84, 90 },
	{ 81, 87 },
	{ 74, 86 },
	{ 70, 82 },
	{ 66, 80 },
	{ 65, 79 },
	{ 56, 76 },
	{ 52, 73 },
	{ 51, 72 },
	{ 50, 71 },
	{ 48, 69 },
	{ 47, 68 },
	{ 41, 64 },
	{ 38, 55 },
	{ 26, 50 },
	{ 25, 49 },
	{ 19, 46 },
	{ 18, 45 },
	{ 17, 43 },
	{ 16, 32 },
	{ 13, 16 },
	{ 11, 14 }
};

YYCONST yystategoto_t YYNEARFAR YYBASED_CODE YYDCDECL yystategoto[] = {
	{ 4, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 24, 12 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 35, -1 },
	{ 18, -1 },
	{ 33, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 50, 111 },
	{ 30, 89 },
	{ 24, -1 },
	{ 23, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 36, -1 },
	{ 32, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 45, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 22, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 23, 89 },
	{ 22, 89 },
	{ 0, -1 },
	{ 40, 111 },
	{ 20, 89 },
	{ 19, 89 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 14, 57 },
	{ -6, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ -19, 57 },
	{ 12, -1 },
	{ 11, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 15, 89 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 34, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 27, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 16, -1 },
	{ 28, -1 },
	{ 0, -1 },
	{ 21, 103 },
	{ 17, -1 },
	{ -7, 103 },
	{ 27, 111 },
	{ 26, 111 },
	{ 0, -1 },
	{ 0, -1 },
	{ 25, 111 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 18, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ 7, -1 },
	{ 19, -1 },
	{ -13, 64 },
	{ 21, 111 },
	{ 11, 111 },
	{ 0, -1 },
	{ 0, -1 },
	{ 0, -1 },
	{ -8, -1 },
	{ 0, -1 },
	{ -4, 89 },
	{ 0, -1 }
};

YYCONST yydestructor_t YYNEARFAR *YYNEAR YYDCDECL yydestructorptr = NULL;

YYCONST yytokendest_t YYNEARFAR *YYNEAR YYDCDECL yytokendestptr = NULL;
int YYNEAR YYDCDECL yytokendest_size = 0;

YYCONST yytokendestbase_t YYNEARFAR *YYNEAR YYDCDECL yytokendestbaseptr = NULL;
int YYNEAR YYDCDECL yytokendestbase_size = 0;
#line 298 ".\\parser.y"


void generate(char op[6],char src1[50],char src2[50],char dest[50])
{
	
	if(!strcmp(op,"")) quad.op[0]='\0';
	else strcpy_s(quad.op,sizeof(quad.op),op); 
	
	if(!strcmp(src1,"")) quad.src1[0]='\0';
	else strcpy_s(quad.src1,sizeof(quad.src1),src1); 
	
	if(!strcmp(src2,"")) quad.src2[0]='\0';
	else strcpy_s(quad.src2,sizeof(quad.src2),src2); 
	
	if(!strcmp(dest,"")) quad.dest[0]='\0';
	else strcpy_s(quad.dest,sizeof(quad.dest),dest); 
		
	tab[quadcourant]=quad;
	quadcourant++;
}
