#include <stdio.h>

int main()
{
  float radianos, graus;
  printf("Digite um valor em radianos: ");
  scanf("%f", &radianos);
  graus = radianos * 180 / 3.14;
  printf("O valor em graus é de: %f \n", graus);
  return 0;
}