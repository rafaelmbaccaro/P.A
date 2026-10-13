#include <stdio.h>
#include <conio.h>
#include <windows.h>
main()
{UINT CPAGE_UTF8 = 65001;UINT CPAGE_DEFAULT = GetConsoleOutputCP();SetConsoleOutputCP(CPAGE_UTF8);SetConsoleCP(CPAGE_UTF8);
float S, E, I, M;
printf("Calculadora de emréstimos bancários.\nDigite sua idade:");
scanf("%f",&I);
printf("Qual o seu salário:");
scanf("%f",&S);
printf("Digite quanto você deseja pegar de impréstimo:");
scanf("%f",&E);
M=0.30*S;
if ((I>=18 && I<=65) && (M>E) && (S>=2000)){
printf("\nParabens seu impréstimo foi aprovado!");}
if(I<18||I>65){
	printf("Sua idade não permite pegar um impréstimo.\n");}
if (M<E){
	printf("O valor do empréstimo é maior que o permitido para o seu salário.\n");}
if (S<2000){
	printf("Seu salário não permite pegar um impréstimo.");
}
}

