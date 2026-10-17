#include<stdio.h>
int main(){
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
  
  int reverse=0;
  int copy=num;
  while (copy>0)
  {
    reverse=(reverse*10)+(copy%10);
    copy=copy/10;

  }

 printf(" reversed digit is: %d",reverse);
  return 0;
}