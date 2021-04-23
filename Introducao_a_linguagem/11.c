#include <stdio.h>

int main()
{
  float velocidade1, velocidadeResultado;
  printf("Digite um valor em m/s: ");
  scanf("%f", &velocidade1);
  velocidadeResultado = velocidade1 * 3.6;
  printf("O valor em km/h é de: %f \n", velocidadeResultado);
}