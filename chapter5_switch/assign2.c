/*Assignment 2*/

#include<stdio.h>
void enterNum(int *, int *);
void printMenu(int *);

int main(){


  int x,y;//input
  int *ptrx,*ptry;
  ptrx=&x;
  ptry=&y;
  int quit=1;
  int z;//action
  int *ptrz;
  ptrz=&z;
  
  enterNum(ptrx,ptry);
  
  do{
    printMenu(ptrz);
    switch(z){
    case 1:{
      printf("Sum is: %d\n", x+y);
      break;
    }
    case 2:{
      printf("Product is: %d\n", x*y);
      break;
    }
    case 3: {
      printf("Difference is: %d\n", x-y);
      break;
    }
    case 4:{
      printf("Fraction is: %0.2f\n", (float)x/y);
      break;
    }
    case 5:{
      printMenu(ptrz);
      break;
    }
    case 6: {
      enterNum(ptrx,ptry);
      break;
    }
    case 7: {
      printf("Terminating.....\n");
      quit=0;
      break;
    }
    default:{
      printMenu(ptrz);
      break;
    }
    
    }
  }while(quit);

   
  return 0;
}


void enterNum(int *ptrA, int *ptrB){ 
  printf("Enter first integer:\t");
  scanf("%d", ptrA);
  printf("Enter second integer:\t");
  scanf("%d", ptrB);
}





void printMenu(int *ptr){

  printf("Select action:\n1.Addition\n2.Multiplication\n3.Substraction\n4.Division\n5.Print menu\n6.Input other integers\n7.Terminate program...\nPrompt<-\t");

  scanf(" %d", ptr);

}


