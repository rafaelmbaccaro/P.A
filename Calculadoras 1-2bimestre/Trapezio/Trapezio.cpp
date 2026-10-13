#include <stdio.h>
#include <conio.h>
#include <windows.h>
main()
{
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	SetConsoleCP(CPAGE_UTF8);
    float baseI, baseII, altura, area;
    printf("Calculo de area do trapézio\nEscreva o valor da base1:");
    scanf("%f",&baseI);
    printf("\ndigite o valor da outra base:");
    scanf("%f",&baseII);
    printf("\nDigite o vlaor da altura:");
    scanf("%f",&altura);
    area=(baseI+baseII)*altura/2;
    printf("\nO valor da área é de: %f",area);
	   }