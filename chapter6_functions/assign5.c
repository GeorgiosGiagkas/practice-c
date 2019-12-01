/*Assignment 5*/


#include<stdio.h>
int isoddeven(int);//prototypen

int main(){

  int x;//user input

  
  char ch;//condition
  

  do{
    printf("Enter integer...\t");
    scanf("%d", &x);

    if(isoddeven(x)){
      printf("The integer %d is even number.\n", x);
    }
    else {
      printf("The integer %d is odd number.\n", x );
    }

    printf("Would you like to enter another integer?(y/n)\t");
    scanf(" %c", &ch);

  }while(ch=='Y' || ch=='y');//condition

  return 0;
}

int isoddeven(int x){//funnction definition

  if(x<0){
    x=-1*x;
  }

  if(x%2==0 || x==0){
    return 1;
  }
  else {
    return 0;
  }
    
}
