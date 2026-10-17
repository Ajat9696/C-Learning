#include<stdio.h>
int main(){
  int marks;
  printf("Enter the marks: ");
  scanf(" %d",&marks);
  printf("Your mark are in the category: ");
  marks>80?printf("High"):(marks>=50?printf("Moderate"):printf("Low"));
  return 0;
}