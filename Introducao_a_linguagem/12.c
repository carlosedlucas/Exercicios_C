#include <stdio.h>

int main()
{
  float milhas, km;
  printf("Insira o valor em milhas: ");
  scanf("%f", &milhas);
  km = 1.61 * milhas;
  printf("O valor convertido em km é de: %f \n", km);
}
