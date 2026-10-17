#include <stdio.h>
int main(){
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);

  //use of while loop
  int i=1;
  int fact=1;
  while (i<=num)
  {
    fact=fact*i;
    i++;
  }
  printf("The factorial of given number is: %d",fact);
return 0;
}