#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(){
UINT CPAGE_UTF8 = 65001; UINT CPAGE_DEFAULT = GetConsoleOutputCP();SetConsoleOutputCP(CPAGE_UTF8);SetConsoleCP(CPAGE_UTF8);
int numero1, resultado, tabuada;
char Resposta = 'S';
printf("Calculadora de tabuada do 1 ao 10.\n");
while (Resposta == 's'|| Resposta == 'S'){
	printf("Digite o número que você deseja desobrir a tabuada.\n");
	scanf("%d", &numero1);
	for (tabuada=1;tabuada<=10; tabuada++){
		resultado = tabuada * numero1;
		printf("%d \n", resultado);
}
printf("Você deseja continuar? Se sim digite S ou s para continuar. Caso contrario digite N\n");
scanf("%s", &Resposta);
}
return 0;
}