/*Assignment 14*/

#include<stdio.h>
int isPrime(int);
void findPrimeFac(int);

int main(){

  int x;//user input


  printf("Enter base...\t");
  scanf("%d", &x);


  findPrimeFac(x);
 
  return 0;
}

void findPrimeFac(int x){

  int i;
  for(i=2;i<=x;i++){
    if(isPrime(i)){
      if(x%i==0){
	printf("%d\n",i);
	x=x/i;       
      }
    }
  }
}


int isPrime(int x){

  int i;//count
  for(i=2;i<x;i++){
    if(x%i==0)
      return 0;
    
  }

  return 1;


  
}

 
