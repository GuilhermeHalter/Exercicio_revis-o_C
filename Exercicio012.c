/*
12) Escrever um programa que incremente uma variável iniciando em 0 e terminando em 200.
A cada passagem pela variável, se o valor for par, este deverá ser acumulado em uma variável e,
se for impar, acumulado em outra.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int somaPares = 0; 
    int somaImpares = 0; 

    for (int i = 0; i <= 200; i++) {
        if (i % 2 == 0) {
            somaPares += i;
        } else {
            somaImpares += i;
        }
    }

    printf("Soma dos números pares: %d\n", somaPares);
    printf("Soma dos números ímpares: %d\n", somaImpares);
    
return 0;
}