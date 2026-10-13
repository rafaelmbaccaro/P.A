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
	float A, B, C, X, x, D;
	printf("calculadora de equações do segundo grau!\n(Para saber os valor dos coeficientes, segue o gabrito: (Ax²+Bx+c)\nDigite o valor do coeficiente A:");
	scanf("%f",&A);
	printf("\nDigite o valor do coeficiente B:");
	scanf("%f",&B);
	printf("\nDigite o valor do coeficiente C:");
	scanf("%f",&C);
	D=B*B-4*A*C;
	if (D<0){
	 printf("\nSua equação possui uma raiz complexa. Valor de delta é inferior a 0. Tornando então a resolução impossivel.");
	}
	else 
	 {
		X=(-B+sqrt(D))/(2*A);
		x=(-B-sqrt(D))/(2*A);
		printf("\nAs raizes da equação são %f e %f:", x, X);
	}
}