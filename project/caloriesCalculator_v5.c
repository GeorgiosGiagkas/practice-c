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
void writeData(entry*,FILE*);


///////////main function
int main(){

  FILE *fptr;//pointer to file
  entry *array=NULL;//null pointer
  entry *add_array=NULL;
  
  
  int count=0;//number of array entries
  int *ptrC;//pointer to counter
  ptrC=&count;
  
  int action;//user input for taking action
  int quit=1;//0 for quiting program
  
  do{
    printMenu();
    scanf(" %d", &action);

    switch(action){

    case 1:{//insert entry
      count++;
      array=addEntry(array,add_array,ptrC);
      break;
    }

      
      
    case 2:{//print data     
      puts("Name\tSurname\tSex\tAge\tWeight\tHeight\tCaloriesWHO\tCaloriesMSJ");
      int i;//counter,index

      for(i=0;i<count;i++){
    
	printf("%s\t%s\t%c\t\%d\t%0.2f\t%0.2f\t%0.2f\t%0.2f\n",array[i].name, array[i].surname, array[i].sex, array[i].age, array[i].weight,array[i].height, array[i].caloriesWHO, array[i].caloriesMSJ);
      }            
      break;
    }

      
    case 3:{//write file
      fptr=fopen("outputFile.txt", "w");
      int j;
      for(j=0;j<count;j++){
	writeData(&array[j],fptr);
	if(j!=count-1)
	  fputc('\n',fptr);
      }
      fclose(fptr);
      puts("File has been saved succesfully!");      
      break;
    }

    case 4:{//read file
      fptr=fopen("outputFile.txt","r");
      if(fptr==NULL){
	puts("No file to read from.");
	break;
      }

      printf("Reading output.txt file........\n");
      printf("----------------------------------------------------------------------\n\n");
      char chA;
      while(1){
	chA=fgetc(fptr);//gets character and removes poiter 1 position
	
	if(chA==EOF){//End Of File(EOF) character
	  printf("\n----------------------------------------------------------------------\n\n");
	  break;
	}
	printf("%c",chA);
      }
	

      fclose(fptr);
      break;
    }
      
    case 5:{//print menu
      break;
    }
    case 6:{
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
  printf("Take action:\n\t1.Insert a new entry.\n\t2.Print data to screen.\n\t3.Save data to txt file.\n\t4.Read data from txt file.\n\t5.Print menu.\n\t6.Terminate program.\n");
}



entry* addEntry(entry *array, entry *add_array, int *count){//function definition    
    
    add_array=realloc(array, *count*sizeof(entry));//dynamic memory re-allocation
    array=add_array;
    
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

void writeData(entry *ptr, FILE *fptr){//write entry to file

  //char delimiter[]='\t';
  //char *ptrDel;//pointer to delimiter
  //ptrDel=delimiter;

  //name
  char *ptrName;
  ptrName=ptr->name;
  while(*ptrName!='\0'){
    fputc(*ptrName,fptr);
    ptrName++;
  }

  fputc('\t',fptr);

  //surname
  char *ptrSurname;
  ptrSurname=ptr->surname;
  while(*ptrSurname!='\0'){
    fputc(*ptrSurname,fptr);
    ptrSurname++;
  }

  fputc('\t',fptr);

  //sex
  char *ptrSex;
  ptrSex=&ptr->sex;
  fputc(*ptrSex, fptr);

  fputc('\t', fptr);
  

  //age
  int *a;
  a=&ptr->age;
  fprintf(fptr, "%d", *a);

  fputc('\t', fptr);


  //weight
  float *w;
  w=&ptr->weight;
  fprintf(fptr, "%0.2f", *w);

  fputc('\t', fptr);

  //height
  float *h;
  h=&ptr->height;
  fprintf(fptr, "%0.2f", *h);

  fputc('\t', fptr);

  //who
  float *who;
  who=&ptr->caloriesWHO;
  fprintf(fptr, "%0.2f", *who);

  fputc('\t', fptr);


  
  //msj
  float *msj;
  msj=&ptr->caloriesMSJ;
  fprintf(fptr, "%0.2f", *msj);

  fputc('\t', fptr);




  
}
