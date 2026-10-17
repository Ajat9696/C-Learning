#include<stdio.h>

void increasing_decreasing(int n){
     if(n==0) return;
      printf("%d\n",n);
      increasing_decreasing(n-1);
      printf("%d\n",n);
      
}


int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  increasing_decreasing(n);
  return 0;
}