#include<stdio.h>

void main(){
  float meters,feet,inches,centim;
  int kilo;
  printf("Enter kilometers:\n");
  scanf("%d",&kilo);

  meters=kilo*1000;
  feet=meters*3.28084;
  centim=meters*100;
  inches=meters*39.3701;

  printf("%d kilometers is: %f meters, %f centimeters, %f feet, and %f inches.\n", kilo, meters, centim, feet, inches);
    
}
