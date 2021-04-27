#include <stdio.h>

int main()
{
  float diasTrabalhados, resultado, quantidadeLiquida;
  printf("Digite a quantidade de dias trabalhados: ");
  scanf("%f", &diasTrabalhados);
  resultado = 30 * diasTrabalhados;
  quantidadeLiquida = resultado - (resultado * 0.08);
  printf("A quantidade líquida que deverá ser paga é de: R$%.2f \n", quantidadeLiquida);
  return 0;
}