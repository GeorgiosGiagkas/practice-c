/*Write a C program to print LCM of two positive integers using recursion*/


//skip this version.........




#include<stdio.h>
#include<stdlib.h>

int findDiv(int x, int y, int *, int *, int *);

int main(){

  int x;//user input

  puts("Enter first positive integer..\t");
  scanf("%d", &x);

  //puts("Enter second positive integer..\t");
  //scanf("%d", &y);


  
  int *numA=NULL;
  int *original;
  original=numA;
  int *moreNumA=NULL;
  int count=0;
  int *ptr;
  ptr=&count;

  findDiv(x,x,numA, moreNumA, ptr);


  
  int i;
  for(i=0;i<count;i++){
    printf("%d\n", numA[i]);
  }

  puts("It ends here...");
  

}

int findDiv(int x, int y, int *numbers, int *more_numbers, int *count){

  int num=y-1;
  if(num>1){
    num=findDiv(x, num,numbers, more_numbers, count);
    if(x%num==0){
      more_numbers=realloc(numbers,(*count)*sizeof(int));
      numbers=more_numbers;
      *count=*count+1;
      numbers[*count]=num;
      *count=*count+1;
      printf("1st %d\n",*count );
      return num ;
  
      if(numbers==NULL){
	puts("Error re-allocating.");
      }
    }
    else{
      return num;
    }
  }

  else{
    printf("3rd %d\n",*count );
    return 1;
    
  }


}
