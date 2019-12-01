/*If cost and selling price of a particular item is input through the keyboard, write a C program to determine whether a trader has made a profit or loss. Also print how much loss he has incurred or profit he has earned */

#include<stdio.h>

int main(){

  int cost, sp, balance; //sp for selling price
  
  printf("Enter cost:\n");
  scanf("%d",&cost);
  printf("Enter selling price:\n");
  scanf("%d",&sp);

  balance=sp-cost;

  if(balance){
    if(balance>0){
      printf("The trader has made a profit of %d\n", balance);
    }
    else{
      printf("The trader has a loss of %d\n", balance);
    }
  }
  else {
    printf("Balance is equal to 0\n");
  }

  return 0;
}
