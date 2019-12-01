/*Write a program to convert and print given time in seconds into hours, minutes and seconds. For example if number of seconds entered are 90001 then output printed should be 25:00:1 and if 34 is entered by the user then output should be 0:0:34.*/

#include<stdio.h>

int main(){

  int s,m,h,rms; //s for seconds, m for minutes, h for hours, rms for remaining seconds.

  printf("Enter time is seconds: \n");
  scanf("%d", &s);

  h=s/3600;
  rms=s%3600;
  m=rms/60;
  rms=rms%60;
  
  printf("Time is %d:%d:%d\n", h,m,rms);

  return 0;

}
