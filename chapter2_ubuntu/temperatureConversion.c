/*this is a C program to convert degree Fahrenheit into degree Centigrade of a city */

#include<stdio.h>
int main(){

  float c,f;  //c for Centigrade and F for Fahrenheit

  printf("\"Enter temperature in degree Fahrenheit\":\n");
  scanf("%f", &f);
  
  c=(f-32)*5/9;

  printf("Temperature in Centigrade is %0.3f\n\n", c); // 0.3f for 3 decimal digits

  return 0;
}
