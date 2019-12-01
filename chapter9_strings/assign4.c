/*4.A string containing single word is entered through the keyboard. Write a C program using user defined function to check whether the string is palindrome or not.
 */
#include<stdio.h>
#include<string.h>
int checkPalindrome(char*, char*);
void reverseString(char*, char*);

int main(){

  char str1[80];
  char str2[80];
  
  puts("Enter single-word string.");
  scanf("%s",str1);

  strcpy(str2, str1);

  reverseString(str1,str2);
  puts(str2);

  int i=checkPalindrome(str1,str2);

  if(i==0){
    puts("Word is palindrome");
  }else{
    puts("Word is NOT palindrome");
     
  }
}

int checkPalindrome(char *ptrA, char *ptrB){

  
  while(*ptrA!='\0'){//condition
    if(*ptrA==*ptrB){
      ptrA++;
      ptrB++;
    }
    else{
      return 1;
    }
  }
  return 0;
}


 
void reverseString(char *ptrA, char *ptrB){//ptrAto be reversed, ptrB: reverse
  
  int i=strlen(ptrB)-1;
  while(*ptrA!='\0'){
    *(ptrB+i)=*ptrA;
    ptrA++;
    ptrB--;
   }
 }
