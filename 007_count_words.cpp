#include "std_lib_facilities.h"
int main(){
	int number_of_words=0;
	string previous = " ";
	string current;
	while(cin >> current){ // NOTE: a space defines a new string
		++number_of_words;
		if (previous == current){
			cout << "word number: " << number_of_words 
				<< " repeated word:" << current << "\n";
		}
		previous = current;
	}

	return 0;
}
