


#include "std_lib_facilities.h"
int main(){
	cout << "Please enter three integer numbers\n";
	int val1;
	int val2;
	int val3;
	cin >> val1;
	cin >> val2;
	cin >> val3;
	int temp;
	if (val2 < val1){
		temp = val1;
		val1 = val2;
		val2 = temp;
	}
	if (val3 < val2){
		temp = val2;
		val2 = val3;
		val3 = temp;
	}
	if (val2 < val1){
		temp = val1;
		val1 = val2;
		val2 = temp;
	}
	cout << val1 <<", " << val2 << ", " << val3 << '\n';

	return 0;
}
