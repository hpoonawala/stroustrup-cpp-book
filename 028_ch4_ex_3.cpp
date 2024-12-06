#include "std_lib_facilities.h"

int main(){
	int valid_lengths=0;
	double smol = 1e10;
	double swole = 0;
	double sum_value=0.0;
	vector<double> lengths;
	for(double temp; cin >> temp;){
		lengths.push_back(temp);
		valid_lengths++;
		if (temp < smol) smol=temp; // update smallest 
		if (temp > swole) swole=temp; // update largest
		// print loop info
		sum_value+=temp;
		cout << "\nSmallest number: " << smol ;
		cout << "\nLargest number: " << swole;
		cout << "\nNumber of values: " << valid_lengths;
		cout << "\n Average of values: " << (sum_value/valid_lengths) << '\n';
		// User input for terminating or continuing
	}
	return 0;
}
