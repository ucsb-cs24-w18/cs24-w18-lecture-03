//dieGame.cpp
//Diba Mirza
// Simple game of die using OOP
// Frequency AC

#include <iostream>
#include <string.h>
#include <time.h>
#include "dieGameImproved.h"

using namespace std;


Player::Player(string name):name_(name), score_(10){
//	name_ = name;
//	score_= 0;

}

string Player::getName() const{
	return name_;
}

void Player::rollDie(){
	dieOne_ = rand()%6 + 1;
	dieTwo_ = rand()%6 + 1;
	if ( dieOne_ == dieTwo_){
		score_= 4*dieOne_;
	}else{
		score_= dieOne_ + dieTwo_;
	}

}

void Player::displayDie() const{
	cout<<name_<<"'s die values are: ";
	cout<<"("<< dieOne_<<", "<<dieTwo_<<")\n";
}

int Player::getScore() const{
	return score_;
}


