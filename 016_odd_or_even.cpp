
#include "std_lib_facilities.h"
int main(){
	cout << "Please enter an integer value: ";
	int n;
	cin >> n;
	if (n % 2) {
		cout << n << " is odd.\n";
	}
	else
	{
		cout << n << " is even.\n";
	}

	return 0;
}
