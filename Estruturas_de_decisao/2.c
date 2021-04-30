#include <stdio.h>
#include <math.h>

int main()
{
  float num, result;
  printf("Digite um número maior ou menor que zero: ");
  scanf("%f", &num);
  if (num > 0)
  {
    result = sqrt(num);
    printf("A raiz quadrada do número %f é: %f \n", num, result);
  }
  else
  {
    printf("O número é inválido \n");
  }
  return 0;
}