#include <stdio.h>
#include <math.h>
#define M_PI acos(-1.0) // ou #define M_PI 3.14159265358979323846 para o valor de PI

int main()
{
  float altura, raio, volume;
  printf("Digite o valor da altura do cilindro: ");
  scanf("%f", &altura);
  printf("Digite o valor do raio do cilindro: ");
  scanf("%f", &raio);
  volume = M_PI * pow(raio, 2) * altura;
  printf("O valor do volume do cilindro circular é: %f \n", volume);
}
