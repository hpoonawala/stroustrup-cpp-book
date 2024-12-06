#include "std_lib_facilities.h"

int main(){

	double sum_value=0.0;
	vector<double> temps;
	for(double temp; cin >> temp;){
		temps.push_back(temp);
		// print loop info
		sort(temps);
		if (temps.size() % 2) cout << "\nMedian temperature values: " << temps[(temps.size()-1)/2] << '\n';
		else cout << "\nMedian temperature values: " << 0.5*temps[temps.size()/2-1]+0.5*temps[temps.size()/2] << '\n';
		// User input for terminating or continuing
	}
	return 0;
}
