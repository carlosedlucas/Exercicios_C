#include <stdio.h>

int main()
{
  float metrosQuadrados, hectares;
  printf("Digite um valor em metros quadrados: ");
  scanf("%f", &metrosQuadrados);
  hectares = metrosQuadrados * 0.0001;
  printf("O valor de %f m² convertido em hectares é de: %f ha \n", metrosQuadrados, hectares);
  return 0;
}