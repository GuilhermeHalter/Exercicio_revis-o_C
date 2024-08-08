/*
7) Crie um programa que declare uma base e um expoente e, em seguida, mostre o valor da potência.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int base, expoente, resultado;
    
    printf("digite a base da conta");
    scanf("%i",&base);
    
    printf("digite o expoente da conta");
    scanf("%i",&expoente);
    
    resultado = pow(base, expoente);
    
    printf("%i", resultado);
 
    
return 0;
}