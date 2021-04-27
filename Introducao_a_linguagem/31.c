#include <stdio.h>

int main()
{
  int num, sucessor, antecessor;
  printf("Digite um número: ");
  scanf("%d", &num);
  sucessor = num + 1;
  antecessor = num - 1;
  printf("O valor digitado %d, tem como sucessor o número %d e como antecessor o número %d \n", num, sucessor, antecessor);
  return 0;
}