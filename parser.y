%{
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

%}
%token Number  Identifier
%token Int Float 
%token For While Do
%token If  Else IfElse
%token Eq Lt Gt Nq
%nonassoc IF 
%nonassoc Else
%%
Function : Type Identifier '(' ArgList ')' CompoundStmt		
	{
		int i=0;
		for(i=0;i<quadcourant;i++)
		{
			fprintf(yyout,"0x%x :        %s ",i,tab[i].op);
			fprintf(yyout,"     %s      ",tab[i].src1);
			fprintf(yyout,"      %s     ",tab[i].src2);
			fprintf(yyout," %s\n",tab[i].dest);
		}
	}
	;
ArgList : Arg 		
	| ArgList ',' Arg 		
	;
Arg : Type Identifier 
	| 
	;
Declaration : Type IdentList ';'		
	; 
Type : Int 		
	| Float 		
	;
IdentList : Identifier ',' IdentList 		
	| Identifier 		
	;
Stmt : ForStmt		
	| WhileStmt
	| DoWhileStmt 		
	|IfElseStmt
	| Expr ';' 		
	| IfStmt 		
	| CompoundStmt 		
	| Declaration
	| ';' 		
	;
	
IfElseStmt: IfElse  '(' Expr ';' IE1 Stmt ';' IE2 Stmt ')'	{
					char str[50];
					
					sprintf_s(str,sizeof(str),"0x%x",$8.quadcourant+1);
					strcpy_s(tab[$5.quadcourant].dest,sizeof(tab[$5.quadcourant].dest),str);	
					
					sprintf_s(str,sizeof(str),"0x%x",quadcourant);
					strcpy_s(tab[$8.quadcourant].dest,sizeof(tab[$8.quadcourant].dest),str);		
					
					
	}
	;
IE1: {
		$$.quadcourant=quadcourant;
		generate("JZ","","","");
	}
	;
IE2: {
		$$.quadcourant=quadcourant;
		generate("JMP","","","");
	}
	;
ForStmt : For  '(' Expr ';' R1 OptExpr ';' R2  OptExpr ')' R3 Stmt  {
										char str[50];
										int i=0;
										for( i = quadcourant; i<quadcourant+$11.quadcourant-$8.quadcourant;i++) {
												tab[i]=$11.tampon[i-quadcourant];
										}
										
										quadcourant += $11.quadcourant-$8.quadcourant-1;
										
										sprintf_s(str,sizeof(str),"0x%x",$5.quadcourant);
										generate("jmp","","",str);
										
										sprintf_s(str,sizeof(str),"0x%x",quadcourant);
										strcpy_s(tab[$8.quadcourant].dest,sizeof(tab[$8.quadcourant].dest),str);
	}		
	;
R1: {
		$$.quadcourant=quadcourant;
	}
	;
R2: {
		$$.quadcourant=quadcourant;
		generate("JZ","","","");	
		save = quadcourant;
	}
	;
R3: {
		int i=0;
		$$.quadcourant=quadcourant;
		for( i = save; i<quadcourant;i++) {
				$$.tampon[i-save] = tab[i];
		}
		quadcourant=save;
	}
	;
OptExpr : Expr 	{strcpy_s($$.val,sizeof($$.val),$1.val);}	
	| 		
	;
WhileStmt : While m1 '(' Expr ')' m2 Stmt 
	{
		char str[50];
		sprintf_s(str,sizeof(str),"0x%x",$2.quadcourant);		
		//generation de Quadruplet
		generate("jmp","","",str);	
		//mise a jour de m2
		sprintf_s(str,sizeof(str),"0x%x",quadcourant);
		strcpy_s(tab[$6.quadcourant].dest,sizeof(tab[$6.quadcourant].dest),str);
	 }
	;
m1: {
			$$.quadcourant = quadcourant;
		}
	;
m2: {
		  //generation de Quadruplet
			$$.quadcourant = quadcourant;
			generate("JZ","","","");			   
		}
	;
	
DoWhileStmt: Do D1 Stmt While '(' Expr ')' {
		char str[50];
		sprintf_s(str,sizeof(str),"0x%x",$2.quadcourant);
		generate("JNZ","","",str);		
	}
	;
	
D1: {
	$$.quadcourant=quadcourant;
}
	;
		
