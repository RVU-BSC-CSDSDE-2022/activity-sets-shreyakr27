#include <stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int input()
{
  int num;
  printf("enter the number: ");
  scanf("%d", &num);
  return num;
}

int compare(int a, int b , int c)
{
  int largest;
  if(a>=b && a>=c)
  {
    largest = a;
  }
  if(b>=a && b>=c)
  {
    largest = b;
  }
  if(c>=a && c>=b)
  {
    largest = c;
  }
  return largest;
}

void output(int a, int b, int c, int largest)
{
  printf("the largest of %d, %d and %d is %d", a, b, c, largest);
}

int main()
{
  int a, b, c, largest;
  a = input();
  b = input();
  c = input();
  largest = compare(a, b , c);
  output(a, b, c, largest);
}
