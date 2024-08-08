/*
14) Escreve um programa que contenha duas strings.
O programa devera mostrar no vídeo a quantidade de caracteres de cada uma.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

        char str1[100];
    char str2[100];
    int length1 = 0;
    int length2 = 0;

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    while (str1[length1] != '\0') {
        length1++;
    }

    while (str2[length2] != '\0') {
        length2++;
    }

    printf("Quantidade de caracteres da primeira string: %d\n", length1);
    printf("Quantidade de caracteres da segunda string: %d\n", length2);
    
return 0;
}