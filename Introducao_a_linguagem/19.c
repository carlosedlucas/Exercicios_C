#include <stdio.h>

int main()
{
  float litros, metrosCubicos;
  printf("Digite um valor em litros: ");
  scanf("%f", &litros);
  metrosCubicos = litros / 1000;
  printf("O valor de %f l convertido em m³ é de: %f m³ \n", litros, metrosCubicos);
  return 0;
}