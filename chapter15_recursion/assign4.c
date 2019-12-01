/*.Write a C program to print first n numbers of Fibonacci series using recursion*/

#include<stdio.h>
int fibSeries(int);

int main(){

  int x;//user input
 
  printf("enter first n number of fibonacci to print\t");
  scanf("%d", &x);

  
  int i;//counter
  for(i=0;i<=x;i++){    
    printf("Fibonacci(%d): %d\n",i, fibSeries(i));
  }
}


int fibSeries(int x){//function definition
  
  int sum=0;
  
  if(x>=2){//base case
    sum=fibSeries(x-1)+fibSeries(x-2);//recursion
  }
  else if(x==1){
    sum=1;
    return sum;
  }
  else {
    sum=0;
    return sum;
  }
  return sum;
}
