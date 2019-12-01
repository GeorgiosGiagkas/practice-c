/*C program to calculate World Health Organization Equation and Mifflin-St. Jeor Equation daily caloric needs. Store file of diefferent individuals(entries).*/


//header file
#include<stdio.h>
#include<stdlib.h>
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


  entry *array=NULL;
  entry *add_array=NULL;

  
  int count=1;
  add_array=realloc(array, count*sizeof(entry));//dynamic memory allocation
  array=add_array;
  
  
  

  printf("Enter name:\n");
  scanf("%s", array[count-1].name);
  printf("Enter surname:\n");
  scanf("%s", array[count-1].surname);
  printf("Enter sex (f/m):\n");
  scanf(" %c", &array[count-1].sex);
  printf("Enter age:\n");
  scanf("%d", &array[count-1].age);
  printf("Enter weight in kg:\n");
  scanf("%f", &array[count-1].weight);
  printf("Enter height in cm:\n");
  scanf("%f", &array[count-1].height);
  array[count-1].caloriesWHO=equationWHO(array[count-1].sex, array[count-1].age, array[count-1].weight);
  array[count-1].caloriesMSJ=equationMSJ(array[count-1].sex, array[count-1].age, array[count-1].weight,array[count-1].height);


  

  puts("Name\tSurname\tSex\tAge\tWeight\tHeight\tCaloriesWHO\tCaloriesMSJ");
  printf("%s\t%s\t%c\t\%d\t%0.2f\t%0.2f\t%0.2f\t%0.2f\n",array[count-1].name, array[count-1].surname, array[count-1].sex, array[count-1].age, array[count-1].weight,array[count-1].height, array[count-1].caloriesWHO, array[count-1].caloriesMSJ);

  



  
  
  return 0;
}
