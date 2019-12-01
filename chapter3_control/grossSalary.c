/*This is calculate the gross salary of an employee.*/

#include<stdio.h>

int main(){

  int bs; //declare bs for basic salary
  float hra,cnv,ma; //declare hra for house rent allowance, cnv for convenience and ma for medical allowance
  float gs; //declare gs for gross sallary

  printf("Enter basic salary:\t");
  scanf("%d",&bs);


  //Variables are defined differently in if-block nand else-block!!!
  if(bs<2000){
    hra=30/100*bs; //??
    cnv=25/100*bs; //??
    ma=10/100*bs;  //??
  }
  else{
    hra=bs*0.4;
    cnv=bs*0.15;
    ma=500;
  }

  gs=bs+hra+cnv+ma;

  printf("The gross salary of the employee is : %10.2f\n", gs);

  return 0;


}
