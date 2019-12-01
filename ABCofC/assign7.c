#include<stdio.h>

void main(){
  int centigrade, fahrenheit;

  printf("Enter temperature in centigrade:\n");
  scanf("%d",&centigrade);

  fahrenheit= centigrade*1.8+32;

  printf("%d Celcius is %d fahrenheit\n", centigrade ,fahrenheit);

}
