/*print the largest number between to integers*/

#include<stdio.h>

int main(){

  int x,y;
  int max;

  printf("Enter first integer:\t");
  scanf("%d", &x);
  printf("Enter second integer:\t");
  scanf("%d",&y);

  if(x!=y){
    max= x>y?x:y; //ternary operator. If expression 1 (x>y) is true the expression 2 is evaluated else expression 3 is excetuted.
    printf("The largest number is %d\n", max);
  }
  else{
    printf("Integers are equal.\n");
  }

  return 0;
}

  
