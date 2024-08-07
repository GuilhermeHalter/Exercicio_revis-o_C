/*
2) Escrever um programa que declare duas variáveis inteiras e mostre no vídeo o valor das duas em seguida, a maior delas.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    
    printf("Digite o valor da primeira variavel ");
    scanf("%i",&a);
    fflush(stdin);
    
    printf("Digite o valor da segunda variavel ");
    scanf("%i",&b);
    fflush(stdin);
    
    printf("O valor de A eh %i\n", a);
    printf("O valor de B eh %i\n", b);

    if(a > b){
        printf("o maior valor eh %i", a);
    }else{
        printf("o maior valor eh %i", b);
    }

return 0;
}