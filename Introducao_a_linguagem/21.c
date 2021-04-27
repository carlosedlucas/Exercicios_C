#include <stdio.h>

int main()
{
  float libras, kg;
  printf("Digite um valor em libras: ");
  scanf("%f", &libras);
  kg = libras * .45;
  printf("O valor de %f lb convertido em kilogramas é de: %f \n", libras, kg);
  return 0;
}