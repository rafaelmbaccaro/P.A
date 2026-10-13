#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(){
UINT CPAGE_UTF8 = 65001; UINT CPAGE_DEFAULT = GetConsoleOutputCP();SetConsoleOutputCP(CPAGE_UTF8);SetConsoleCP(CPAGE_UTF8);
int Carterinha, idade;
printf("CineTech, calculadora de preços.");
printf("\nDigite a sua idade:");
scanf("%d", &idade);
printf("Você possui carterinha de estudante? Digite 0 para não. E 1 para sim: ");
scanf("%d", &Carterinha);
if (idade<12 || idade>60){
	 printf("você tem entrada gratis.");
}
else if (idade>12 && idade<60 && Carterinha==0){
	printf("Você deve pagar entrada completa, 40 reais.");
}
else {
	printf("você deve pagar meia entrada, 20 reais.");
}}