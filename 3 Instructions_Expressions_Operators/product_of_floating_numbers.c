#include<stdio.h>
int main(){
  float a;
  float b;
  float total;
  printf("Give the first number: ");
  scanf("%f",&a);
  printf("Give the second number: ");
  scanf("%f",&b);
  total=a*b;
  printf("Product of float Numbers is: %f",total);
  return 0;
}