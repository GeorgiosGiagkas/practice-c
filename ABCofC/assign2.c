#include<stdio.h>

void main(){

  float basicSal,netSal,grossSal;
  printf("Enter basic salary:\n");

  scanf("%f", &basicSal);

  grossSal=basicSal + 25*basicSal/100 + 27*basicSal/100;
  netSal=grossSal - 17*grossSal/100;

  printf("Gross salary is %f, and net salary is %f.\n", grossSal, netSal);
}
