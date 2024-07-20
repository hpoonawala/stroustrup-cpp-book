

#include "std_lib_facilities.h"
int main(){
	cout << "Please enter two floating-point numbers\n";
	float val1;
	float val2;
	cin >> val1;
	cin >> val2;
	if (val1 > val2) cout << "Larger number is: " << val1 <<".\n";
	else if (val1 < val2) cout << "Larger number is: " << val2 <<".\n";
	else cout << "Both numbers are equal.\n";
	cout << "Sum: " << val1+val2 << ".\n"; 
	cout << "Difference: " << val1-val2 << ".\n"; 
	cout << "Product: " << val1*val2 << ".\n"; 
	cout << "Ratio: " << val1/val2 << ".\n"; 

	return 0;
}
