/*A C program to apply calloc function (clear and allocate).Memory allacated containes 0 valuees*/

#include<stdio.h>
#include<stdlib.h>

int main()
{

  int *ptr;//pointer to store void* pointer of calloc function
  size_t num;//positive integer variable to store user input
  int *temp;//temp pointer to keep track of ptr pointer

  printf("Enter number of integers\n");
  scanf("%lu", &num);//&lu  format specifier for unsigned integer

  ptr=(int*) calloc(num, sizeof(int));//typecasting and Calloc call.

  temp=ptr;//pointer to pointer
  int i;//counter
  for(i=1;i<=num;i++){
    printf("%d\n",*ptr );
    ptr++;
  }

  ptr=temp;//reset ptr pointer based on temp
  free(ptr);//free heap (dynamic memory allocation). '"Cut" the link'

  
  return 0;
}


