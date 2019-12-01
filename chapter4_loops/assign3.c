/*3.Write a program to print factorial of any positive integer entered by the user through the keyboard.*/

#include<stdio.h>

int main(){

  int x; //possitive integer to calculate factorial
  int n=1; //factorial

  printf("Enter positive integer to calculate factorial:\n");
  scanf("%d",&x);

  int i; //counter
  for(i=1;i<=x;i++){
    n*=i;
  }

  printf("Factorial of %d is %d.\n", x,n);
  return 0;
}
