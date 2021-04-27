#include <stdio.h>

int main()
{
  float polegadas, centimetros;
  printf("Digite um valor em polegadas: ");
  scanf("%f", &polegadas);
  centimetros = polegadas * 2.54;
  printf("O valor em centímetros é de: %f \n", centimetros);
  return 0;
}