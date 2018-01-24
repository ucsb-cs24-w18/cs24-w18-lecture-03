//dieGame.cpp
//Diba Mirza
// Simple game of die using OOP
// Frequency AC

#include <iostream>
#include <string.h>
#include <time.h>
#include "dieGameImproved.h"

using namespace std;


int main(){
	Player p1("Charles"), p2("Harvey");
//	Player p3;
	string winner;
	char play;
	srand(time(0));

	do{
		p1.rollDie();
		p2.rollDie();
		p1.displayDie();
		p2.displayDie();

		if(p1.getScore() == p2.getScore()){
			cout<<"It's a Tie!"<<endl;
		}else{
			winner = p1.getScore()> p2.getScore()? p1.getName():p2.getName();
			cout<<winner<<" wins!!!"<<endl;
		}
		cout<<"Play again? (y/n) : ";
		cin>>play;

	}while(play == 'y');

  
  return 0;
}