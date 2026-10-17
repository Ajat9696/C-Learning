// Sum all the numbers until users enter zero.
#include<stdio.h>
int main(){
  int num;
  int sum;
  do
  {
      printf("\nEnter a number: ");
    scanf(" %d",&num);
    sum= sum+num;
  printf(" %d",sum);
  } while (num!=0);
  return 0;
}