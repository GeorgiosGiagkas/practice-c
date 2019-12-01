/*Assignment 8*/

#include<stdio.h>
int reverse(int);//function declaration


int main(){

  int x;//user input

 
  printf("Enter integer...\t");
  scanf("%d", &x);

  printf("Reverse is %d\n", reverse(x) );

  return 0;
}


int reverse(int x){//function definition

  int rev=0;
  int remainder;
  

  while(x){//condition

    remainder=x%10;
    rev=rev*10+remainder;
    x=x/10;//decrement
  }

  return rev;
}
