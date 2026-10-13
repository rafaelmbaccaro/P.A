#include <stdio.h>
#include <conio.h>
#include <windows.h>
main()
{
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	SetConsoleCP(CPAGE_UTF8);
	float m1, m2, m3, m4, media;
	printf("Calculadora de médias.\n Digite a primeira média:");
    scanf("%f",&m1);
    printf("\nDigite a segunda média:");
    scanf("%f",&m2);
    printf("\nDigite a terceira média:");
    scanf("%f",&m3);
    printf("\nDigite a quarta média:");
    scanf("%f",&m4);
    media=(m1+m2+m3+m4)/4;
    printf("A nédia final é:%f",media);
}