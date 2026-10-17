#include<stdio.h>
int main(){
  int principal,rate,time,CI;
  printf("Enter the principal amount: ");
  scanf("%d",&principal);
  printf("Enter the rate: ");
  scanf("%d",&rate);
  printf("Enter the time: ");
  scanf("%d",&time);
  CI=principal*(1+rate/100)*time;
 printf("Total Compound Interest is: %d",CI);
  return 0;
}