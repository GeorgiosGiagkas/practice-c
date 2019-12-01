/*3.A multi word string is input through the keyboard. Write a C program to find number of vowels and consonants in a given string.*/

#include<stdio.h>
void charToUpper(char*, char*);//function declaration
int countV(char*);//function declaration
int countC(char*);//function declaration

int main(){

  char str1[120];
  char str2[120];
  puts("Enter multi-word string string!");
  scanf("%[^\n]s", str1);

  charToUpper(str1, str2);
  int v=countV(str2);

  printf("The number of Vowels in string is: %d\n", v);

  int c=countC(str2);
  printf("The number of Consonants in string is: %d\n", c);
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





int countV(char *ptrA){//counts cappital vowels

  int i=0;
  while(*ptrA!='\0'){
    if(*ptrA==65 || *ptrA==69 || *ptrA==73 || *ptrA==79 || *ptrA==85 || *ptrA==87){
      i++;
    }
    ptrA++;
  }
  return i;
}

int countC(char *ptrA){//counts cappital consonants

  int i=0;
  while(*ptrA!='\0'){
    if(*ptrA>64 && *ptrA<91){
      if(*ptrA!=65 && *ptrA!=69 && *ptrA!=73 && *ptrA!=79 && *ptrA!=85 && *ptrA!=87){
	i++;
      }
      }
    ptrA++;
  }
  return i;
}
