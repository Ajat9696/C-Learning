#include<stdio.h>
//An armstrong number also known as narcissitic number or pluperfect digital invariant--
// --is a positive integer that equals the sum of its own digits, each raised to the power of the-- 
// --total number of digits  (like 153)



int main(){
  int num;
  printf("Enter the number: " );
  scanf(" %d",&num);

int sum=0;;
int copy=num;
while (copy>0)
{
int dig = copy%10;
sum = sum+ dig * dig *dig;
  copy=copy/10;
}

if (num==sum)
{
  printf("This is a armstrong number");
}else{
  printf("This is not a armstrong number");
}


}