#include<stdio.h>
int main(){
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);

  //using for loop
  
for (int i = 2; i < num; i++)
{
     if (num%i==0)
     {
      printf("This is not a prime number ");
      return 0;
     }
     
}
 printf("This is a prime number");
return 0;

}