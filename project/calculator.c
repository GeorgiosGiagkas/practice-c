/*functions for World Health Organization Equation and Mifflin-St. Jeor Equation to calculate daily caloric needs*/
//header file
#include<stdio.h>
//prototypes
float equationWHO(char sex, int age, float weight);
float equationMSJ(char sex, int age, float weight, float height);

//main function
int main(){


  char x;//sex
  int y;//age
  float z;//weight
  float h;//height
  
  printf("Enter sex (f/m):\n");
  scanf("%c", &x);
  printf("Enter age:\n");
  scanf("%d", &y);
  printf("Enter weight in kg:\n");
  scanf("%f", &z);
  printf("Enter height in cm:\n");
  scanf("%f", &h);
  
  printf("WHO Calories calculated %0.2f\n", equationWHO(x,y,z));
  printf("MSJ Calories calculated %0.2f\n", equationMSJ(x,y,z,h));
  

  return 0;
}


float equationWHO(char sex, int age, float weight){//World Health Organization Equation

  float calories=0;
  if(sex=='f' || sex =='F'){
    if(age>=3 && age <= 9){
      calories=22.5*weight+499;
    }else if(age>=10 && age <= 17){
      calories=12.2*weight+746;
    }else if(age>=18 && age <= 29){
      calories=14.7*weight+496;
    }else if(age>=30 && age <= 60){
      calories=8.7*weight+829;
    }else if(age>60){
      calories=10.5*weight+596;
    }
  }else if(sex=='m' || sex =='M'){
    if(age>=3 && age <= 9){
      calories=22.7*weight+495;
    }else if(age>=10 && age <= 17){
      calories=17.5*weight+651;
    }else if(age>=18 && age <= 29){
      calories=15.3*weight+679;
    }else if(age>=30 && age <= 60){
      calories=11.6*weight+879;
    }else if(age>60){
      calories=13.5*weight+487;
    }
  }

  else
    return calories;


  return calories;
}


float equationMSJ(char sex, int age, float weight, float height){//Mifflin-St. Jeor Equation

  float calories=0;
  if(sex=='f' || sex =='F'){
    calories=10*weight+6.25*height-5*age-161;
  }else if(sex=='m' || sex =='M'){
    calories=10*weight+5.25*height-5*age+5;
  }
  else
    return calories;
  return calories;
}



  
