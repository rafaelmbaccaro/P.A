#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main()
{
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	SetConsoleCP(CPAGE_UTF8);
	float km1, km2, M;
	printf("Programa com estrutura de repetição.\nConversão de kilometros para milhas.\nDigite o valor do kilometro inicial:");
	scanf("%f", &km1);
	printf("Digite o valor do segundo kilometro: ");
	scanf("%f",&km2);
	for (km1=1;km1<=km2; km1++){
		M=km1*0.621371;
		printf("%f km = %0.2f Milhas\n",km1,M);
	}}