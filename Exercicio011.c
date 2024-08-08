/*
11) Crie um programa que incremente uma variável inteira iniciando em 0 e terminando em 50, mostrando os valores múltiplos de 8, o número da ocorrência em cada exibição e quantas vezes o múltiplo ocorreu.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int count = 0; 
    int occurrence = 1; 

    for (int i = 0; i <= 50; i++) {
        if (i % 8 == 0) {
            printf("Ocorrência %d: %d\n", occurrence, i);
            occurrence++;
            count++;
        }
    }

    printf("Total de múltiplos de 8 encontrados: %d\n", count);
    
return 0;
}