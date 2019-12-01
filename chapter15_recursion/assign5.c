/*.Write a C program to convert a decimal number to binary number using recursion.*/


//check again......................

#include<stdio.h>
int  toBinary(int x, int*[]);//functionn prototype

int i=0;

int main(){

  int x;//user input

  printf("Enter integer to converst to binary\t");
  scanf("%d", &x);

  int array[15];
  int *ptr;
  ptr=array;


  int i;
  toBinary(x,&ptr);

  
  for(int j=i-1;j>=0;j--){
    printf("%d\n", array[j] );
    
  }
}


int  toBinary(int x, int *array[]){

  int y,z;
  z=x%2;
  y=x/2;

  if(x-1>0){
    i++;
    *array[x-1]=toBinary(y, array);
  }
  else{
    i++;
    *array[x-1]=z;
  }

  return z;
  
}

