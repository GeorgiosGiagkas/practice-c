#include<stdio.h>

void main(){

  int radius;
  float area, circumference;

  printf("Enter radius:\n");
  scanf("%d",&radius);

  area= 3.14*radius*radius;
  circumference= 2*3.14*radius;

  printf("The area of the circle is: %f and the circumference is: %f\n", area, circumference);



}
