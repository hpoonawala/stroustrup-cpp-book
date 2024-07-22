#include "std_lib_facilities.h"

int main(){
	int num1, num2;
	char sw='y';
	while(sw != '|'){
		cout << "Enter two integers:\n";
		cin >> num1 >> num2;
		if (num1 < num2) cout << "The smaller value is " << num1 << " and the larger value is " << num2 << ".\n";
		else if (num2 < num1) cout << "The smaller value is " << num2 << " and the larger value is " << num1 << ".\n";
		else cout << "the numbers are equal.\n";
		cout << "Press any key to continue entering two integers , or press '|' to terminate:\n";
		cin >> sw;
	}
	return 0;
}
