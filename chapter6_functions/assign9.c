/*Assignment */

#include<stdio.h>
int isLeap(int);//function declaration


int main(){

  int x;//user input

 
  printf("Enter year...\t");
  scanf("%d", &x);

  if(isLeap(x)){
    printf("The year %d is leap.\n",x);
  }else {
    printf("The year %d is NOT leap.\n",x);
  }
  return 0;
}

int isLeap(int x){

  if(x%4==0){
    if(x%100==0 && x%400!=0){
      return 0;
    }
    else {
      return 1;
    }
     }
  else {
    return 0;
  }

  
}
