/*C program to apply realloc function*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int count=0;//counter for number of inputs
  int input,n;
  int *numbers= NULL; //initrialize pointer to NULL
  int *more_numbers=NULL;//initialize pointer to NULL
  do{
    printf("Enter integer value (type 0 to end)\t");
    scanf("%d", &input);
    count++;//increment

    more_numbers= (int *) realloc(numbers, count*sizeof(int));//first  argument: pointer to existing memory location. second argument: new size(bytes)

    if(more_numbers!=NULL){
      numbers=more_numbers;//assign pointer to pointer
      numbers[count-1]=input;//assign input value to last 'position'. or can be written: *(numbers+count-1)
    }
    else{
      free(numbers);//free allocated memory
      puts("Error re-allocating memory...");
      exit(1);
      }

    }while(input!=0);//condition


  printf("Numbers entered:\n");

  for(n=0;n<count;n++){
      printf("%d\n",numbers[n]);
  }
  
  free(numbers);//free allocated memory (heap)   
  return 0;
}
