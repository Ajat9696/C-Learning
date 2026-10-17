#include<stdio.h>
int main(){
  int first;
  int second;
  printf("Welcome to the LCM Calculator");
  printf("\nEnter the first number: ");
  scanf("%d",&first);
  printf("Enter the second number: ");
  scanf("%d",&second);

  // using for loop
  int min= first>second? first : second;
  int max= first*second;
  for (int i = min; i <= max; i++)
  {
    if (i%first==0 && i%second==0)
    {
      printf("LCM of %d and %d is %d",first,second,i);
      break;
    }
    
  }
  return 0;

}