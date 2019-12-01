/*Write a C program for a match-stick game between the computer and a user. Being a programmer you should ensure and write a code in such a way that computer always wins. Rules for the game are as follows:

There are 21 match sticks. 
The computer asks the player to pick 1, 2, 3 or 4 match-sticks
After the player picks, the computer does it picking
Whoever is forced to pick up the last match-stick loses the game  
*/


#include<stdio.h>

int main(){

  printf("Welcome to this match-stick game!!!\n");
  printf("There are 21 match sticks. The purpose of the game is force the computer to take the last match-stick!\n");

  int x,y; // x for user, y for computer
  int rm=21; //remaining matches


  while(rm>0){
    printf("Pick 1,2,3 or 4 match-sticks...\n");
    scanf("%d",&x);
    if(x!=1&&x!=2&&x!=3&&x!=4){
      continue;
      }
    rm-=x;

    printf("You picked %d match-sticks, %d remain\n", x,rm);

    for(y=1;y<=4;y++){
      if((rm-y!=4)&&(rm-y!=3)&&(rm-y!=2)){
	break;
      }

    }

    rm-=y;

    printf("Computer picked %d match-sticks, %d remain\n", y,rm);

  }

  printf("Game Over!\nThank you for playing...\n");
}
