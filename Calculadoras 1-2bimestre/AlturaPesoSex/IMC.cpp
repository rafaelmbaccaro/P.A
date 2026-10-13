#include <stdio.h>
#include <conio.h>
#include <windows.h>
main()
{
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	SetConsoleCP(CPAGE_UTF8);
	float P, IMC, alt;
	char Sex[1];
	printf("Calculadora de IMC\nDigite a sua altura:");
	scanf("%f", &alt);
	printf("Digite o seu peso:");
	scanf("%f", &P);
	printf("Digite o seu sexo M para masculino e F para feminino:");
	scanf("%s", Sex);
	IMC=P/(alt*alt);
	if (strcmp(Sex,"F")==0||strcmp(Sex,"f")==0){
		if (IMC<19.1){
			printf("O imc dele é igual a %f, ele indica que está abaixo do peso indicado.", IMC);
		}
		else if (IMC<25.8){
			printf("O imc é de %f, ele indica estar no peso normal esperado.",IMC);
		}
			else if (IMC<27.3){
			printf("O imc é de %f, ele indica estar acima do peso esperado.",IMC);
		}
			else if (IMC<32.3){
			printf("O imc é de %f, ele indica estar acima do peso esperado.",IMC);
		}
		   	else{
			printf("O imc é de %f, ele indica estar em obesidade.",IMC);
		}
	}
	    
	   	if (strcmp(Sex,"m")==0||strcmp(Sex,"M")==0){
			printf("O imc dele é igual a %f, ele indica que está abaixo do peso indicado.", IMC);
		}
			else if (IMC<26.4){
			printf("O imc é de %f, ele indica estar no peso normal esperado.",IMC);
		}
			else if (IMC<31.1){
			printf("O imc é de %f, ele indica estar acima do peso esperado.",IMC);
		}
			else{
			printf("O imc é de %f, ele indica estar em obesidade.",IMC);
		}
	}

	