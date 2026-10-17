#include<stdio.h>
int main(){
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
// using while loop
  int i=1;
  while (i<=10)
  {
    printf("\n%d * %d = %d",num,i,num*i);
    i++;
  }
  return 0;
}