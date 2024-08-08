/*
8) Escrever um programa que mostre no vídeo a tabuada do 2, do 3 e do 5.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
   int tabuada2,tabuada3,tabuada5, cont=0;
   tabuada2 = 2;
   tabuada3 = 3;
   tabuada5 = 5;


    for (cont=0; cont<=10 ; cont++){
        printf("%d x %d = %d \n",tabuada2,cont,tabuada2*cont);
    }
       
       printf("\n");
    
    for (cont=0; cont<=10 ; cont++){
        printf("%d x %d = %d \n",tabuada3,cont,tabuada3*cont);
    }
    
    printf("\n");
    
    for (cont=0; cont<=10 ; cont++){
        printf("%d x %d = %d \n",tabuada5,cont,tabuada5*cont);
    }
    
    
return 0;
}