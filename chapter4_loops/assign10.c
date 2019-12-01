/*10.Write a program to print all prime numbers between 0 and 500.*/


#include<stdio.h>
int main(){
  
  int num;

  for(num=2;num<=500;num++){
    
    int i=1; // initialazation
    while(i<num){

      if(num%i==0&&i!=1){
  
	break;
      }
      i++;
    }

    if(i==num){
      printf("%4d",num);
    }
  }
  printf("\n\n");
  return 0;
}
