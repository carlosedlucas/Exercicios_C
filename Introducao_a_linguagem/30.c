#include <stdio.h>

int main()
{
  float reais, cotacaodolar, dolar;
  printf("Digite um valor em reais: ");
  scanf("%f", &reais);
  printf("Digite a cotação do dólar: ");
  scanf("%f", &cotacaodolar);
  dolar = reais * cotacaodolar;
  printf("O valor de R$%.2f convertido em dólar é de: %.2f reais\n", reais, dolar);
  return 0;
}