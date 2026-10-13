#include <stdio.h>
#include <conio.h>
#include <windows.h>
main(){
UINT CPAGE_UTF8 = 65001; UINT CPAGE_DEFAULT = GetConsoleOutputCP();SetConsoleOutputCP(CPAGE_UTF8);SetConsoleCP(CPAGE_UTF8);
float i;
printf("Como saber se você pode dirigir de maneira legal\nDigite sua idade:");
scanf("%f",&i);
if (i>=18){
	printf("você pode dirigir de maneira legal. A idade minima é de 18 anos");
}
else {
	printf("você ainda é mnenor de idade. Não pode dirigir legalmente.");
}}