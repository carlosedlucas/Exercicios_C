#include <stdio.h>

int main()
{
  int altura;
  char sexo;
  printf("Digite o valor da altura em metros: ");
  scanf("%f", &altura);
  printf("Digite M para sexo masculino ou F para sexo feminino: ");
  scanf("%c", &sexo[1]);

  if (sexo == "M")
  {
    printf("O seu peso ideal é de: %f \n", ((72.7 * altura) - 58));
  }
  else if (sexo == "F")
  {
    printf("O seu peso ideal é de: %f \n", ((62.1 * altura) - 44.7));
  }
  else
  {
    printf("Sexo inválido \n");
  }
  return 0;
}