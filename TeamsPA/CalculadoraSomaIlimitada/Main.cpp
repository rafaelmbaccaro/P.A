#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main ()
{
	// Configurações de teclado.
UINT CPAGE_UTF8 = 65001;UINT CPAGE_DEFAULT = GetConsoleOutputCP();SetConsoleOutputCP(CPAGE_UTF8);SetConsoleCP(CPAGE_UTF8);

int resultado, resultado2, numero1, Ntentativas;
printf("Calculadora com while.\n");

//captação primeiro número
printf("Você deseja inserir um número na soma? Se sim, digite um número diferente de 0: ");
scanf("%d", &numero1);

Ntentativas=1; resultado = numero1; //declaração de valores para variaveis

while (numero1 != 0){
	resultado2 = resultado;
	printf("Você deseja inserir outro número na soma? Se sim, digite um número diferente de 0: ");
	scanf("%d", &numero1);
	
	if(numero1!=0){
	//teste para ver se o numero deve ser somado
	resultado = resultado2 + numero1;
	Ntentativas++;
	
}
	
}
	printf("O resultado das somas é de %d \n Você inseriu %d números na soma.", resultado, Ntentativas); //resultado
	return 0;
}
