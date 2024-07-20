

#include "std_lib_facilities.h"
int main(){
	string first_name;
	string friend_name;
	char friend_sex;
	int age;
	cout << "Enter the name of the person you want to write to\n";
	cin >> first_name;
	cout << "Enter the name of a friend you mention\n";
	cin >> friend_name;
	cout << "What is your friend's gender (m/f/n)?\n";
	cin >> friend_sex; // need error checking
	cout << "What is your friend's age?\n";
	cin >> age;
	if ((age < 0) | (age > 110)) simple_error("you're kidding!");
	/* cin >> age; */
	cout << "Dear " <<first_name << ",\n" ;
	cout <<"    How are you? I am well. ";
	cout << "Have you seen " <<friend_name << " in a while? ";
	cout << "If you see "<< friend_name << " please ask ";
	if (friend_sex == 'm')
		cout << "him ";
	if (friend_sex == 'f')
		cout << "her";
	if (friend_sex == 'n')
		cout << "them";
	cout << " to call me. ";
	if (age <12) cout << "Next year you will be " << age+1 <<".\n";
	else if (age == 17) cout << "Next year you will be able to vote.\n";
	else if (age >70) cout << "I hope you are enjoying retirement.\n";
	else cout <<'\n';
	cout <<"Yours sincerely,\n\n\nHasan Poonawala.\n";


	return 0;
}
