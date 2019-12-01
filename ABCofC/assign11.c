#include<stdio.h>

void main(){
  int x,y;

  printf("Enter two integers:\n");
  scanf("%d%d", &x, &y);

  printf("Without intrchange, first integer is %d and second is %d\n", x,y);

  x=x+y;
  y=x-y;
  x=x-y;

  printf("Interchange: first integer is %d and second is %d\n", x,y);
  


}
