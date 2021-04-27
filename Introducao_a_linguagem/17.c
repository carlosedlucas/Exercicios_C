#include <stdio.h>

int main()
{
  float centimetro, polegada;
  printf("Digite um valor em centímetros: ");
  scanf("%f", &centimetro);
  polegada = centimetro / 2.54;
  printf("O valor em polegadas é de: %f \n", polegada);
  return 0;
}