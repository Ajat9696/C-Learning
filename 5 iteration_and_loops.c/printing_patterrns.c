#include<stdio.h>
int main(){
  int row;
  printf("Enter the number of rows:");
  scanf(" %d",&row);

  printf("Here is your right half pyramid");
  int i;
  for ( i = 1; i <= row; i++)   
  {
     printf(" \n");
    for (int j = 0; j < i; j++)
    {
      printf("* ");
    }
    
  }
  
}