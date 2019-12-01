/*Use malloc function in a c program.Memory allacated contains garbage values*/

#include<stdio.h>
#include<stdlib.h>

int main(){

  int *ptr; //pointer to store *void pointer of mallon function
  int *temp;//pointer to keep track of ptr pointer
  int num; //user input number
  

  printf("How many integers you want to enter?\t");
  scanf("%d", &num);

  ptr=malloc(sizeof(int) * num);//malloc function. How many bytes to alocate, depending on data type

  temp=ptr;//assign ptr to temp pointer

  int i;//counter
  for (i = 1; i <=num; i++) {
    printf("Enter number\t");
    scanf("%d", ptr);
    ptr++;//increment pointer
  }

  ptr=temp;//reset ptr pointer based on temp

  for (i = 1; i<=num; i++) {
    printf("%d\n",*ptr);
    ptr++;//increment pointer
    
  }

  return 0;

}
