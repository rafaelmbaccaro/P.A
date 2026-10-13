#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main()
{
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	SetConsoleCP(CPAGE_UTF8);
	int contador;
	printf("Programa de estrutura de repetição\n");
	for (contador=1;contador<=1000000000; contador++){
		printf("contador = %d\n",contador);
	}
	}