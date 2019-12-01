/*C program to calculate World Health Organization Equation and Mifflin-St. Jeor Equation daily caloric needs. Store file of diefferent individuals(entries).*/


//header file
#include<stdio.h>
#include<stdlib.h>
//include user defined function file
#include "calculator_functions.c"


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



//prototypes
void printMenu();
entry*  addEntry(entry *array, entry *add_array, int *count);



///////////main function
int main(){

  entry *array=NULL;//null pointer
  //entry **ptrA;
  //ptrA=&array;
  entry *add_array=NULL;
  //entry **ptrB;
  //ptrB=&add_array;
  
  
  int count=0;//number of array entries
  int *ptrC;//pointer to counter
  ptrC=&count;




  
  int action;//user input for taking action
  int quit=1;//0 for quiting program
  
  do{
    printMenu();
    scanf(" %d", &action);

    switch(action){
    case 1:{
      count++;
      array=addEntry(array,add_array,ptrC);
      break;
    }
    case 2:{
      printf("%p\n", array );
      printf("Counter:%d, array name index 0: %s\n", count, array[0].name);
      puts("Name\tSurname\tSex\tAge\tWeight\tHeight\tCaloriesWHO\tCaloriesMSJ");
      int i;//counter,index

      for(i=0;i<count;i++){
    
	printf("%s\t%s\t%c\t\%d\t%0.2f\t%0.2f\t%0.2f\t%0.2f\n",array[i].name, array[i].surname, array[i].sex, array[i].age, array[i].weight,array[i].height, array[i].caloriesWHO, array[i].caloriesMSJ);
      }            
      break;
    }
    case 3:{
      printMenu();
      break;
    }
    case 4:{
      printf("Terminating program.......\n");
      quit=0;
      break;
    }
    default:{
      printMenu();
      break;
    }

    }
  }while(quit);

  
  free(array);//deallocate momory heap
  return 0;
}





void printMenu(){//function definition
  printf("Take action:\n\t1.Insert a new entry.\n\t2.Delete an existing entry.\n\t3.Insert a new entry.\n\t4.Print data to screen.\n\t5.Save data to txt file.\n\t6.Read data from txt file.\n\t7.Print menu.\n\t8.Terminate program.\n");
}



entry* addEntry(entry *array, entry *add_array, int *count){//function definition    
    
    add_array=realloc(array, *count*sizeof(entry));//dynamic memory allocation
    array=add_array;

    printf("%p\n", array );
    
    printf("Enter name:\n");
    scanf("%s", array[*count-1].name);
    printf("Enter surname:\n");
    scanf("%s", array[*count-1].surname);
    printf("Enter sex (f/m):\n");
    scanf(" %c", &array[*count-1].sex);
    printf("Enter age:\n");
    scanf("%d", &array[*count-1].age);
    printf("Enter weight in kg:\n");
    scanf("%f", &array[*count-1].weight);
    printf("Enter height in cm:\n");
    scanf("%f", &array[*count-1].height);
    array[*count-1].caloriesWHO=equationWHO(array[*count-1].sex, array[*count-1].age, array[*count-1].weight);
    array[*count-1].caloriesMSJ=equationMSJ(array[*count-1].sex, array[*count-1].age, array[*count-1].weight,array[*count-1].height);

    return array;//retrurn pointer to update array outside function 
}

