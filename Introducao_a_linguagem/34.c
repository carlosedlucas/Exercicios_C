#include <stdio.h>

int main()
{
  float raio, area;
  printf("Digite o valor do raio do círculo: ");
  scanf("%f", &raio);
  area = raio * raio * 3.141592;
  printf("Com o valor de raio como %f, o valor da área do círculo é de: %f \n", raio, area);
  return 0;
}