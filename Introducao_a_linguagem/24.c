#include <stdio.h>

int main()
{
  float metrosQuadrados, acres;
  printf("Digite um valor em metros quadrados: ");
  scanf("%f", &metrosQuadrados);
  acres = .000247 * metrosQuadrados;
  printf("O valor de %f m² convertido em acres é de: %f ac \n", metrosQuadrados, acres);
  return 0;
}