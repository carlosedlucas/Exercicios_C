#include <stdio.h>

int main()
{
  float metrosCubicos, litros;
  printf("Digite um valor em metros cúbicos: ");
  scanf("%f", &metrosCubicos);
  litros = 1000 * metrosCubicos;
  printf("O valor convertido de %f m³ em litros é de: %f l \n", metrosCubicos, litros);
  return 0;
}