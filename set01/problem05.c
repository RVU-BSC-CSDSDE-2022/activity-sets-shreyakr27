#include <stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);


int main(){
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest=compare(a,b,c);
  output(a,b,c,largest);
  
}



int input(){
  int n;
  printf("enter the value");
  scanf("%d", &n);
  return n;
}

int compare(int a, int b, int c){
  if(a>=b && a>=c){
    printf("The largest of %d,%d,%d is %d ",a,b,c,a);
    } 
  if(b>=a && b>=c){
    printf("The largest of %d,%d,%d is %d ",a,b,c,b);
    }  
  if(c>=a && c>=b){
    printf("The largest of %d,%d,%d is %d ",a,b,c,c);
    }
void output(int a, int b, int c, int largest){
  printf("");
}