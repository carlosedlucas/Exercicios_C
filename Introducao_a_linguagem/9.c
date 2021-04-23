#include <stdio.h>

int main()
{
  float kelvin, celsius;
  printf("Digite o valor de graus em celsius: ");
  scanf("%f", &celsius);
  kelvin = celsius + 273.15;
  printf("O valor convertido em graus celsius é de: %.0f \n", kelvin);
  return 0;
}