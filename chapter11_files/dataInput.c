/*This is a C program that asks the user for name,surname, sex, birthdate,age, height, , and creates a txt file of all entries. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct{
  int d;
  int m;
  int y;
}birthdate;

typedef struct{
  char name[30];
  char surname[30];
  char sex[30];
  int age;
  float height;
  float weight;
  birthdate bd;
}entry;

void  writeFuc(entry *, FILE *);
int main(){
  entry en[30];//array of structure entry
  char ch;//condition do/while loop
  FILE *fptr;//file pointer

  int i=0;//iteration
  do{
    printf("Enter name:\t");
    scanf("%s", en[i].name);

    printf("Enter surname:\t");
    scanf("%s", en[i].surname);

    printf("Enter sex:\t");
    scanf("%s", en[i].sex);

    printf("Enter age:\t");
    scanf("%d", &en[i].age);

    printf("Enter height in cm:\t");
    scanf("%f", &en[i].height);
  

    printf("Enter weight in kilos:\t");
    scanf("%f", &en[i].weight);

    printf("Enter birth day (example 2, for the second day of the month):\t");
    scanf("%d", &en[i].bd.d);

    printf("Enter birth month (example 3 for March):\t");
    scanf("%d", &en[i].bd.m);

    printf("Enter birth year (example 1980):\t");
    scanf("%d", &en[i].bd.y);

    i++;
    
    if(i>29){
      puts("You reached the maximum number of entries");
      break;
    }
    
    printf("Do you wish to enter another entry?(y/n)\t");
    scanf(" %c",&ch);
      
  }while(ch=='Y' || ch=='y');//condition


  
  //char cr;
  fptr=fopen("./output.txt", "w");

  /*
  fwrite(&en[0],sizeof(entry),1,fptr);

  
  if(fwrite!=0){
    printf("Contents to file written successfully\n");
  }else{
      printf("Error writing file.\n"); 
    }
  */


  int j;
  for(j=0;j<i;j++){
    writeFuc(&en[j],fptr);
    if(j!=i-1)
      fputc('\n',fptr);
  }

  
  
  /*
  while(1){
    if(cr==EOF){
      break;
    }
    else{
      fputc(cr,fptr);
    }
  }
  
  */

  
  fclose(fptr);
  /*
  int j;
  for(j=0;j<i;j++){
    printf("%s\n%s\n%s\n%d\n%0.2f\n%0.2f\n%d\n%d\n%d\n", en[j].name, en[j].surname, en[j].sex, en[j].age, en[j].height, en[j].weight, en[j].bd.d, en[j].bd.m, en[j].bd.y);
  }
  */

  

  



}


void  writeFuc(entry *ptrA, FILE *fptr){

  char delimiter[]="\t";
  char *ptrD;
  ptrD=delimiter;
  
  char *ptrN;
  ptrN=ptrA->name;
  while (*ptrN!='\0') {
    fputc(*ptrN,fptr);
    ptrN++;
  }

  fputc(*ptrD,fptr);
  
  
  char *ptrS;
  ptrS=ptrA->surname;
  while (*ptrS!='\0') {
    fputc(*ptrS,fptr);
    ptrS++;
  }


  fputc(*ptrD,fptr);
  
  
  char *ptrSx;
  ptrSx=ptrA->sex;
  while (*ptrSx!='\0') {
    fputc(*ptrSx,fptr);
    ptrSx++;
  }

  fputc(*ptrD,fptr);

  int *a;
  a=&ptrA->age;
  fprintf(fptr, "%d", *a);


  fputc(*ptrD,fptr);

  float *h;
  h=&ptrA->height;
  fprintf(fptr, "%0.2f", *h);

  fputc(*ptrD,fptr);

  float *w;
  w=&ptrA->weight;
  fprintf(fptr, "%0.2f", *w);


  fputc(*ptrD,fptr);

  birthdate *x;
  x=&ptrA->bd;
  int *xa;
  xa=&x->d;
  
  fprintf(fptr, "%d", *xa);

  fputc(*ptrD,fptr);
  
  int *xb;
  xb=&x->m;
  
  fprintf(fptr, "%d", *xb);

  fputc(*ptrD,fptr);

  int *xc;
  xc=&x->y;
  
  fprintf(fptr, "%d", *xc);
  
}
