#include<iostream>
#include<conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int DiceWork(int x){
	srand(time(0));	
    x=rand()%6 + 1 ;
}

int checkforWin(int x){
	if(x==100){
		return 0;
	}
	else if(x<100 ){
		return 1;
	}
}

void greater(int x,int y){
	if(x>100){
		x=x-y;
	}
}


diceGame(){
	int p1=0,p2=0,dice,loop=1,turn=1,diceNum=0,number;
	void greater(int,int);	
	do{
		system("cls");
		cout<<"First to get to hundred wins the game.\nBy getting 6 player get the turn again. -->\n\n";
		cout<<"Player 1 Score=";
		cout<<p1;
		cout<<"\n\nPlayer 2 Score=";
		cout<<p2;
		cout<<"\n\n ------------------ \n\n";	
		cout<<"Player "<<turn<< " Roll the Dice (Press 1)\n";
		cin>>dice;
		if(dice==1){
			number=DiceWork(diceNum);
			cout<<"Player "<<turn<< " got " << number;
			getch();
			if(turn==1){
				p1=p1+number;
				if(number==6){
					turn=1;
				}
				else{
					turn=2;
				}
				
				loop=checkforWin(p1);
			}
			else if(turn==2){
				p2=p2+number;
				if(number==6){
					turn=2;
				}
				else{
					turn=1;
				}
				
				loop=checkforWin(p2);
			}
			greater(p1,number);
			greater(p2,number);
		}
		else{
			"Invalid Input";
			getch();
		}
		
		
	}while(loop==1);
	if(turn==1){
		turn=2;
	}
	else{
		turn=1;
	}
	cout<<"\nPlayer " << turn << " Wins.";
}