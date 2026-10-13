#include <stdio.h>
#include <conio.h>
#include <windows.h>
main()
{
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	SetConsoleCP(CPAGE_UTF8);
	float raio, area;
	printf("Calculadora de área do circulo.\nDigite o valor do raio:");
	scanf("%f", &raio);
	area=3.1415*raio*raio;
	printf("\nA área do circulo é de:%f",area);
}