#include<stdio.h>
int main(){
float fahrenheit,celsius;
printf("Enter the temperature in fahrenheit; ");
scanf("%f",&fahrenheit);
celsius=(fahrenheit-32)*5/9;
printf("Your temperature in degree celsius is: %f",celsius);
  return 0;
}