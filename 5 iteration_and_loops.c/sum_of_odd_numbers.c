#include<stdio.h>
int main(){
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
  // using while loop
  int i=1;
  int sum=0;
  while ( i<=num)
  {
    sum+=i;
    i+=2;
  }
  printf("The sum  of all odd number from 1 to %d is %d;",num,sum);
  return 0;
}