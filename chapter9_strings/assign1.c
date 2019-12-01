/*1.A multi word string is input through the keyboard. Write a C program using function to convert lower case letter into upper case and upper case letters into lower case and print it.
 */

#include<stdio.h>
//#include<string.h>
void charTolower(char*, char*);
void charToUpper(char*, char*);

int main(){

  char str1[80];

  char str2[80];
  char str3[80];
  
  puts("Enter a multi-word string!");
  scanf("%[^\n]s",str1);//scan until reaches new line!


  charTolower(str1,str2);//call function
  puts(str2);

  charToUpper(str1,str3);
  puts(str3);

  

}

void charTolower(char *ptrA, char *ptrB){//function definition. ptrA input, ptrB: to lower
  while(*ptrA!='\0'){// Caution '\0' 
    if(*ptrA>64 && *ptrA< 91){
      *ptrB=*ptrA+32;
    }
    else{
      *ptrB=*ptrA;
    }
    ptrA++;
    ptrB++;
  }
}


void charToUpper(char *ptrA, char *ptrB){//function definition. ptrA input, ptrB: to upper

  while(*ptrA!='\0'){
    
    if(*ptrA>96 && *ptrA<122){
      *ptrB=*ptrA-32;
    }
    else{
      *ptrB=*ptrA;
    }
    ptrA++;
    ptrB++;
  }
}
    
