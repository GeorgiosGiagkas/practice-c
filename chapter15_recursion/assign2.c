/*Write a C program to print sum of digits of an integer using recursion*/

#include<stdio.h>
int sumD(int);//function prototype (declaration)

int main(){


  int x;//user input
  int sum;//sum of digits

  printf("Enter positive integer...\t");
  scanf("%d",&x);

  if(x<0){
    puts("Error.Enter positive integer not negative...\n");
    return 0;
  }
  sum=sumD(x);//function call

  
  printf("The sum is %d\n", sum);
  

}

int sumD(int x){//function definition

  int sum=0;
  int n,y;
  n=x%10;
  y=x/10;
  if(x>9){
    sum=n+sumD(y);
  }
  else{
    return x;
  }

  return sum;

}
