#include<stdio.h>
 int main(){
  int age;
  printf("Enter the age: ");
  scanf("%d",&age);
  if(age<13){
    printf("You are a child");
  }else if(age<20){
    printf("You are a teenager");
  }else if(age<60){
    printf("You are Adult");
  }else{
    printf("You are Senior person");
  }
  return 0;
}