#include <stdio.h>
#include <conio.h>
#include <windows.h>

main(){
UINT CPAGE_UTF8 = 65001; UINT CPAGE_DEFAULT = GetConsoleOutputCP();SetConsoleOutputCP(CPAGE_UTF8);SetConsoleCP(CPAGE_UTF8);
    float h, sexo, peso;

    printf("Digite a altura: ");
    scanf("%f", &h);

    printf("Digite o sexo (1-Masc, 2-Fem): ");
    scanf("%f", &sexo);

    if (sexo==1) {
        peso = (72.7 * h) - 58;
    }
    else if (sexo==2){
        peso = (62.1 * h) - 44.7;
    }
    printf("Peso ideal para a sua altura e sexo é de: %f", peso);
}