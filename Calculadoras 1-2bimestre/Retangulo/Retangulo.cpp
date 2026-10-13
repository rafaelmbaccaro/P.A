#include <stdio.h>
#include <conio.h>
#include <windows.h>
main()
{
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	SetConsoleCP(CPAGE_UTF8);
	float base, altura, area;
	printf("\nPrograma calculador de área do Retângulo\nDigite o valor da base: ");
	scanf("%f", &base);
	printf("\nDigite o valor da Altura:");
	scanf("%f", &altura);
	area=base*altura;
	printf("\n A área do retângulo é= %f", area);
}