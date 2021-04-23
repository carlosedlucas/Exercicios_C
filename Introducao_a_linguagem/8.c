#include <stdio.h>

int main()
{
  float kelvin, celsius;
  printf("Digite o valor de graus em kelvin: ");
  scanf("%f", &kelvin);
  celsius = kelvin - 273.15;
  printf("O valor convertido em graus celsius é de: %0.2f \n", celsius);
  return 0;
}