#include <stdio.h>

int main()
{
  float kg, libras;
  printf("Digite um valor em kg: ");
  scanf("%f", &kg);
  libras = kg / .45;
  printf("O valor de %f kg convertido em libras é de: %f lb \n", kg, libras);
}