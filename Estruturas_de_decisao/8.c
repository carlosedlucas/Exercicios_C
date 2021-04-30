#include <stdio.h>

int main()
{
  float nota1, nota2;
  printf("Digite a primeira nota com o valor entre 0 e 10: ");
  scanf("%f", &nota1);
  printf("Digite a segunda nota com o valor entre 0 e 10: ");
  scanf("%f", &nota2);

  if ((nota1 < 0 && nota1 > 10) || (nota2 < 0 && nota2 > 10))
  {
    printf("Nota inválida \n");
  }
  else
  {
    printf("A média das notas %f e %f é de: %f \n", nota1, nota2, ((nota1 + nota2) / 2));
  }
  return 0;
}