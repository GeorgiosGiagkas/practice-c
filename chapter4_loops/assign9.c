/*9.Write a C program to calculate and print cube of a number entered by the user. Make a provision that
  user can enter as many numbers as he/she wants.*/

#include<stdio.h>

int main(){

  int num;
  int cube;
  char ch;

  do{
    printf("Enter number to calculate cube\n");
    scanf("%d",&num);

    cube=num*num*num;

    printf("Cube is %d\n", cube);
    printf("Do you wish to enter another number? y/n\n");
    scanf("\n%c",&ch); //????????????????
  }while(ch=='y'||ch=='Y');

  return 0;
}

  
