#include <stdio.h>

int main()
{
  float hectares, metrosQuadrados;
  printf("Digite um valor em hectares: ");
  scanf("%f", &hectares);
  metrosQuadrados = hectares * 10000;
  printf("O valor de %f ha convertido em metros quadrados é de: %f m² \n", hectares, metrosQuadrados);
  return 0;
}