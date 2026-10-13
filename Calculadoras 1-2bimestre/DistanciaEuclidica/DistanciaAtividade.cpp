#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
//Raiz quadrada = "sqrt"
main(){
UINT CPAGE_UTF8 = 65001; UINT CPAGE_DEFAULT = GetConsoleOutputCP();SetConsoleOutputCP(CPAGE_UTF8);SetConsoleCP(CPAGE_UTF8);
float D, x1, x2, y1, y2;
printf("Digite x1:");
scanf("%f", &x1);
printf("Digite y1:");
scanf("%f", &y1);
printf("Digite x2:");
scanf("%f", &x2); 
printf("Digite y2:");
scanf("%f", &y2);
D =sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
printf("A distancia e: %f", D);
}