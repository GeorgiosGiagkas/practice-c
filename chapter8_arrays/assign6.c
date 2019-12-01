/*6.Write a C program to insert an element at a specified position in a given array. */

#include<stdio.h>
int printArray(int[], int);

int main(){

  int x;
  

  printf("Enter number of integers to contain in the array...\n");
  scanf("%d",&x);

  int array[x];

  int i;//counter
  for(i=0;i<x; i++){
    printf("Enter integer %d:\t",i+1);
    scanf("%d", &array[i]);
    
  }


  int position;
  int toAdd;

  printf("Enter integer to be inserted in the array.\n");
  scanf("%d", &toAdd);

  printf("Enter position(index) in the array.\n");
  scanf("%d", &position);

  int newArray[x+1];
  int j;//counter

  for(j=0;j<x+1;j++){
    if(j>position){
      newArray[j]=array[j-1];
    }
    else if(j<position){
      newArray[j]=array[j];
    }
    else{

      newArray[position]=toAdd;    
    }
  }

  
  

  printArray(newArray, x+1);
  
    
  
  

  
}

int printArray(int array[], int size){

  printf("Printing contents of array: \n");
  int i;//counter
  for(i=0;i<size;i++){
    printf("%d\n", array[i]);
  }
  return 0;
    
}
