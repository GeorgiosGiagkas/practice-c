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

  char again;//inserting entry
  int count=1;//number of array entries
  
  do{
    
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

    printf("Whould you like to enter again?(y/n)\n");
    scanf(" %c", &again);

    if(again=='y'||again=='Y')
      count++;
    
  }while(again=='y'||again=='Y');

  
  puts("Name\tSurname\tSex\tAge\tWeight\tHeight\tCaloriesWHO\tCaloriesMSJ");
  int i;//counter,index

  for(i=0;i<count;i++){
    
  printf("%s\t%s\t%c\t\%d\t%0.2f\t%0.2f\t%0.2f\t%0.2f\n",array[i].name, array[i].surname, array[i].sex, array[i].age, array[i].weight,array[i].height, array[i].caloriesWHO, array[i].caloriesMSJ);
  }
  



  
  free(array);//deallocate momory heap
  return 0;
}
