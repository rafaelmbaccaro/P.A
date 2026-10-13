#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main ()
{
UINT CPAGE_UTF8 = 65001;UINT CPAGE_DEFAULT = GetConsoleOutputCP();SetConsoleOutputCP(CPAGE_UTF8);SetConsoleCP(CPAGE_UTF8);
int OP;
printf("Digite um valor de 1 a 4 para ganhar um premio.");
scanf("%d",&OP);
switch ( OP )
{	case 1 :
		
		printf("01 Bola de futebol\n");
		break;
	
	case 2 :
		printf("01 bola de vôlei\n");
		break;
		
	case 3 : 
		printf("01 Raquete de tênis\n");
		break;
	case 4 :
		printf("01 Kit de tênis de mesa\n");
		break;
	default : 
		printf ("O valor digitado é invalido");
}}