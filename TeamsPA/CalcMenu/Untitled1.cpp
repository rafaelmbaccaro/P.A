#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(){
UINT CPAGE_UTF8 = 65001; UINT CPAGE_DEFAULT = GetConsoleOutputCP();SetConsoleOutputCP(CPAGE_UTF8);SetConsoleCP(CPAGE_UTF8);
float Resultado, Numero1, Numero2;
int Operador;
printf("Calculadora com Menu.\nDigite o primeiro número.\n");
scanf("%f", &Numero1);
printf("digite o operado: \nDigite 1 para somar.\nDigite 2 para subtrair.\nDigite 3 para multiplicar\nDigite 4 para dividir\n");
scanf("%d", &Operador);
printf("Digite o segundo número:");
scanf("%f", &Numero2);

switch (Operador){
	case 1:
		Resultado = Numero1 + Numero2;
		printf("O resultado da Soma é: %f", Resultado);
		break;
		
	case 2:
		Resultado = Numero1 - Numero2;
		printf("O resultado da subtração é: %f", Resultado);
		break;
	case 3:
		Resultado = Numero1 * Numero2;
		printf("O resultado da multiplicação é: %f", Resultado);
		break;
	case 4:
		Resultado = Numero1 / Numero2;
		printf("O resultado da divisão é: %f", Resultado);
		break;
	default:
		printf("Numero nao reconhecido");
		break;
}
}
