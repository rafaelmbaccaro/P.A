#include <stdio.h>
#include <conio.h>
#include <windows.h>
main()
{
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	SetConsoleCP(CPAGE_UTF8);
	int I;
	printf("Classe eleitoral");
	printf("\nDigite sua idade: ");
	scanf("%d",&I);
	if (I<=15){
		printf("Você não pode votar, é menor de 16");
	}
	else if (I<=17){
		printf("seu voto é facultativo");
	}
	else if (I<=65){
		printf("Você é um eleitor obrigatório, deve votar");
	}
	else {
		printf("Você é um eleitor facultativo");}}