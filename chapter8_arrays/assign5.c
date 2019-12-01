/*5.Write a C program to put even and odd numbers of an array in two different arrays. */


#include<stdio.h>
int printArray(int[], int);//function declaration

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


  
  int countArrayA=0;//even
  int countArrayB=0;//odd

  
  int j;//counter
  for(j=0;j<x; j++){
    if(array[j]%2==0||array[j]==0){
      countArrayA++;
    }
    else{
      countArrayB++;
  }
  }

  int arrayA[countArrayA];
  int arrayB[countArrayB];

  int z;//counter
  int za=0; // index for arrayA
  int zb=0; // index for arrayB
  
  for(z=0;z<x; z++){
    if(array[z]%2==0||array[z]==0){
      arrayA[za]=array[z];
      za++;
    }
    else{
      arrayB[zb]=array[z];
      zb++;
  }
  }


  printArray(arrayA, countArrayA);
  printArray(arrayB, countArrayB);

  
}


int printArray(int array[], int size){

  printf("Printing contents of array: \n");
  int i;//counter
  for(i=0;i<size;i++){
    printf("%d\n", array[i]);
  }
  return 0;
    
}

  

