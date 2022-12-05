#include <stdio.h>

int main()
{
  int a, b, sum;
  printf("enter a: \n");
  scanf("%d", &a);
  printf("enter b: \n");
  scanf("%d", &b);
  sum = add(a, b);
  printf("the sum is %d", sum);
}
int add(int a, int b, int sum)
{
  sum = a + b;
  return sum;
}