/*Write a C program to sum and average of an array containing integers. Take integer input from user. User input may be positive or negative or zero. Sum of negative integers and positive integers should be printed separately.
  Use separate functions. (Use pointers) */

#include<stdio.h>
int fillArray(int*,int*,float*);//function prototype
int printArray(int*,int*);



int main(){

  int x;
  int *ptr_x;
  ptr_x=&x;
  
  float sum=0;
  float *ptr_s;
  ptr_s=&sum;
  
  printf("Enter number of integers to contain in the array...\n");
  scanf("%d",&x);

  int array[x];
  fillArray(array,ptr_x,ptr_s);

  float avr=sum/x;
  printf("The sum of all integers is %0.2f and the average is %0.2f\n", sum, avr);
  printf("Printing all integers of the array seperately...\n");

  printArray(array, ptr_x);

}

/*function definition*/
int fillArray(int *ptrA, int *ptrB, float *ptrC){ //array, size, sum
  int i;//counter
   
  for(i=0;i<*ptrB; i++){
    printf("Enter integer %d:\t",i+1);
    scanf("%d", &ptrA[i]);
    *ptrC=*ptrC+*(ptrA+i);
    
  }

  return 0;
  

}


int printArray(int *prtA, int *prtB){//array, size

  int j;//counter
  for(j=0;j<*prtB; j++){
    printf("%d\n",prtA[j]);
  }
  return 0;
}
