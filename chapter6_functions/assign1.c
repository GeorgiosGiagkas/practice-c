/* Assignment 1*/

#include<stdio.h>
int sum(int, int);//prototype
int product(int , int);//prototype


int main(){

  int x,y;//user input

  int sm=0;//sum
  int pr;//product

  printf("Enter first integer...\t");
  scanf("%d", &x);

  
  printf("Enter second integer...\t");
  scanf("%d", &y);

  sm=sum(x,y);
  pr=product(x,y);
  
  printf("Sum is %d\nProduct is %d\n", sm, pr);

}


int sum(int x, int y){//function definition

  int sum=0;

  sum=x+y;

  return sum;

}


int product(int x , int y){//function definition

  int pr;

  pr=x * y;

  return pr;

}
