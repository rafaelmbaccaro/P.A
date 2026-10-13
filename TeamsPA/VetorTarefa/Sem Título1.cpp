#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main ()
{
UINT CPAGE_UTF8 = 65001;UINT CPAGE_DEFAULT = GetConsoleOutputCP();SetConsoleOutputCP(CPAGE_UTF8);SetConsoleCP(CPAGE_UTF8);
int contador;
int numeros[5];
printf("---Vetor de Numeros---");
for(contador = 0; contador < 5; contador++){
	printf("Digite %d numero: ", contador+1);
	scanf("%d", &numeros[contador]);
}
printf("Exibindo os numeros\n\n");
for(contador = 0; contador < 5; contador++){
	printf("O seu %d número é %d \n", contador+1, numeros[contador]);
}
return 0;
}
