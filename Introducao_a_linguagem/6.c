#include <stdio.h>

int main()
{
  float c, f;
  printf("Digite uma temperatura em graus Celsius: ");
  scanf("%f", &c);
  f = c * 1.8 + 32;
  printf("A temperatura convertida em fahrenheit é de: %.3f ºF \n", f);
  return 0;
}