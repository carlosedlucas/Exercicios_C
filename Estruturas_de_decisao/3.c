#include <stdio.h>
#include <math.h>

int main()
{
  float num1, result;
  printf("Digite um número: ");
  scanf("%f", &num1);

  if (num1 > 0)
  {
    result = sqrt(num1);
    printf("A raiz quadrada do número %f é: %f \n", num1, result);
  }
  else
  {
    result = pow(num1, 2);
    printf("O quadrado do número %f é: %f \n", num1, result);
  }
  return 0;
}