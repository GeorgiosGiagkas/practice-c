#include<stdio.h>
/*this is a program to calculate the area of the circle*/

void  main(){
  int radius;
  float area;

  printf("Enter radius of a circle\n");
  scanf("%d",&radius);

  area=radius*radius*3.14; //single line comment

  printf("Area of the circle is %f\n", area);
  
}
