#include<stdio.h>
int main(){
  int a;
  int b;
  int c;
  int d;
  int e;
  int f;
  int g;
  printf("Enter the first number: ");
  scanf("%d",&a);
  printf("Enter the first number: ");
  scanf("%d",&b);
  c=a+b;
  d=a-b;
  e=a*b;
  f=a/b;
  g=a%b;
  printf("\nHere are the result for addition: %d",c);
  printf("\nHere are the result for subtraction: %d",d);
  printf("\nHere are the result for multiplication: %d",e);
  printf("\nHere are the result for division: %d",f);
  printf("\nHere are the result for modulus: %d",g);
  return 0;
}