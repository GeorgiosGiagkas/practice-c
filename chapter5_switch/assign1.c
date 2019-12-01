/*Assignment 1*/

#include<stdio.h>
int main(){


  int x;//user input

  printf("Enter input:\t");
  scanf("%d", &x);

  switch(x){//action
  case 1:{
    puts("Monday");
    break;
  }
  case 2: {
    puts("Tuesday");
    break;
  }
  case 3: {
    puts("Wednesday");
    break;
  }
  case 4: {
    puts("Thursday");
    break;
  }
  case 5:{
    puts("Friday");
    break;

  }
  case 6:{
    puts("Saturday");
    break;
  }
  case 7:{
    puts("Sunday");
    break;
  }
  default:{
    puts("Not valid input");
  }

  return 0;
  }
}
