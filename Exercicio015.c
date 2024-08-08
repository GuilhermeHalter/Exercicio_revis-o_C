/*
15) Um programa declara três strings. Escrever um código que mostre de forma ordenada a quantidade de caracteres de cada uma.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

void sortLengths(int lengths[], char *names[], int n);

int main(void)
{

    char str1[MAX_LENGTH], str2[MAX_LENGTH], str3[MAX_LENGTH];
    int lengths[3];
    char *names[3] = {str1, str2, str3};

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    printf("Digite a terceira string: ");
    scanf("%s", str3);

    lengths[0] = strlen(str1);
    lengths[1] = strlen(str2);
    lengths[2] = strlen(str3);

    sortLengths(lengths, names, 3);

    printf("Quantidades de caracteres em ordem crescente:\n");
    for (int i = 0; i < 3; i++) {
        printf("String %d: %d caracteres\n", i + 1, lengths[i]);
    }

    return 0;
}

void sortLengths(int lengths[], char *names[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (lengths[i] > lengths[j]) {
                int tempLength = lengths[i];
                lengths[i] = lengths[j];
                lengths[j] = tempLength;

                char *tempName = names[i];
                names[i] = names[j];
                names[j] = tempName;
            }
        }
    }
}