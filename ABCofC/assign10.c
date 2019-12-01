#include<stdio.h>

void main(){
  int x,y,z;

  printf("Enter two integers:\n");
  scanf("%d%d", &x, &y);

  printf("Without intrchange, first integer is %d and second is %d\n", x,y);
  
  z=x;
  x=y;
  y=z;

  printf("Interchange: first integer is %d and second is %d\n", x,y);
  


}
