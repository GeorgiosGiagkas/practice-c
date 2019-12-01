/*Write a C program to reverse the string using recursion*/

#include<stdio.h>
#include<string.h>
void reverseString(char[],char[]);//prototype

int main(){

  char input[80];

  puts("Enter multi-line string");
  scanf("%[^\n]s", input);
  printf("Original string is: %s\n",input);
  
  char reverse[80];
  strcpy(reverse, input);//copy 
  
  
  reverseString(input,reverse);//functon call

  printf("Reverse string is: %s\n",reverse );
  


  return 0;
}



void reverseString(char str[], char reverse[]){//function definition

  static int count=0;//initialized once
  
  if(*str!='\0'){    //base case
    reverseString(str+1, reverse);//recursion
    *(reverse+count)=*str;
    count++;
  }

  else{
    return;
  }
}
