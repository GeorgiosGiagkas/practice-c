/*Any alphabet is entered through the keyboard. Write a program to print whether the alphabet is vowel or consonant*/

#include<stdio.h>

int main(){
  char x;

  printf("Enter any alphabet letter:\n");
  scanf("%c", &x);

  if(x=='a'|| x== 'e'|| x=='i'||x=='o'||x=='u'||x=='y'){
    printf("Letter is vowel.\n");
  }
  else{
    printf("Letter is consonant\n");
  }

  return 0;
}
