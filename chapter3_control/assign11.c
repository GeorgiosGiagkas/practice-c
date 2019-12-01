/*Three integers are input through the keyboard. Write a C program to print largest among three numbers. (Use ternary operators)*/

#include<stdio.h>

int main(){

  int x,y,z,max;

  
  printf("Enter first integers:\n");
  scanf("%d", &x);
  printf("Enter second integers:\n");
  scanf("%d", &y);
  printf("Enter third integers:\n");
  scanf("%d", &z);

  max=x>y?x:y;
  max=z>max?z:max;

  printf("Largest value is %d\n", max);

  return 0;
}
