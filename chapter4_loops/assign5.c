/*5.Two integer numbers are input through the keyboard. Write a C program to print one number raised to
  other number. For example if user enters 4 and 3 then output should be 4 raised to 3*/

#include<stdio.h>

int main(){

  int x,y;//base,power
  int m=1;//result
  
  printf("Enter first integer which is the base:\n");
  scanf("%d",&x);
  printf("Enter second integer which is the power:\n");
  scanf("%d",&y);

  int i; //counter
  for(i=1;i<=y;i++){
    m=m*x;
  }

  printf("Result is: %d\n",m);

  return 0;
}
