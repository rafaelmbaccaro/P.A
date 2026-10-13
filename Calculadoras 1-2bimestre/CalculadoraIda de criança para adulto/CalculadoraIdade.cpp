#include <stdio.h>
#include <conio.h>
#include <windows.h>
main()
{
	UINT CPAGE_UTF8 = 65001;
	UINT CPAGE_DEFAULT = GetConsoleOutputCP();
	SetConsoleOutputCP(CPAGE_UTF8);
	SetConsoleCP(CPAGE_UTF8);
	float i;
	printf("Calculadora de idade.\n Digite sua idade:");
	scanf("%f", &i);
	if (i<14){
	printf("Sua idade é de %f, você é criança", i);
}
else if (i<18){
	printf("você tem %f e é um adolecente", i);
}
else if(i<61){
	printf("você tem %f e é um adulto", i);
}
else {
	printf("você tem %f e é um idoso", i);
}
}