#include<stdio.h>
int main(){
  int num;
  printf("Enter the number: ");
  scanf(" %d",&num);

 int copy=num;
 int rev =0;
  while (copy>0)
  {
    int r=copy%10;
    copy = copy/10;
    rev = rev*10+r;
  }
  
  if (rev==num)
  {
    printf("This is a palindrome number");
  }else{
    printf("This is not a palindrome number");
  }
  
return 0;
}