/* Fix the incomplete code below to get the output as per the instructions */
/* You can copy and paste the completed portion so you don't have to re-type the whole program in your answer */

    /* Your output should appear as:
        The Value of A is: 10
        The Value of B is: 25
        ----------------------
        The Value of A is: 25
        The Value of B is: 10
    */

#include<stdio.h>

void change(int*,int*);          //-- how does this prototype need to be declared?

int main()
{

    int a = 10, b = 25;
    int *ptrA,*ptrB;
    ptrA=&a;
    ptrB=&b;

    printf("The value of \"A\" is %d: \n", a);
    printf("The value of \"B\" is %d: \n", b);

    printf("------------------------------------\n");

    change(ptrA,ptrB);                //-- What parameters need to be passed to this function?

    printf("The value of \"A\" is %d: \n", a);
    printf("The value of \"B\" is %d: \n", b);

    return 0;
}

void change(int *a ,int *b)          //-- What are the function arguments and how should they be written?
{
    int temp = 0;

    temp = *a;                           
    *a = *b;                                 
    *b = temp;
}
