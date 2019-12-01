/*Three integers are input through the keyboard. Write a C program to print largest among three numbers. (Use if-else control structure)*/

#include<stdio.h>

int main(){

  int x,y,z;

  printf("Enter first integers:\n");
  scanf("%d", &x);
  printf("Enter second integers:\n");
  scanf("%d", &y);
  printf("Enter third integers:\n");
  scanf("%d", &z);
  
  if(x>y&&x>z){
    printf("The number %d is the largest.\n", x);
  }
  else if(y>x&&y>z){
    printf("The number %d is the largest.\n", y);
  }
  else if(z>x&&z>y){
    printf("The number %d is the largest.\n", z);
  }
  else{
    printf("There no single larger number among the three integers.\n");
  }

  return 0;


}
