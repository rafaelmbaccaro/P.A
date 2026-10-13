#include <stdio.h>
#include <conio.h>
#include <windows.h>
main(){
UINT CPAGE_UTF8 = 65001; UINT CPAGE_DEFAULT = GetConsoleOutputCP();SetConsoleOutputCP(CPAGE_UTF8);SetConsoleCP(CPAGE_UTF8);
int M; 
printf("calculadora de meses do ano\nDigite um numero para descobrir qual mes ele corresponde:");
scanf("%d",&M);
if (M==1){
	printf("O mes correpondente a %d é janeiro", M);
}
 else if (M==2){
	printf("O mes correpondente a %d é fevereiro", M);
}
 else if (M==3){
	printf("O mes correpondente a %d é março", M);
}
 else if (M==4){
	printf("O mes correpondente a %d é abril", M);
}
 else if (M==5){
	printf("O mes correpondente a %d é maio", M);
}
 else if (M==6){
	printf("O mes correpondente a %d é junho", M);
}
 else if (M==7){
	printf("O mes correpondente a %d é julho", M);
}
 else if (M==8){
	printf("O mes correpondente a %d é agosto", M);
}
 else if (M==9){
	printf("O mes correpondente a %d é setembro", M);
}
 else if (M==10){
	printf("O mes correpondente a %d é outubro", M);
}
 else if (M==11){
	printf("O mes correpondente a %d é novembro", M);
}
 else if (M==12){
	printf("O mes correpondente a %d é dezembro", M);
}
  else {
	printf("Mês invalido");
}}