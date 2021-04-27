#include <stdio.h>

int main()
{
  float graus, radianos;
  printf("Digite um ângulo em graus: ");
  scanf("%f", &graus);
  radianos = graus * (3.14) / 180;
  printf("O valor convertido em radianos é de: %f \n", radianos);
  return 0;
}
