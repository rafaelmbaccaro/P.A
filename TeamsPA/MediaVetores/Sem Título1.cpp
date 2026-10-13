#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
int main ()
{
UINT CPAGE_UTF8 = 65001;UINT CPAGE_DEFAULT = GetConsoleOutputCP();SetConsoleOutputCP(CPAGE_UTF8);SetConsoleCP(CPAGE_UTF8);
int numeros[10];
int contador, soma;
float media;

printf("--VETOR - SOMA E MEDIA---\n\n");

for(contador=0; contador < 10; contador++){
	printf("\nDigite o %d numero:", contador+1);
	scanf("%d", &numeros[contador]);
}
soma = 0;
for(contador = 0; contador < 10; contador++){
	soma += numeros[contador];
}
media = soma/10;

printf("\n---Resultados---\n\n");
printf("Soma dos numeros: %d\n", soma);
printf("Media dos numeros: %.2f\n", media);
return 0;
}
