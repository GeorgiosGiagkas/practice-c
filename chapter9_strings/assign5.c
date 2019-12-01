/*5.A multi word string is entered through the keyboard. Write a C program using function to find the largest and smallest word in a given string.
 */

#include<stdio.h>
#include<string.h>
char* smallWord(char *,char *,char *,char *);
char* largeWord(char *,char *,char *,char *);

int main(){

  char str1[120];//string

  char str2[120];
  
  char *token;//character pointer
  char *theRest;
  char *tokenMax;
  char *tokenMin;
  
  puts("Enter multi-word string");
  scanf("%[^\n]s",str1);

  strcpy(str2,str1);
  //theRest=str1; //theRest is a pointer that points to string(which is also a pointer)
  /*
  int max= 0;
  while((token=strtok_r(theRest, " ", &theRest))){//return a pointer to the next token
    if(strlen(token)>max){
    max = strlen(token);
    tokenMax=token;//pointer to pointer token
    }
  }

  printf("%s\n", tokenMax);
  */


  /*
  int min=127;
  while((token=strtok_r(theRest, " ", &theRest))){//return a pointer to the next token
    if(strlen(token)<min){
    min = strlen(token);
    tokenMin=token;//pointer to pointer token
    }
  }
  */


  
  printf("%s\n", smallWord(str1,token, theRest, tokenMin));



  
  printf("%s\n", largeWord(str2,token, theRest, tokenMax));
  
  
  
  return 0;

}

      

char* largeWord(char *string,char *token, char *theRest,char *tokenMax ){
  
  theRest=string;

  int max=0;
  while((token=strtok_r(theRest, " ,!.:*", &theRest))){//return a pointer to the next token
    if(strlen(token)>max){
    max = strlen(token);
    tokenMax=token;//pointer to pointer token
    }
  }
  return tokenMax;
}

char* smallWord(char *string,char *token, char *theRest,char *tokenMin){

  theRest=string;

  int min=127;
  while((token=strtok_r(theRest, " ,!.:*", &theRest))){//return a pointer to the next token
    if(strlen(token)<min){
    min = strlen(token);
    tokenMin=token;//pointer to pointer token
    }
  }
  return tokenMin;
}
