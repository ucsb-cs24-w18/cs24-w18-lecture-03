#ifndef DIEGAMEIMPROVED_H
#define DIEGAMEIMPROVED_H

#include <string.h>
using namespace std;

class Player{
	public:
//		Player(); // The constructor is called when an object is created
				  // It has no return type
		  		  // It always has the same name as the class
		Player(string);
		string getName() const;
		void rollDie();
		void displayDie() const; //accessor
		int getScore() const; //accessor 

	private:
		const string name_;	
		int dieOne_;
		int dieTwo_;
		int score_;
};


#endif