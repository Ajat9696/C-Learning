#include<stdio.h>
int main(){
  int a;
  printf("Enter a number: ");
  scanf("%d",&a);
  if(a>0){
    printf("This is positive number");
  }
  else if(a==0){
    printf("This is Zero");
  }
  else{
    printf("This is negative number");
  }
  return 0;
}