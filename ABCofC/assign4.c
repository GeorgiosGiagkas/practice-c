#include<stdio.h>

void main(){
  int a,b,c,d,e;
  float total, percent;

  printf("Enter mark for subject 1\n");
  scanf("%d",&a);

  printf("Enter mark for subject 2\n");
  scanf("%d",&b);
  printf("Enter mark for subject 3\n");
  scanf("%d",&c);
  printf("Enter mark for subject 4\n");
  scanf("%d",&d);
  printf("Enter mark for subject 5\n");
  scanf("%d",&e);


  total= a+b+c+d+e;
  percent= total/5;

  printf("Total mark is %f and percentile mark is %f\n", total, percent);
}

