/*Any character is input through the keyboard. Write a C program to determine whether the character is small case alphabet, capital letter, a digit or a special symbol*/

#include<stdio.h>
#include<ctype.h>

int main(){
  char x;

  printf("Enter character:\n");
  scanf("%c", &x);

  if(islower(x)){
    printf("Character is lower case letter.\n");
  }

  else if(isupper(x)){
    printf("Character is capital letter.\n");
  }
  else if(isdigit(x)){
    printf("Character is digit.\n");
  }
  else{
    printf("Character is a special symbol\n");
  }

  return 0;
}
  
  
