#include<stdio.h>
int main(){
  float r;
  float total;
  printf("Enter the radius: ");
  scanf("%f",&r);
  total=3.14*r*r;
  printf("The area of circle is: %f",total);
  return 0;
}