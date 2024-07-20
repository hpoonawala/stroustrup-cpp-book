
#include "std_lib_facilities.h"
int main(){
	cout << "Enter the number of miles:\n";
	double miles;
	double kilometers;
	cin >> miles;
	if (miles <= 0.0) simple_error("Invalid distance");;
	cout << miles <<" miles is "<< miles*1.609 << " km.\n";
	return 0;
}
