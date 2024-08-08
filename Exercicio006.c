/*
6) Considerando o problema anterior, criar um novo programa que incremente 
uma variável com a mesma faixa de valores, e mostre no vídeo somente os números pares ou múltiplos de 6.
*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x;

    for(x=0;x<=100;x++){
        if((x % 2) == 0 || (x%3==0) && (x%6==0) ){
            printf("%i\n",x);
        }
    }
    
return 0;
}