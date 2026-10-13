#include <stdio.h>
#include <conio.h>
#include <windows.h>

main(){
UINT CPAGE_UTF8 = 65001; UINT CPAGE_DEFAULT = GetConsoleOutputCP();SetConsoleOutputCP(CPAGE_UTF8);SetConsoleCP(CPAGE_UTF8);
    float s1, s2, s3, m, f, b, total, A;
    printf("Digite o salario de Janeiro: ");
    scanf("%f", &s1);

    printf("Digite o salario de Fevereiro: ");
    scanf("%f", &s2);

    printf("Digite o salario de Marco: ");
    scanf("%f", &s3);

    printf("Digite a quantidade de faltas: ");
    scanf("%f", &f);

    m = (s1 + s2 + s3) / 3;
     if (f==0){
     	b=2.1;
	 }
    else if (f<6){
    	b=1.75;
	}
    else if (f<11){
    	b=1.5;
	}	
	else {
		b=1;
	}
	total=m*b;
	A=total-m;
	printf("O salario total é de: %f\n", total);
	printf("O valor do acressimo foi de %f", A);
}