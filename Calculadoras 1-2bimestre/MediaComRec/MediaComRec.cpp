#include <stdio.h>
#include <conio.h>
#include <windows.h>

main()
{

UINT CPAGE_UTF8 = 65001;
UINT CPAGE_DEFAULT = GetConsoleOutputCP();
SetConsoleOutputCP(CPAGE_UTF8);
SetConsoleCP(CPAGE_UTF8);
float m1, m2, mf;
printf("Calculadora de aprovação escolar, qual seu estado?\nDigite o valor da sua primeira média:");
scanf("%f", &m1);
printf("\nDigite a outra média:");
scanf("%f", &m2);
mf=(m1+m2)/2;
if (mf>=7){
	printf("\nParabéns, você passou. Sua média foi de %f", mf);
}
 else if (mf<5) {
 	printf("\nVocê reprovou. Sua média é de %f ", mf);
 }
 else {
 	printf("Você está de recuperação. Sua média foi de %f",mf);
 }
}