#include "std_lib_facilities.h"
int main(){
	int n=1;
	int count=1;
	while(n<1000000000){
		n*=2;
		cout << n <<"\n";
		count++;

	}
	cout << count <<" squares needed.";
	
}
