#include <stdio.h>
#include <conio.h>
#include <windows.h>
main()
{
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	SetConsoleCP(CPAGE_UTF8);
	float H, M, S;
	printf("Digite quantas horas deseja converter para minutos e segundos:");
	scanf("%f", &H);
	S=H*3600;
	printf("\n %f horas é equivalente a %f segundos", H, S);
	M=H*60;
	printf("\nJá %f em minutos é igual a %f", H, M);
}
	