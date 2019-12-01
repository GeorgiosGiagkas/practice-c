/*Assignment 7*/

#include <stdio.h>

int main()
{
  int n,numA,numB, num = 0;

    //Reading a number from user
    printf("Enter any number to print in words: ");
    scanf("%d", &n);


    //count number of digits in original number
    int countA=0;
    numA=n;
    while(numA!=0){
      numA=numA/10;
      countA++;
    }
      

    while(n != 0)//reverse number
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }



    //count number of digits in reverse number
    int countB=0;
    numB=num;
    while(numB!=0){
      numB=numB/10;
      countB++;
    }
     

    int z=countA-countB;//difference in number of digits betweein reverse and original input

    
    //print corresponding digit in words till num becomes 0
    while(num != 0)
    {
        switch(num % 10)
        {
            case 0: printf("zero ");
                break;
            case 1: printf("one ");
                break;
            case 2: printf("two ");
                break;
            case 3: printf("three ");
                break;
            case 4: printf("four ");
                break;
            case 5: printf("five ");
                break;
            case 6: printf("six ");
                break;
            case 7: printf("seven ");
                break;
            case 8: printf("eight ");
                break;
            case 9: printf("nine ");
                break;
        }

        num = num / 10;
    }
    if(z>0){
      int i;//count
      for(i=1;i<=z;i++){
	printf("zero ");
      }
    }
    printf("\n");
    return 0;
}
