/*functions for World Health Organization Equation and Mifflin-St. Jeor Equation to calculate daily caloric needs*/
//header file
#include<stdio.h>
//include user defined function file
#include "calculator_functions.c"


//prototypes
//float equationWHO(char sex, int age, float weight);
//float equationMSJ(char sex, int age, float weight, float height);

//main function
int main(){


  char x;//sex
  int y;//age
  float z;//weight
  float h;//height
  
  printf("Enter sex (f/m):\n");
  scanf("%c", &x);
  printf("Enter age:\n");
  scanf("%d", &y);
  printf("Enter weight in kg:\n");
  scanf("%f", &z);
  printf("Enter height in cm:\n");
  scanf("%f", &h);
  
  printf("WHO Calories calculated %0.2f\n", equationWHO(x,y,z));
  printf("MSJ Calories calculated %0.2f\n", equationMSJ(x,y,z,h));
  

  return 0;
}
