#include <stdio.h>

int main()
{
  float velocidade1, velocidadeResultado;
  printf("Digite um valor em km/: ");
  scanf("%f", &velocidade1);
  velocidadeResultado = velocidade1 / 3.6;
  printf("O valor em m/s é de: %f \n", velocidadeResultado);
  return 0;
}