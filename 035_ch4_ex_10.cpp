#include "std_lib_facilities.h"
int main(){
	vector<int> program_plays={0,0,1,2,1,0,1,1,0,0,2,0};
	vector<string> words = {"rock","paper","scissors"};
	string input;
	int player=-1;
	int playcount=0;
	int program=-1;

	while(true){
		cin >> input;

		// Convert string to integer in {0,1,2}
		if(input == "rock"){
			player=0;
		} else if (input=="paper"){
			player=1;
		} else if (input=="scissors"){
			player=2;
		} else{
			cout <<"invalid entry.";
			break;
		}

		// Get next choice by program
		program = program_plays[playcount];

		//If you want to confirm output
		cout << "you: " << input << ", computer: " << words[program] << endl;

		// The difference between player, program in {0,1,2} determines who wins
		switch(player-program){
			case 0: 
				cout << "draw";
				break;
			case 1:
			case -2:
				cout << input << " beats " << words[program] << ", you win!";
				break;
			case 2:
			case -1:
				cout <<words[program] << " beats " << input << ", computer wins.";
				break;
			default:
				cout <<"invalid condition.";
		}
		cout << "\n";
		playcount++;
		// roll around counter. maybe also playcount = playcount % program_plays.size()
		if(playcount==program_plays.size()){
			playcount=0;
		}
	}
	return 0;

}
