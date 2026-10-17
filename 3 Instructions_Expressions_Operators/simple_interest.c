#include<stdio.h>
int main(){
  int principal,rate,time,SI;
  printf("Enter the principal amount: ");
  scanf("%d",&principal);
  printf("Enter the rate: ");
  scanf("%d",&rate);
  printf("Enter the time: ");
  scanf("%d",&time);
  SI=principal*rate*time/100;
  printf("Total Simple Interest is: %d",SI);
  return 0;
}