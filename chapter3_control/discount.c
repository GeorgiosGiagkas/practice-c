/*calculate total bill amount considering discount if applicable*/

#include<stdio.h>

int main(){

  int quantity, discount = 0; // define 0 value, NOT garbage value
  float rate;            //rate per book
  float total;           // total billed amount


  printf("Enter quantity of notebooks\t");
  scanf("%d",&quantity);
  printf("Enter rate of 1 notebook\t");
  scanf("%f",&rate);

  if(quantity>100)
    discount=10;

  total=(quantity*rate)-(quantity*rate*discount/100);  // second part is 0 if statement is false. Caution garbadge value if discount variable is not defined!!

  printf("Total billed amount is %10.2f \n",total);






}
