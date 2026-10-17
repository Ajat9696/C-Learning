#include<stdio.h>
int main(){
int pi=3.14159;
int r;
int total;
printf("Enter the radius:");
scanf("%d",&r);
total=2*pi*r;
printf("Your circumference of circle is: %d",total);
  return 0;
}