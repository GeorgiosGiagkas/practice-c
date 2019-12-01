/*6.An integer is entered through the keyboard. Write a program to print whether number entered is prime
  or not*/

#include<stdio.h>
int main(){

  int num;

  printf("Enter number to check if prime:\n");
  scanf("%d",&num);

  int i=1; // initialazation
  while(i<num){

    if(num%i==0&&i!=1){
      printf("Number is not prime!\n");
      break;
    }
    i++;
  }

  if(i==num){
    printf("Number is a prime number!\n");
  }

  return 0;
}
  
    
