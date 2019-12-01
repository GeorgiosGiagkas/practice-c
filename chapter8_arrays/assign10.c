/*10.Write a C program to accept an array and reverse it using pointers. */

#include<stdio.h>
int revArray(int*, int*, int*);//function declaration
int printArray(int[], int);

int main(){

  int x;
  int *ptr_x;//declare pointer
  ptr_x=&x;// ptr_x is an integer pointer that contains the address of x integer variable.

  printf("Enter number of integers to contain in the array...\n");
  scanf("%d",&x);

  int array[x];

  int i;//counter
  for(i=0;i<x; i++){
    printf("Enter integer %d:\t",i+1);//ask user for input
    scanf("%d", &array[i]); // user inserts input    
  }

  int arrayR[x]; // reverse array.

  revArray(array, ptr_x, arrayR); //address for arrays are array names

  printArray(arrayR,x);

}


int revArray(int *arrayA, int *size, int *arrayB){//function definition
  int i;//counter
  for(i=0;i<*size;i++){
    arrayB[*size-1-i]=arrayA[i];
  }
  return 0;

}

int printArray(int array[], int size){

  printf("Printing contents of array: \n");
  int i;//counter
  for(i=0;i<size;i++){
    printf("%d\n", array[i]);
  }
  return 0;
    
}
