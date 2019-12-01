/*write a file*/
#include<stdio.h>

int main(){
  FILE *fptr;//file pointer
  char name[80];//string
  char *ptr;//character pointer
  ptr=name;//pointer that contains the address of string variable -name-

  fptr=fopen("./write.txt","w");

  
  printf("Enter name:\t");
  scanf("%s", name);

  while(*ptr!='\0'){
    fputc(*ptr,fptr);
    ptr++;
  }
}
