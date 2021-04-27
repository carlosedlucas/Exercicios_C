#include <stdio.h>

int main()
{
  float num1, num2, num3, resultado;
  printf("Digite o primeiro numero: ");
  scanf("%f", &num1);
  printf("Digite o segundo numero: ");
  scanf("%f", &num2);
  printf("Digite o terceiro numero: ");
  scanf("%f", &num3);
  resultado = (num1 * num1) + (num2 * num2) + (num3 * num3);
  printf("O valor da soma do quadrado dos números %f, %f e %f é: %f \n", num1, num2, num3, resultado);
  return 0;
}