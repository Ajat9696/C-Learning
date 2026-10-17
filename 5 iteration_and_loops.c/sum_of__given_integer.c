#include<stdio.h>
int main(){
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);

// use of while loop
int sum=0;
while (num>0)
{
  sum+=num%10;
  num=num/10;
}
printf("The sum of given integer is: %d",sum);
  return 0;
}