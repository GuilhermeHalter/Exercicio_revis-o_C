/*
3) Uma folha de pagamento simplificada contém os itens: Nome do Funcionário, Salário e Taxa de Desconto de INSS. 
Criar um programa que considere uma taxa de desconto de 8% e mostre no vídeo:

a) Nome do Funcionário.

b) Salário bruto

c) Valor do INSS

d) Salário líquido.*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float salarioBruto, salarioLiquido, valorINSS;
    char nome[100];
    
    valorINSS = 0.08;
    
    printf("Digite o nome do funcionario ");
    scanf("%99s",nome);
    fflush(stdin);
    
    printf("Digite salario bruto do funcionario ");
    scanf("%f",&salarioBruto);
    fflush(stdin);
    
    salarioLiquido = salarioBruto - (salarioBruto * valorINSS);
    
    printf("O nome do funcionario eh de %s\n", nome);
    printf("O salario liquido do funcionario eh de %f", salarioLiquido);
    
return 0;
}