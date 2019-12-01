/*Write a C program to print LCM of two positive integers using recursion*/


#include<stdio.h>
int findLCM(int, int);

int main(){

  
  int x,y;//user input

  int lcm;
  
  puts("Enter first positive integer..\t");
  scanf("%d", &x);

  puts("Enter second positive integer..\t");
  scanf("%d", &y);

  lcm=findLCM(x,y);

  printf("LCM is: %d\n",lcm );


  
}


int findLCM(int x, int y){

  static int lcm=1;//initialized once 

  
  if(lcm%x==0 && lcm%y==0){
    return lcm;
  }

  else{
    lcm++;
    findLCM(x,y);//recursion
    return lcm;
  }
}
    
