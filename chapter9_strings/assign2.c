/*2.A multi word string is input through the keyboard. Write a C program to count number of words in a given string.*/

#include<stdio.h>
int countWords(char*);

int main(){

  char str1[120];

  puts("Enter multi-word string (no more than 80 characters!).");
  scanf("%[^\n]s", str1);

  int count;
  count = countWords(str1);

  printf("Number of words: %d\n", count);

}

int countWords(char *ptrA){

  int i=1;//space counter (+1 to calculate words. Spaces between words must be unique.
  while(*ptrA!='\0'){
    
    if(*ptrA==32){
      i++;
    }

    ptrA++;
  }

  return i;
}

      
