/*1.Write a C program to sum and average of an array containing integers. Take integer input from user. User input may be positive or negative or zero. Sum of negative integers and positive integers should be printed separately. (Note: Write whole program in single function i.e. main function)*/

#include<stdio.h>

int main(){

  int x;
  float sum=0;

  printf("Enter number of integers to contain in the array...\n");
  scanf("%d",&x);

  int array[x];

  int i;//counter
  for(i=0;i<x; i++){
    printf("Enter integer %d:\t",i+1);
    scanf("%d", &array[i]);
    sum=sum+array[i];
    
  }

  float avr=sum/x;
  printf("The sum of all integers is %0.2f and the average is %0.2f\n", sum, avr);
  printf("Printing all integers of the array seperately...\n");

  int j;//counter
  for(j=0;j<x; j++){
    printf("%d\n",array[j]);
    
  }

}
  
