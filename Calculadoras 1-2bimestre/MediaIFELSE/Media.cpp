#include <stdio.h>
#include <conio.h>
#include <windows.h>
main()
{
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	SetConsoleCP(CPAGE_UTF8);
	float M1, M2, mf;
	printf("Calculadora para ver se você passou na escolinha.\nDigite o valor da primeira média:");
	scanf("%f",&M1);
	printf("\nDigite a outra média:");
	scanf("%f",&M2);
	mf=(M2+M1)/2;
	if (mf<6)
	 {
	printf("Sua média é %f, você reprovou.", mf);
	}
	else {
	printf("Parabéns. Você passou, sua média final foi %f", mf);
	}
}