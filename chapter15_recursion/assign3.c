/*Write a C program to find the largest number in an array of 10 integers using recursion*/

#include<stdio.h>
#include<limits.h>
int findMax(int[], int);

int main(){

  int array[10];
  int max=0;

  int i;//count,index
  for(i=0;i<10;i++){
    printf("Enter integer\t");
    scanf(" %d", &array[i]);
  }

  for(i=0;i<10;i++){
    printf("%d\n",array[i]);
  }
  

  max=findMax(array, 10);

  printf("Max is: %d\n", max );
  

}


int findMax(int array[], int size){//function definition

  static int max=INT_MIN;//life time throught the life of the program
  int x=size-1;//index

  if(array[x]>max){
    max=array[x];
  }
  else {
    max=max; 
  }

  if(size>1){//base case
    max=findMax(array, (size-1));//recursion
  }
  else{
    return max;
  }
  return max;
}
