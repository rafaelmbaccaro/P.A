#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <ctime>   
#include <cstdlib>

int main ()
{
    UINT CPAGE_UTF8 = 65001;UINT CPAGE_DEFAULT = GetConsoleOutputCP();SetConsoleOutputCP(CPAGE_UTF8);SetConsoleCP(CPAGE_UTF8);
    int numeroSorteio;
    char continuar = 's';
    srand(time(NULL));
    printf("Gerador de números aleatórios\n");
    while(continuar == 's' || continuar == 'S'){
        numeroSorteio = rand() % 101; 
        printf("O número sorteado foi: %d\n", numeroSorteio); 
        printf("Digite S para prosseguir: ");
        scanf("%s", &continuar); 
    }
    printf("Encerrando o programa\n"); 
    return 0;
}
