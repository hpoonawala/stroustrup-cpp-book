

#include "std_lib_facilities.h"
int main(){

	cout << "How many pennies do you have?\n";
	int total = 0; 
	int pennies;
	cin >> pennies;
	total += pennies;
    
	cout << "How many nickels do you have?\n";
	int nickels;
	cin >> nickels;
	total += 5*nickels;
    
	cout << "How many dimes do you have?\n";
	int dimes;
	cin >> dimes;
	total += 10*dimes;
    
	cout << "How many quarters do you have?\n";
	int quarters;
	cin >> quarters;
	total += 25*quarters;
    
	cout << "How many half_dollars do you have?\n";
	int half_dollars;
	cin >> half_dollars;
	total += 50*half_dollars;

	cout << "You have "; 
	if (pennies == 1) cout << "1 penny.\n";
	else cout << pennies <<" pennies.\n";
    
	cout << "You have "; 
	if (nickels == 1) cout << "1 nickel.\n";
	else cout << nickels <<" nickels.\n";
    
	cout << "You have "; 
	if (dimes == 1) cout << "1 dime.\n";
	else cout << dimes <<" dimes.\n";
    
	cout << "You have "; 
	if (quarters == 1) cout << "1 quarter.\n";
	else cout << quarters <<" quarters.\n";
    
	cout << "You have "; 
	if (half_dollars == 1) cout << "1 half dollar.\n";
	else cout << half_dollars <<" half dollars.\n";
   

	/* if (total > 1) cout << "The value of all your coins is " << total << " cents.\n"; */
	/* else  cout << "The value of all your coins is " << total << " cent.\n"; */

	if (total > 1) cout << "The value of all your coins is $" << total/100 <<".";
	if ((total % 100) < 10) cout << "0";
	cout << total % 100  << ".\n";
	return 0;
}
