#include <stdio.h>

int main()
{
  float acres, metrosQuadrados;
  printf("Digite um valor em acres: ");
  scanf("%f", &acres);
  metrosQuadrados = acres * 4048.58;
  printf("O valor de %f ac convertido em metros quadrados é de: %f m² \n", acres, metrosQuadrados);
  return 0;
}