#include<stdio.h>
int main(){
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
  printf("%d is the absolute value",num>0?num:-num);
  return 0;
}