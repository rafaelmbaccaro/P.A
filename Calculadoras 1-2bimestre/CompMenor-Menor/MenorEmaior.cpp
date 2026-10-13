#include <stdio.h>
#include <conio.h>
#include <windows.h>
main()
{
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	SetConsoleCP(CPAGE_UTF8);
	float n, N;
	printf("Calculadora insana de calcular números. \nComo saber se esse número é maior que este? \nConsulte aqui!");
	printf("\n Digite o primeiro valor aqui:");
	scanf("%f", &n);
	printf("\nDigite o valor do segundo número aqui:");
	scanf("%f", &N);
	if (N>n){
	printf("O maior valor é %f, o segundo valor. Já o %f é menor.", N, n);
}

	 else if (N<n)	{
		printf("O maior valor é o primeiro %f. Já o %f segundo valor é menor.", n, N);
	}
	else {
		printf("Os valores são iguais, %f.", n);
	}
}
