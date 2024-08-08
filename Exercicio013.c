/*
13) Se a taxa de juros composto de uma determinada aplicação vale 1,25% ao mês, 
calcular a taxa equivalente no período de um ano. Se um valor de R$ 1.000,00
for aplicado com esta taxa, qual será o valor final após um ano?
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

    double principal = 1000.0;
    double monthlyRate = 0.0125;
    int periods = 12;
    
    double annualRate = pow(1 + monthlyRate, periods) - 1;
    printf("Taxa anual equivalente: %.2f%%\n", annualRate * 100);

    double finalAmount = principal * pow(1 + monthlyRate, periods);
    printf("Valor final após um ano: R$ %.2f\n", finalAmount);
    
return 0;
}