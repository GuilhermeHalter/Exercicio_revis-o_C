/*
1) Um programa que contém duas variáveis inteiras e cada uma destas variáveis deve ter um valor atribuído. Escrever um programa que mostre os seguintes resultados:

a) A soma das duas variáveis.

b) A diferença entre as duas variáveis.

c) O dobro da primeira mais o triplo da segunda variável.

d) A multiplicação das duas variáveis.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, exA, exB, exC, exD;
    a = 5;
    b = 3; 
    
    exA = a + b;
    exB = a - b;
    exC = (a * 2) + (b * 3);
    exD = a * b;
    
    printf("Resposta exercicio A) %i\n", exA);
    printf("Resposta exercicio B) %i\n", exB);
    printf("Resposta exercicio C) %i\n", exC);
    printf("Resposta exercicio D) %i\n", exD);

return 0;
}