

#include "std_lib_facilities.h"
int main(){
	cout << "Please enter the binary operation you want to perform as <operation> <first float> <second float>:\n";
	string operation;
	double val1;
	double val2;
	cin >> operation;
	cin >> val1;
	cin >> val2;
	if ((operation == "+") | (operation == "plus")) cout << " The sum of " << val1 << " and " << val2 << " is " << val1+val2 << '\n'; 
	if ((operation == "-") | (operation == "minus")) cout << " The difference of "<< val1 << " and " << val2 << " is " << val1-val2 << '\n'; 
	if ((operation == "*") | (operation == "mul")) cout << " The product of "<< val1 << " and " << val2 << " is " << val1*val2 << '\n'; 
	if ((operation == "/") | (operation == "div")) cout << " The ratio of "<< val1 << " and " << val2 << " is " << val1/val2 << '\n'; 

	return 0;
}
