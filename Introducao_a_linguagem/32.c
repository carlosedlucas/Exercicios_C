#include <stdio.h>

int main()
{
  int num, resultado;
  printf("Digite um número: ");
  scanf("%d", &num);
  resultado = ((3 * num) + 1) + ((num * 2) - 1);
  printf("A soma do sucessor do triplo com o antecessor do dobro de %d é: %d \n", num, resultado);
  return 0;
}