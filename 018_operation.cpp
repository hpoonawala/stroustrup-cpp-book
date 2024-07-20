


#include "std_lib_facilities.h"
int main(){
	cout << "Please enter the binary operation you want to perform as <operation> <first float> <second float>:\n";
	string operation;
	float val1;
	float val2;
	cin >> operation;
	cin >> val1;
	cin >> val2;
	if ((operation == "+") | (operation == "plus")) cout << val1 << " + " << val2 << " = " << val1+val2 << '\n'; 
	if ((operation == "-") | (operation == "minus")) cout << val1 << " - " << val2 << " = " << val1-val2 << '\n'; 
	if ((operation == "*") | (operation == "mul")) cout << val1 << " * " << val2 << " = " << val1*val2 << '\n'; 
	if ((operation == "/") | (operation == "div")) cout << val1 << " / " << val2 << " = " << val1/val2 << '\n'; 

	return 0;
}
