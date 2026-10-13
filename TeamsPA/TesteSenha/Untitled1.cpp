#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main ()
{
UINT CPAGE_UTF8 = 65001;UINT CPAGE_DEFAULT = GetConsoleOutputCP();SetConsoleOutputCP(CPAGE_UTF8);SetConsoleCP(CPAGE_UTF8);
int senha;
printf("Teste de senha\n");
printf("Digite sua senha:");
scanf("%d", &senha);
while (senha != 1234){
	printf("Senha incorreta, tente novamente\n");
	printf("Digite sua senha:");
	scanf("%d", &senha);

}
printf("Senha correta. Acesso liberado!");
return 0;
}
