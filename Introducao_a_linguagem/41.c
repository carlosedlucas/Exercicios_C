#include <stdio.h>

int main()
{
  float valorHoraTrabalho, numeroHorastrabalhadas, resultado;
  printf("Digite o valor da hora trabalhada em reais: ");
  scanf("%f", &valorHoraTrabalho);
  printf("Digite o número de horas trabalhadas: ");
  scanf("%f", &numeroHorastrabalhadas);
  resultado = (valorHoraTrabalho * numeroHorastrabalhadas) + ((valorHoraTrabalho * numeroHorastrabalhadas) * .1);
  printf("O valor pago ao funcionário é de: %.2f \n", resultado);
  return 0;
}