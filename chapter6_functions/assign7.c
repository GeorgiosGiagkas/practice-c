/*Assignment 7*/

#include<stdio.h>
int findLCM(int, int);
int findHCF(int, int);

int main(){

  int x,y;//user input

 
  printf("Enter first integer...\t");
  scanf("%d", &x);

  
  printf("Enter second integer...\t");
  scanf("%d", &y);

  printf("LCM of is: %d\n", findLCM(x,y));
  printf("HCF of is: %d\n", findHCF(x,y));

  return 0;
}

int findLCM(int x, int y){

  int i=2;//count
  while(1){
    if(i%x==0 && i%y==0){
      break;
    }
    else {
      i++;
    }
  }

  return i;

}


int findHCF(int x, int y){


  int i=1;//count
  int max=1;
  while (i<x || i<y) {
    if(x%i==0 && y%i==0){
      if(i>max){
	max=i;
      }
      else {
	max;
      }
      i++;
      
    }
    else {
      i++;
    }  
    
  }
  return max;

  

}
