#include <stdio.h>
#include <conio.h>
#include <windows.h>
main()
{
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	SetConsoleCP(CPAGE_UTF8);
	float idade;
	char nome[50];
	printf("Calculadora de escala de nivel em natacao!\nDigite o seu nome aqui:");
	gets(nome);
	printf("Digite sua idade aqui:");
	scanf("%f",&idade);
	if (idade<=5){
		printf(" %s, sua classificação é petiz, pois sua idade é %f", nome, idade);
	}
	else if (idade<=8){
		printf(" %s, sua classificação é mirim, pois sua idade é %f", nome, idade);
	}
	else if (idade<=12){
		printf(" %s, sua classificação é junior, pois sua idade é %f", nome, idade);
	}
	else if (idade<=17){
		printf(" %s, sua classificação é juvenil, pois sua idade é %f", nome, idade);
	}
	else if (idade<=25){
		printf(" %s, sua classificação é adulto, pois sua idade é %f", nome, idade);
	}
	else if (idade<=50){
		printf(" %s, sua classificação é senior, pois sua idade é %f", nome, idade);
		}
		 else {
		printf(" %s, sua classificação é master, pois sua idade é %f", nome, idade);
	}
}