#include <stdio.h>

int main()
{
  int num1, num2, num3, totalNum;
  printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  printf("Digite o primeiro número: ");
  scanf("%d", &num2);
  printf("Digite o primeiro número: ");
  scanf("%d", &num3);
  totalNum = num1 + num2 + num3;
  printf("A soma dos números digitados é : %d \n", totalNum);
  return 0;
}