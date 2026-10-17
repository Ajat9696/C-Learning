#include<stdio.h>
int main(){
  char first[20];
  char last[20];
  int age;
  printf("Enter your first name:");
  scanf("%s",first);
  printf("Enter your last name:");
  scanf("%s",last);
  printf("Enter your age:");
  scanf("%d",&age);
  printf("WELCOME");
  printf("\nYour first name is: %s",first);
  printf("\nYour last name is:%s",last);
  printf("\nYour age is:%d",age);
  return 0;
}