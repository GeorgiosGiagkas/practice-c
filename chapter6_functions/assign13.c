/*Assignment 13*/

#include<stdio.h>
int powr(int, int);

int main(){

  int x,y;//user input


  printf("Enter base...\t");
  scanf("%d", &x);

  
  printf("Enter power...\t");
  scanf("%d", &y);


  printf("Result is %d\n", powr(x,y) );
  
  return 0;
}


int powr(int base, int power){
  int result=1;

  int i;//counter
  for(i=1;i<=power;i++){
    result*=base;
  }
  return result;
}
