#include <stdio.h>
#include <conio.h>
#include <windows.h>
int somar(int a, int b){
    return a + b;
}
int multiplicar(int a,int b){
    return a*b;
}
int dividir(int a, int b){
    return a/b;
}
int subtrair(int a, int b){
    return a - b;
}
int vetores(int limite){
    int inicio;
    int vetor[limite];
    for(inicio = 0; inicio<limite; inicio++){
        printf("Digite o %d numero: ", inicio + 1);
        scanf("%d", &vetor[inicio]);
    }
    for(inicio = 0; inicio<limite; inicio++){
        printf("Os numeros são: %d\n", vetor[inicio]);
    }
}
int main()
{
system("cls");
    UINT CPAGE_UTF8 = 65001; UINT CPAGE_DEFAULT = GetConsoleOutputCP();SetConsoleOutputCP(CPAGE_UTF8);SetConsoleCP(CPAGE_UTF8);
    Sleep(1000);
    printf("a soma entre os números são: %d\n", somar(5, 10));
    Sleep(1000);
    printf("A multiplicação entre esses 2 termos são de %d\n", multiplicar(20, 10));
    Sleep(1000);
    printf("A divisão entre os termos são de %d\n", dividir(10,5));
    Sleep(1000);
    printf("A subtração entre os termos são de: %d\n", subtrair(10, 5));
    Sleep(1000);
    vetores(15);
    
    return 0;
}
