#include <stdio.h>

int main() {

  int *a, *b, t;

  printf("Digite o valor de A: ");
  scanf("%d",a);
  printf("Digite o valor de B:");
  scanf("%d",b);

  printf("\nA = %d\nB = %d",*a,*b);

  t=*a;
  *a=*b;
  *b=t;

  printf("\n A: %d\nB: %d",*a,*b);

  return 0;
}
