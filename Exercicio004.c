/*
4) Baseando no item anterior, escreva um programa que define uma taxa de desconto de acordo com o seguinte critério:

a) Salário até R$ 1.000,00 – desconto de 8%

b) Salário entre R$ 1.000,01 e 1.500,00 – desconto de 8,5%

c) Salário acima de R$ 1.500,00 – desconto de 9%

d) O programa deve mostrar o salário em consideração e mostrar sua taxa de desconto, bem como o valor do desconto.
*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float salarioBruto, salarioLiquido, valorINSS;
    
    printf("Digite salario bruto do funcionario ");
    scanf("%f",&salarioBruto);
    fflush(stdin);
    
    if(salarioBruto <= 1000.00){
        printf("O valor do salarios Bruto eh de %f\n",salarioBruto);
        printf("O desconto eh de 8 porcento\n");
        salarioLiquido = salarioBruto - (salarioBruto * 0.08);
        printf("O valor do salario Liquido eh de %f\n", salarioLiquido);
    }else if (salarioBruto >= 1000.01 && salarioBruto <= 1500.00 ){
        printf("O valor do salarios Bruto eh de %f\n",salarioBruto);
        printf("O desconto eh de 8,5 por cento\n");
        salarioLiquido = salarioBruto - (salarioBruto * 0.085);
        printf("O valor do salario Liquido eh de %f", salarioLiquido);
    }else if(salarioBruto > 1500.00 ){
        printf("O valor do salarios Bruto eh de %f\n",salarioBruto);
        printf("O desconto eh de 9 por cento\n");
        salarioLiquido = salarioBruto - (salarioBruto * 0.09);
        printf("O valor do salario Liquido eh de %f", salarioLiquido);
    }
    
return 0;
}