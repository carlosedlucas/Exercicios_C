#include <stdio.h>

int main()
{
  float valor, desconto;
  printf("Digite o valor do produto em reais: ");
  scanf("%f", &valor);
  desconto = valor * .12;
  printf("O valor com desconto de 12% é de: R$%.2f  \n", desconto);
  return 0;
}