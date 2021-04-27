#include <stdio.h>

int main()
{
  float salario, novosalario;
  printf("Digite o sálario do funcionário: ");
  scanf("%f", &salario);
  novosalario = salario + (salario * 0.25);
  printf("O novo salário do funcionário é de: R$%.2f \n", novosalario);
  return 0;
}