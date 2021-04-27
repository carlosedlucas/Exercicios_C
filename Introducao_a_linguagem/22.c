#include <stdio.h>

int main()
{
  float jardas, metros;
  printf("Digite um valor em jardas: ");
  scanf("%f", &jardas);
  metros = 0.91 * jardas;
  printf("O valor de %f jardas convertido em metros é de: %f \n", jardas, metros);
  return 0;
}