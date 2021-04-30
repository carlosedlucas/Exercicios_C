#include <stdio.h>

int main()
{
  float salario, prestacao;
  printf("Digite o salario: ");
  scanf("%f", &salario);
  printf("Digite o valor da prestação do empréstimo: ");
  scanf("%f", &prestacao);
  if (prestacao > (salario * 0.2))
  {
    printf("Emprestimo não concedido \n");
  }
  else
  {
    printf("Emprestimo concedido \n");
  }
  return 0;
}