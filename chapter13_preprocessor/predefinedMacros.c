/*predefine macros __LINE__, __FILE__, __TIME__, __DATE__*/

#include<stdio.h>

int main(){

  printf("The name of source file is: %s\n", __FILE__);
  printf("Time of compilation is: %s\n",__TIME__);
  printf("Date of compilation is %s\n",__DATE__);
  printf("This is line %d\n",__LINE__ );

  return 0;
}
