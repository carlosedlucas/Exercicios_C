#include <stdio.h>

int main()
{
  float lado, area;
  printf("Insira o valor do lado do quadrado: ");
  scanf("%f", &lado);
  area = lado * lado;
  printf("A área do quadrado que tem como lado o valor de %.2f é de: %.2f \n", lado, area);
}