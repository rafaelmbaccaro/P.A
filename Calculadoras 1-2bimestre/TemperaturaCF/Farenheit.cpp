#include <stdio.h>
#include <conio.h>
#include <windows.h>
main()
{
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	SetConsoleCP(CPAGE_UTF8);
	float F, C;
	printf("Calculadora de Celsius para Farenheits.\n Digite o valor da temperatura em Celsius:");
	scanf("%f",&C);
	F=C*1.8+32;
	printf("\nO valor em Farenheits é de %f", F);
}