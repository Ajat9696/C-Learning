#include<stdio.h>
int main(){
  int num1;
  int num2;
  int min;
  printf("Enter the first number: ");
  scanf("%d",&num1);
  printf("Enter the second number: ");
  scanf("%d",&num2);
  min=num1>num2?num2:num1;
  printf("Minimum number is: %d",min);
  return 0;
}