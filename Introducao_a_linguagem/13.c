#include <stdio.h>

int main()
{
  float km, milhas;
  printf("Digite um valor em km: ");
  scanf("%f", &km);
  milhas = km / 1.61;
  printf("O valor em milhas é de: %f \n", milhas);
  return 0;
}