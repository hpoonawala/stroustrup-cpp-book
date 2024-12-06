#include "std_lib_facilities.h"

int main()
{
	int upper = 100; // upper bound of current search interval
	int mid=50;		// middle integer
	int lower = 1;  // lower bound of current search interval
	cout << "Think of an integer between 1 and 100" << endl;
	char c;
	bool found = false;
	while(!found){
		// Using bisection, calculate 
		mid  = (int)((upper + lower)/2);
		/* cout << upper << ", " << mid << ", " << lower << endl; */
		cout << "Is the number larger than " << mid << "? (y/n)" << endl;
		cin >> c ;
		if ( c == 'y' ){
			if (upper == mid+1){  // when upper and middle are close, but number is larger than middle, answer must be upper
				mid++;
				found = true;
			}
			else // since number is larger, move the lower bound up to mid
				lower = mid;
		}
		else if (c == 'n')
		{  
			if (lower == mid-1 && (lower != 1) ) {// when lower and middle are close, but number is not smaller than middle, answer must be middle
				found = true;
			}
			else// since number is smaller, move the upper bound down to mid
				upper = mid;
			if (lower == 1){
			}
		}
		else{

			cout << "you entered " << c << "instead of y or n. Let's try again.";
		}
		if (found){
			cout << "The number is " << mid << endl;
		} else if (upper == lower){
			cout << "The number is " << upper << endl;
			found = true;
		}
	}
	return 0;
}
