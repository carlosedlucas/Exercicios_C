#include <stdio.h>

int main()
{
  float c, f;
  printf("Digite um valor em graus fahrenheit: ");
  scanf("%f", &f);
  c = (f - 32) / 1.8;
  printf("O valor convertido em graus celsius é de: %f \n", c);
  return 0;
}