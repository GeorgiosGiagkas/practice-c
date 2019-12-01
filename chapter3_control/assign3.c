/*Any integer is input through the keyboard. Write a C program to print whether number entered is even number or odd number.*/

#include<stdio.h>

int main(){

  int x;

  printf("Enter integer:\n");
  scanf("%d", &x);

  if(x!=0){
    if(x%2==0){
      printf("Number is even.\n");
    }
    else{
      printf("Number is odd.\n");
    }
    
  }
  else{
    printf("Number is 0, which is even.\n");
  }

  return 0;

}
