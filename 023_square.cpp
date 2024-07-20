
#include "std_lib_facilities.h"
int square(int x) {
	int sqr = 0;
	for(int i=0;i<x;i++){
		sqr+=x;
	}
	return sqr;
}
int main(){
	int x;
	cout << "Enter an integer: ";
	cin >> x;
	cout << x <<"^2 = "<< square(x) << '\n';
	return 0;
}
