#include <stdio.h>
#include <math.h>

int main()
{
  float num1;
  printf("Digite um número: ");
  scanf("%f", &num1);

  if (num1 > 0)
  {
    printf("O quadrado do número %f é: %f \nO raiz quadrada do número %f é: %f \n", num1, pow(num1, 2), num1, sqrt(num1));
  }
  else
  {

    printf("Número inválido \n");
  }
  return 0;
}