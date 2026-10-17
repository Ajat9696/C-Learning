#include<stdio.h>
int main(){
  float A;
  float B;
  float C;
  float D;
  float total;
  printf("Give the value of side A: ");
  scanf("%f",&A);
  printf("Give the value of side B: ");
  scanf("%f",&B);
  printf("Give the value of side C: ");
  scanf("%f",&C);
  printf("Give the value of side D: ");
  scanf("%f",&D);
  total=A+B+C+D;
  printf("Perimeter of Rectangle is: %f",total);

  return 0;
}