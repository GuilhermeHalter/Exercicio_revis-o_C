/*
9) Escrever um programa que calcule o número fatorial de um número.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int fat, n;
    printf("Insira um valor para o qual deseja calcular seu fatorial: ");
    scanf("%d", &n);

    for(fat = 1; n > 1; n = n - 1){
    fat = fat * n;
    }
    printf("\nFatorial calculado: %d", fat);
    
    
return 0;
}