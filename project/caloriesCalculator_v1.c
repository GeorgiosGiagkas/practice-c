/*C program to calculate World Health Organization Equation and Mifflin-St. Jeor Equation daily caloric needs. Store file of diefferent individuals(entries).*/


//header file
#include<stdio.h>

//include user defined function file
#include "calculator_functions.c"



//main function
int main(){

  typedef struct//user defined data type (structure) 
  {
    char name[80];//name
    char surname[80];//surname
    char sex;//sex
    int age;//age
    float weight;//weight
    float height;//height
    float caloriesWHO;//World Health Organization Equation
    float caloriesMSJ;//Mifflin-St. Jeor Equation
  }entry;

  entry en1;

  printf("Enter name:\n");
  scanf("%s", en1.name);
  printf("Enter surname:\n");
  scanf("%s", en1.surname);
  printf("Enter sex (f/m):\n");
  scanf(" %c", &en1.sex);
  printf("Enter age:\n");
  scanf("%d", &en1.age);
  printf("Enter weight in kg:\n");
  scanf("%f", &en1.weight);
  printf("Enter height in cm:\n");
  scanf("%f", &en1.height);
  en1.caloriesWHO=equationWHO(en1.sex, en1.age, en1.weight);
  en1.caloriesMSJ=equationMSJ(en1.sex, en1.age, en1.weight,en1.height);


  

  puts("Name\tSurname\tSex\tAge\tWeight\tHeight\tCaloriesWHO\tCaloriesMSJ");
  printf("%s\t%s\t%c\t\%d\t%0.2f\t%0.2f\t%0.2f\t%0.2f\n",en1.name, en1.surname, en1.sex, en1.age, en1.weight,en1.height, en1.caloriesWHO, en1.caloriesMSJ);


  
  
  return 0;
}
