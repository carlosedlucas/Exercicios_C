#include <stdio.h>

int main()
{
  float num, result;
  printf("Digite um número real: ");
  scanf("%f", &num);
  result = num / 5;
  printf("A quinta parte do número digitado é: %.2f \n", result);
  return 0;
}