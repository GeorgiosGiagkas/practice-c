/*9.Write a C program to sort an array in ascending order*/

#include<stdio.h>
#include<limits.h>
int findMax(int[], int);
int printArray(int[], int);
//int deletePos(int[],int, int);

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

  int arrayA[x];
  int maxA=INT_MIN;
  int maxB;
  maxB=array[findMax(array, x)];
  arrayA[x-1]=maxB;

  

  int position=x-2;//initialize
  while(position>=0){
    int j;//counter
    for(j=0;j<x;j++){
      if(array[j]>maxA && array[j]<maxB){
	maxA=array[j];
      }
    }
    arrayA[position]=maxA;
    maxB=maxA;
    maxA=INT_MIN;
    position--;
  }

  printArray(arrayA,x);

  
}


int findMax(int array[], int size){
  int i;//counter
  int ps;//position
  int max= INT_MIN;
  for(i=0;i<size;i++){
    if(array[i]>max){
      max=array[i];
      ps=i;
    }
  }
  return ps;
}


int printArray(int array[], int size){

  printf("Printing contents of array: \n");
  int i;//counter
  for(i=0;i<size;i++){
    printf("%d\n", array[i]);
  }
  return 0;
    
}



/*
int deletePos(int array[],int size, int position){
  int newArray[size-1];
  int i;//counter
  for(i=0;i<size;i++){
    if(i<position){
      newArray[i]=array[i];
    }
    else if(i>position){
      newArray[i-1]=array[i];
    }
    else{
      continue;
    }
  }
  return newArray;
}
*/			     
				