IfStmt : If '(' Expr ')' F1 Stmt  %prec IF	{
																		char str[50];
																		sprintf_s(str,sizeof(str),"0x%x",quadcourant);
																		strcpy_s(tab[$5.quadcourant].dest,sizeof(tab[$5.quadcourant].dest),str);
			}
	|If '(' Expr ')' F1 Stmt  Else F2 Stmt{
																	char str[50];
																	sprintf_s(str,sizeof(str),"0x%x",quadcourant);
																	strcpy_s(tab[$8.quadcourant].dest,sizeof(tab[$8.quadcourant].dest),str);
																	
																	sprintf_s(str,sizeof(str),"0x%x",$8.quadcourant+1);
																	strcpy_s(tab[$5.quadcourant].dest,sizeof(tab[$5.quadcourant].dest),str);
				}
	;
F1: {$$.quadcourant=quadcourant;
		generate("JZ","","","");
		}
	;
F2:	{
				$$.quadcourant=quadcourant;
				generate("jmp","","","");	
		}
	;
CompoundStmt : '{' StmtList '}' 		
	;
StmtList : StmtList Stmt 		
	|  		
	;
Expr : Identifier '=' Expr 		{generate("=",$3.val,"",$1.val);}
	| Rvalue 		{strcpy_s($$.val,sizeof($$.val),$1.val);}
	;
Rvalue : Rvalue Compare Mag 	{
																char str1[50] ;
																char str2[50];
																generate("cmp",$1.val,$3.val,"");																		
																
																sprintf_s(str1,sizeof(str1),"0x%x",quadcourant+3);
																
																if (strcmp($2.val,"<")==0){
																	 generate("jge","","",str1);
																}
																else 	if (strcmp($2.val,"<=")==0){															 
																	 generate("jg","","",str1);
																}
																else 	if (strcmp($2.val,">")==0){																   
																	 generate("jle","","",str1);
																}
																else 	if (strcmp($2.val,">=")==0){																
																	 generate("jl","","",str1);
																}else 	if (strcmp($2.val,"!=")==0){																	
																	 generate("je","","",str1);
																}else 	if (strcmp($2.val,"==")==0){																	
																	 generate("jne","","",str1);
																}
																
																sprintf_s(str2,sizeof(str2),"tmp%d",cpt); 
																++cpt;
																
																generate("=","1","",str2);
																sprintf_s(str1,sizeof(str1),"0x%x",quadcourant+2);
																generate("jmp","","",str1);		
																generate("=","0","",str2);
																
																strcpy_s($$.val,sizeof($$.val),str2);
														  }	
	| Mag 		{strcpy_s($$.val,sizeof($$.val),$1.val);}
	;
Compare :Eq
	| '<' 	{strcpy_s($$.val,sizeof($$.val),"<");}
	| '>' 	{strcpy_s($$.val,sizeof($$.val),">");}
	|Lt
	|Gt
	|Nq
	;
Mag: Mag '+' Term		{
											char str[50];
											sprintf_s(str,sizeof(str),"tmp%d",cpt);
											cpt++;
										   //generation de Quadruplet
											generate("+",$1.val,$3.val,str);	
											strcpy_s($$.val,sizeof($$.val),str);
										}
	|Mag '-'Term		{
											char str[50];
											sprintf_s(str,sizeof(str),"tmp%d",cpt);
											cpt++;
										   //generation de Quadruplet
											generate("-",$1.val,$3.val,str);	
											strcpy_s($$.val,sizeof($$.val),str);
									}
	|Term		{	strcpy_s($$.val,sizeof($$.val),$1.val);}
	;
Term: Term'*'Factor		{
											char str[50];
											sprintf_s(str,sizeof(str),"tmp%d",cpt);
											cpt++;
										   //generation de Quadruplet
											generate("*",$1.val,$3.val,str);	
											strcpy_s($$.val,sizeof($$.val),str);
										}
	|Term '/'Factor		{
											char str[50];
											sprintf_s(str,sizeof(str),"tmp%d",cpt);
											cpt++;
										   //generation de Quadruplet
											generate("/",$1.val,$3.val,str);	
											strcpy_s($$.val,sizeof($$.val),str);
										}
	|Factor		{strcpy_s($$.val,sizeof($$.val),$1.val);}
	;
Factor : '(' Expr ')' 		{strcpy_s($$.val,sizeof($$.val),$2.val);}
	| '-' Factor		{
											char str[50];
											sprintf_s(str,sizeof(str),"tmp%d",cpt);
											cpt++;
										   //generation de Quadruplet
											generate("-","",$2.val,str);	
											strcpy_s($$.val,sizeof($$.val),str);
								} 
	| '+' Factor 	{strcpy_s($$.val,sizeof($$.val),$2.val);}
	| Identifier 		
	| Number		
	;
%%

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