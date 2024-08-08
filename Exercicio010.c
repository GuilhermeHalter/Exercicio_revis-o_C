/*
10) Elaborar um programa que mostre os 10 primeiros termos da série de Fibonacci. Esta série é definida pela seguinte regra: A partir do terceiro elemento, cada termo é a soma dos dois anteriores.

1 2 3 5 8 13 ...
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

    int a, b, auxiliar, i;

    a = 0;
    b = 1;

    printf("\nSérie de Fibonacci:\n\n");

    for(i = 0; i < 10; i++) {

        auxiliar = a + b;
        a = b;
        b = auxiliar;

        printf("%d\n", auxiliar);
    }
    
return 0;
}