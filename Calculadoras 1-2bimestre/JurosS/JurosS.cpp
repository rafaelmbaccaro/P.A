#include <stdio.h>
#include <conio.h>
#include <windows.h>
main()
{
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	SetConsoleCP(CPAGE_UTF8);
    float J, C, I, T;
    printf("Calculadora de Juros Simples\nObs:(substitua a virgula por .)Escreva qual é o o valor do montante inicial:");
    scanf("%f",&C);
    printf("\ndigite o vlaor da taxa:");
    scanf("%f",&T);
    printf("\nDigite o tempo correspondente a Taxa:");
    scanf("%f",&I);
    J=C*I*T;
    printf("\nO valor do juros final é de:%f",J);
}
