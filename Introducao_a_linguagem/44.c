#include <stdio.h>

int main()
{
  float alturaEscada, alturaDesejada, resultado;
  printf("Digite o valor da altura do degrau da escada: ");
  scanf("%f", &alturaEscada);
  printf("Digite o valor da altura que o usuário deseja alcançar: ");
  scanf("%f", &alturaDesejada);
  resultado = alturaDesejada / alturaEscada;
  printf("A quantidade necessária de degraus para chegar a altura solicitada é de: %.2f \n", resultado);
  return 0;
}