/*Write a C program to determine whether a positive integer entered by the user is prime or not using recursion.*/

#include<stdio.h>
int isPrime(int);//prototype

int main()
{

  int x;//user input

  puts("Enter positive interger >1:...\t");
  scanf("%d", &x);
  
  
  
  if(isPrime(x)){
    puts("Is  prime...");
  }
  else {
    puts("It not prime");
  }
    
  return 0;
}






int isPrime(int n) 
{
  static int i=1;
  i++;
  // Base cases 
  if (n <= 2) 
    return (n == 2) ? 1 : 0; 
  if (n % i == 0) 
    return 0; 
  if (i * i > n){ 
    return 1; 
  }
  // Check for next divisor
  
  isPrime(n); 
} 
