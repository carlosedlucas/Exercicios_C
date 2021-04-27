#include <stdio.h>

int main()
{
  float salarioBase, salarioAReceber;
  printf("Digite o salário-base de um funcionário: ");
  scanf("%f", &salarioBase);
  salarioAReceber = salarioBase + (salarioBase * 0.05) - (salarioBase * 0.07);
  printf("O salário a receber é de: %.2f \n", salarioAReceber);
  return 0;
}