/*Write a C program to print sum of first n numbers using recursion*/


#include<stdio.h>

int sumN(int);//function prototype(declaration)


int main(){


  int x;//user input
  int sum;//sum result
  
  printf("Up to which number you want to sum?\n");
  scanf("%d",&x);

  sum=sumN(x);

  printf("The sum is: %d\n",sum);
}

int sumN(int x){//function definition

  int n,sum;
  n=x-1;
  sum=0;
  if(n>0){//base case
    sum=x+sumN(n);//recursion
  }else{
    return 1;
  }

  return sum;

}





