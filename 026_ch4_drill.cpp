#include "std_lib_facilities.h"

int main(){
	double num1, num2;
	char sw='y';
	while(sw != '|'){
		cout << "Enter two floating point numbers:\n";
		cin >> num1 >> num2;
		bool flag = false;
		if (num1 < num2) cout << "The smaller value is " << num1 << " and the larger value is " << num2 << ".\n";
		else if (num2 < num1) cout << "The smaller value is " << num2 << " and the larger value is " << num1 << ".\n";
		else {cout << "the numbers are equal.\n";flag=true;}
		if ((abs(num1-num2) < 1.0/100) & !flag ) cout << "the numbers are almost equal.\n";
		cout << "Press any key to enter two more floating point numbers , or press '|' to terminate:\n";
		cin >> sw;
	}
	return 0;
}
