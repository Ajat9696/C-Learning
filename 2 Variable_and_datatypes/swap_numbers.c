#include<stdio.h>
int main(){
  int a;
  int b;
  int temp;
  printf("Enter the first number: ");
  scanf("%d",&a);
  printf("Enter the second number: ");
  scanf("%d",&b);
temp=a;
a=b;
b=temp;
  printf("\nThe first number is: %d",a);
  printf("\nThe second number is: %d",b);
return 0;
}