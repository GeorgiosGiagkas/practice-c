/*7.A multi word string is input through the keyboard and a single word from the string itself is also taken from the user. For example a string entered is "She sells sea shells at the sea shore of pacific sea coast". Write a C program to find the number of times the word "Sea" appears in a given string.
 */

#include<stdio.h>
#include<string.h>
int checkSubstring(char*, char*);

int main(){

  char str1[80];
  char str2[200];

  puts("Enter single-word string");
  scanf("%s",str1);

  printf("%s\n",strlwr(str1));
  
  
  puts("Enter multi-word string");
  scanf(" %[^\n]s", str2);

  printf("%s\n",strlwr(str2));
  
  
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
  

    
