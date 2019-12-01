/*6.Two strings, One string containing single word and other multi word string are input through the keyboard. Write a C program to determine whether first string is sub string of second string.
 */

#include<stdio.h>
#include<string.h>
int checkSubstring(char*, char*);

int main(){

  char str1[80];
  char str2[200];

  puts("Enter single-word string");
  scanf("%s",str1);

  puts("Enter multi-word string");
  scanf(" %[^\n]s", str2);

  checkSubstring(str1,str2);

}

int checkSubstring(char *ptrA, char *ptrB){

  if(strlen(ptrA)>strlen(ptrB)){
    puts("Single-word string is larger than multi-word string");
    printf("%ld and %ld respectively.\n", strlen(ptrA), strlen(ptrB));
    return 1;
    }

  char *original;
  original=ptrA; //pointer to pointer to keep track of the base address of ptrA string
  int i=0;
  while(*ptrA!='\0'){
    
    if(*ptrA==*ptrB){
      ptrA++;
      ptrB++;
      i++;
      //printf("i=%d\n",i);
    }else{
      ptrB++;
      ptrA=ptrA;
      i=0;
    }
  }

  
  int l=strlen(original);
  //printf("%d\n", l);
  if(i==l){
    puts("First String is a a substring of second string");
    return 0;
  }else{
    puts("First String is NOT a substring of second string");
    return 1;
  }


}
  

    
