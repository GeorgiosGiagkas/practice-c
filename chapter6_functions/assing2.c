/*Assignment 3*/


#include<stdio.h>
#define PI 3.14

float area(float);
float circumference(float);

int main(){

  
  float x;//user input

  float ar,cr;
 
  printf("Enter radius of circle...\t");
  scanf("%f", &x);


  ar=area(x);
  cr=circumference(x);

  printf("Area of circle is: %0.3f\nCircumference of circle is: %0.2f\n",ar,cr );

}


float  area(float radius){

  float ar=PI*radius*radius;

  return ar;

}


float circumference(float radius){

  float cr=PI*2*radius;

  return cr;
}
