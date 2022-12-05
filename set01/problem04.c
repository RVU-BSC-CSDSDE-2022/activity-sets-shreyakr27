#include <stdio.h>

int main()
{
  int a, b, sum;
  printf("enter a: \n");
  scanf("%d", &a);
  printf("enter b: \n");
  scanf("%d", &b);
  add(a, b, &sum);
  printf("the sum of %d and %d is %d", a, b, sum);
}
int add(int a, int b, int *sum)
{
  *sum = a + b;
}