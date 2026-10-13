#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main()
{
UINT CPAGE_UTF8 = 65001;UINT CPAGE_DEFAULT = GetConsoleOutputCP();SetConsoleOutputCP(CPAGE_UTF8);SetConsoleCP(CPAGE_UTF8);
int m;
printf("Qual trimestre corresponde a seu mês.\nDigite o numero do mês correspondente.\n");
scanf("%d",&m);

if(m>=1 && m<=3){
	printf("Seu mês corresponde ao primeiro trimestre.");}
else if (m>=4 && m<=6){
	printf("Seu mês corresponde ao segundo trimestre");}
else if (m>=7 && m<=9){
printf("Seu mês corresponde ao terçeiro trimestre");}
else if (m>=10 && m<=12){
printf("Seu mês corresponde ao quarto trimestre");}
else{
	printf("Número invalido. Por favor digite um número valido.");
}}