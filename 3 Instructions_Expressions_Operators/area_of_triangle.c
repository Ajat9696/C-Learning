#include<stdio.h>
int main(){
float length,breadth,area;
printf("Give the length of triangle: ");
scanf("%f",&length);
printf("Give the breadth of triangle: ");
scanf("%f",&breadth);
area=0.5*length*breadth;
printf("Area of triangle: %f",area);
  return 0;
}