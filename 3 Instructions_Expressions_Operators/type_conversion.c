#include<stdio.h>
int main(){
  int a;
  printf("Give an integer value: ");
  scanf("%d",&a);
  // First way to type cast
  float floating = a;
  printf("Before type cast number is: %d",a);
  printf("\nAfter type casting number is: %f",floating);

  //Second way to type cast value
  printf("\nThe number is: %f",(float)a);
  return 0;
}