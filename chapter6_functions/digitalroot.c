/*find digital root of a positive integer*/

#include<stdio.h>
int findRoot(int);//prototype

int main(){

  int x;//user input
  int droot;//digital root var.
  
  printf("Enter integer:\t");
  scanf("%d", &x);


  droot=findRoot(x);

  while (droot>9) {//condition
    droot=findRoot(droot);
  }

  
  if(droot<=0)
    puts("Integer must be positive");
  else
    printf("Digital root of %d is %d\n", x, droot);
  
  return 0;
}


int findRoot(int x){//function definition

  
  int sum=0;
  int remainder;

  
  while(x){//condition

    remainder=x%10;
    sum+=remainder;
    x/=10;
  }
  
  return sum;
}
