%{
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "parser.h"
extern char yylval[100];

%}
%%
[ \t\n]+ ;
"int"	return Int;
"float"	return Float;
"for"	return For;
"while"	 return While; 
"if"	return If;
"else"	return Else;
"do"  return Do;
"ifelse" return IfElse;

"==" {	strcpy_s(yylval,sizeof(yylval),yytext); return Eq;}
"<=" {	strcpy_s(yylval,sizeof(yylval),yytext); return Lt;}
">="  {	strcpy_s(yylval,sizeof(yylval),yytext); return Gt;}
"!="  {	strcpy_s(yylval,sizeof(yylval),yytext); return Nq;}


([0-9]+|([0-9]*\.[0-9]+)([eE][-+]?[0-9]+)?)	
{
	strcpy_s(yylval,sizeof(yylval),yytext);
	return Number;
}
[a-zA-Z_]([a-zA-Z_]|[0-9_])*	
{
		strcpy_s(yylval,sizeof(yylval),yytext);
		return Identifier;
}
.	return yytext[0];
%%
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
