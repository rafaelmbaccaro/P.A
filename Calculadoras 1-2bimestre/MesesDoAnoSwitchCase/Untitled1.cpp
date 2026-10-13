#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main ()
{
UINT CPAGE_UTF8 = 65001;UINT CPAGE_DEFAULT = GetConsoleOutputCP();SetConsoleOutputCP(CPAGE_UTF8);SetConsoleCP(CPAGE_UTF8);
int M;
printf("Digite um número para saber qual mês corresponde a ele:\n");
scanf("%d",&M);
switch (M){
	case 1 :
		printf("\nO mês correspondente é Janeiro.");
		break;
	case 2 :
		printf("\nO mês correspondente é Fevereiro.");
		break;
	case 3 :
		printf("\nO mês correspondente é Março.");
		break;
	case 4:
		printf("\nO mês correspondente é Abril.");
		break;
	case 5 :
		printf("\nO mês correspondente é Maio.");
		break;
	case 6 :
		printf("\nO mês correspondente é Junho.");
		break;		
	case 7 :
		printf("\nO mês correspondente é Julho.");
		break;				
	case 8 :
		printf("\nO mês correspondente é Agosto.");
		break;
	case 9 :
		printf("\nO mês correspondente é Setembro.");
		break;		
	case 10 :
		printf("\nO mês correspondente é outubro.");
		break;	
	case 11 :
		printf("\nO mês correspondente é Novembro.");
		break;	
	case 12 :
		printf("\nO mês correspondente é Dezembro.");
		break;	
	default: 
		printf("\nMês %d é invalido.", M);}}