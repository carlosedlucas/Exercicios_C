#include <stdio.h>

int main()
{
  float num1, num2;
  printf("Digite um número: ");
  scanf("%f", &num1);
  printf("Digite um outro número: ");
  scanf("%f", &num2);

  if (num1 > num2)
  {
    printf("O número %f é maior que o número %f e a diferença entre eles é de: %f \n", num1, num2, (num1 - num2));
  }
  else if (num1 < num2)
  {
    printf("O número %f é maior que o número %f e a diferença entre eles é de: %f \n", num2, num1, (num2 - num1));
  }
  else
  {
    printf("O número %f é igual ao número %f e a diferença entre eles é de zero. \n", num1, num2);
  }
  return 0;
}