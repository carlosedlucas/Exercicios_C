#include <stdio.h>

int main()
{
  float num, result;
  printf("Digite um número real: ");
  scanf("%f", &num);
  result = num * num;
  printf("O resultado do quadrado do número é: %f \n", result);
  return 0;
}