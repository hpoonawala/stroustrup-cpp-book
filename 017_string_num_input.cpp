

#include "std_lib_facilities.h"
int main(){
	cout << "Please enter a number as a word (all lower case):\n";
	string string_number;
	cin >>  string_number;
	if (string_number == "zero") cout << string_number << " is the number 0.\n";
	else if (string_number == "one") cout << string_number << " is the number 1.\n";
	else if (string_number == "two") cout << string_number << " is the number 2.\n";
	else if (string_number == "three") cout << string_number << " is the number 3.\n";
	else if (string_number == "four") cout << string_number << " is the number 4.\n";
	else if (string_number == "five") cout << string_number << " is the number 5.\n";
	else if (string_number == "six") cout << string_number << " is the number 6.\n";
	else if (string_number == "seven") cout << string_number << " is the number 7.\n";
	else if (string_number == "eight") cout << string_number << " is the number 8.\n";
	else if (string_number == "nine") cout << string_number << " is the number 9.\n";
	else cout << "not a number I know.\n";

	return 0;
}
