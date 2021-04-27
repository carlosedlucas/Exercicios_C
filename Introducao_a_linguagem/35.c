#include <stdio.h>
#include <math.h>

int main()
{
  float hipotenusa, catetoA, catetoB;
  printf("Digite o valor do cateto a: ");
  scanf("%f", &catetoA);
  printf("Digite o valor do cateto b: ");
  scanf("%f", &catetoB);
  hipotenusa = sqrt(pow(catetoA, 2) + pow(catetoB, 2));
  printf("Com o valor do cateto a igual a %f e o cateto b igual a %f, o valor da hipotenusa é de: %f \n", catetoA, catetoB, hipotenusa);
  return 0;
}
