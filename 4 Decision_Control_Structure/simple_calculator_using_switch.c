#include<stdio.h>
int main(){
  int num1;
  int num2;
  int total;
  char opr;
  printf("Welcome to the calculator\n");
  printf("Enter the first number: ");
  scanf(" %d",&num1);
  printf("Enter the second number: ");
  scanf(" %d",&num2);
  printf("Enter the operator: ");
  scanf(" %c",&opr);
  switch (opr)
  {
  case '+' :
      total=num1+num2;
      printf("Result is: %d",total);
      break;
  case '-' :
      total=num1-num2;
      printf("Result is: %d",total);
      break;
  case '*' :
      total=num1*num2;
      printf("Result is: %d",total);
      break;
  case '/' :
      total=num1/num2;
      printf("Result is: %d",total);
      break;
  
  default:
  printf("You are not entered the correct operator");
    break;
  }

  return 0;
}