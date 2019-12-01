/*Assignment 6*/

#include<stdio.h>
int factorial(int);//prototype

int main(){

  int x;//user input

  
  char ch;//condition
  

  do{
    printf("Enter integer...\t");
    scanf("%d", &x);

    printf("Factorial of %d is: %d\n", x,factorial(x));
  
    printf("Would you like to enter another integer?(y/n)\t");
    scanf(" %c", &ch);

  }while(ch=='Y' || ch=='y');//condition

 
  return 0;
}


int factorial(int x){
  int i;//count
  int result=1;
  
  for(i=1;i<=x;i++){

    result*=i;
  }

  return result;

  
}
