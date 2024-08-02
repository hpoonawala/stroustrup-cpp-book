#include "std_lib_facilities.h"

int main(){
	int num1; // switch to int due to a known issue for cin with MacOS clang
	string unit;
	char sw='y';
	int valid_lengths=0;
	double smol = 1e10;
	double swole = 0;
	double sum_value=0.0;
	double factor = 0.0;
	constexpr double FTtoS = 12*0.0254;
	constexpr double INtoS = 0.0254;
	constexpr double CMtoS = 0.01;
	constexpr double MtoS = 1.0;
	while(sw != '|'){
		cout << "Enter a positive integer-valued length in cm, m, in, or ft:\n";
		cin >> num1 >> unit;

		valid_lengths++;
		if (unit == "cm"){
			factor = CMtoS;
		} else if (unit == "m") {
			factor = MtoS;
		} else if (unit == "ft") {
			factor = FTtoS;
		} else if (unit == "in") {
			factor = INtoS;
		} else{ // Illegal units, don't increase sum or number of entries
			valid_lengths--;
			factor = 0.0;
			cout << "Illegal units\n" ;
		}
		sum_value +=factor*num1; // Add to the sum, using the factor to convert units
		if (num1*factor < smol) smol=num1*factor; // update smallest 
		if (num1*factor > swole) swole=num1*factor; // update largest
		// print loop info
		cout << "Smallest number: " << smol << " m";
		cout << "\nLargest number: " << swole << " m";
		cout << "\nNumber of values: " << valid_lengths;
		cout << "\n Sum of values: " << sum_value << " m.\n";
		// User input for terminating or continuing
		cout << "Enter '|' to terminate or any other key to continue:\n";
		cin >> sw ;
		cout << '\n';
		fflush(stdin);
	}
	return 0;
}
