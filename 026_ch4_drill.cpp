#include "std_lib_facilities.h"

int main(){
	double num1=0.0;
	double smol=0.0;
	double swole= 0.0;
	string unit;
	char sw='y';
	while(sw != '|'){
		cout << "Enter a floating point number:\n";
		cin >> num1;
		if (num1 < smol) {smol = num1; cout << num1 << unit << " smallest number\n";}
		if (num1 > swole) {swole = num1; cout << num1 << unit << " largest number\n";}
		cout << "Enter '|' to terminate or any other key to continue:\n";
fflush(stdin);
		cin >> sw ;
		cout << '\n';
fflush(stdin);
	}
	return 0;
}
