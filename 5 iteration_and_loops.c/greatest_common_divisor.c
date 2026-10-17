#include<stdio.h>
int main(){
  int first;
  int second;
  printf("Welcome to the GCD Calculator");
  printf("\nEnter the first number: ");
  scanf("%d",&first);
  printf("Enter the second number: ");
  scanf("%d",&second);

  // using for loop
  int min= first>second? first : second;
  for (int i = min; i >=1; i--)
  {
    if (first%i==0 && second%i==0)
    {
      printf("GCD of %d and %d is %d",first,second,i);
      break;
    }
    
  }
  return 0;

}