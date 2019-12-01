/*Write a program to print sum of integers. At the beginning user will be asked how many numbers he is
  going to enter. The output should be sum of all numbers entered by the user. (For example if user enters 6 at the beginning, then user will be prompted to enter 6 integers)*/


#include<stdio.h>

int main(){

  int num,j; //how many integers,integer to be added
  int sum=0; //sum of integers

  printf("Enter how many integers you would like to enter:\n");
  scanf("%d",&num);

  int i=0; //counter, initialazation of the loop

  while(i<num){

    printf("Enter integer:\n");
    scanf("%d",&j);

    sum+=j;
    i++;
  }

  printf("Sum of all integers is %d\n", sum);
  return 0;
}

    
