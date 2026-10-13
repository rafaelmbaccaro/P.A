#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
main()
{
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	SetConsoleCP(CPAGE_UTF8);
	float Di, Df, Vm, Ti, Tf;
	printf("Calculadora de velocidade média.\nDigite o valor do tempo inicial:");
	scanf("%f", &Ti);
	printf("\nDigite o valor da tempo final:");
	scanf("%f",&Tf);
	printf("\nDigite o valor do espaço inicial:");
	scanf("%f",&Di);
	printf("\nDigite o valor do espaço final:");
	scanf("%f",&Df);
	Vm=(Df-Di)/(Tf-Ti);
	printf("\nA velocidade média é de %f",Vm);
}