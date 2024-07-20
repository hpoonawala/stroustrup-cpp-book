
#include "std_lib_facilities.h"
int main(){
	constexpr double yen_to_dollars = 0.0064;
	constexpr double kroner_to_dollars = 0.092;
	constexpr double pounds_to_dollars = 1.29;
	double currency_in;
	char unit;
	cout << "Enter a currency amount in yen, kroner, or pounds followed by a unit (y,k, or p): ";
	cin >> currency_in >> unit;
	switch(unit){
		case 'y':
			cout << currency_in << unit << " = $" << yen_to_dollars*currency_in << '\n';
			break;
		case 'k': 
			 cout << currency_in << unit << " = $" << kroner_to_dollars*currency_in << '\n';
			break;
		case 'p': 
			cout << currency_in << unit << " = $" << pounds_to_dollars*currency_in << '\n';
			break;
		default:
			cout << "Amount not recognized\n";
	}

	return 0;
}
