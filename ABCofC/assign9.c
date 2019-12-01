#include<stdio.h>

void main(){
  int num, a1, a2, a3, a4,a5, b1, b2, b3, b4,b5;

  printf("Enter five-digit number:\n");
  scanf("%d",&num);
  
  a1=num%10;//6th digit
  b1=num/10;

  a2=b1%10;//5th digit
  b2=b1/10;

  a3=b2%10;//4th digit
  b3=b2/10;

  a4=b3%10;//3th digit
  b4=b3/10;

  a5=b4%10;//2th digit
  b5=b4/10;

  


  printf("Reverse is %d%d%d%d%d%d\n", a1,a2,a3,a4,a5,b5);
}
