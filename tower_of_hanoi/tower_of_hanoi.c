/*tower of hanoi*/

#include<stdio.h>
void tower(int,char,char,char);

int main(){

  int x;//user input

  printf("Enter number of discs...\n");
  scanf("%d", &x);

  tower(x,'A','B','C');

  return 0;
}



void tower(int n, char source, char destination, char helper){

  if(n==0){//base case
    return;
  }

  printf("Function call %d, %c ,%c, %c\n",n-1, source, helper, destination); 
  tower(n-1, source, helper, destination);

  printf("--------------------\tDisc number %d moved from %c to %c\n",n,source,destination );

  printf("Function call %d, %c ,%c, %c\n",n-1, helper, destination, source);
  tower(n-1,helper,destination,source);
}
