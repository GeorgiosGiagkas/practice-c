/*Marks of 3 subjects are input through the keyboard. Write a program to print total and percentile marks
  for 3 students using any appropriate loop control structure*/

#include<stdio.h>

int main(){

  float x,y,z;
  float total;
  int i; //counter

  for(i=1;i<=3;i++){
    printf("For student %d\n",i);
    printf("Enter mark for maths:\n");
    scanf("%f",&x);
    printf("Enter mark for history:\n");
    scanf("%f",&y);
    printf("Enter mark for biology:\n");
    scanf("%f",&z);

    total= x+y+z;
    printf("Percentile mark for maths is %0.2f, for history is %0.2f,and for biology is %0.2f. Total score is %0.2f.\n", x/total*100, y/total*100, z/total*100, total);
	 
  }
  return 0;
}
