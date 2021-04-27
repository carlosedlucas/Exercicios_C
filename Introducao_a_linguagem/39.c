#include <stdio.h>

int main()
{
  float resultado1, resultado2, resultado3;
  resultado1 = 780000 * .46;
  resultado2 = 780000 * .32;
  resultado3 = 780000 * .22;
  printf("O primeiro ganhador receberá R$%.2f \nO segundo ganhador receberá R$%.2f \nO terceiro ganhador receberá R$%.2f \n", resultado1, resultado2, resultado3);
  return 0;
}