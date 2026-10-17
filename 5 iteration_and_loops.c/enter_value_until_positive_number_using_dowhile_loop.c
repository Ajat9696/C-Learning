// create a program that prompts the user to enter a positive number.Use a do while loop to keep asking number until user enters a positive number.

#include<stdio.h>
int main(){

  // Using do while loop
  int num;
  do
  {
    printf("\nEnter a positive number: ");
    scanf(" %d",&num);
  } while (num<=0);

  printf("You are successfully enterd a positive number");
  
  return 0;
}