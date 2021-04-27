#include <stdio.h>

int main()
{
  float metros, jardas;
  printf("Digite um valor em metros: ");
  scanf("%f", &metros);
  jardas = metros / 0.91;
  printf("O valor de %f m convertido em jardas é de: %f yd \n", metros, jardas);
  return 0;
}