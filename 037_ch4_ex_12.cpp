#include "std_lib_facilities.h"
int main(){
	cout << "Enter an integer greater than 0: ";
	int nmax;
	cin >> nmax;

	vector<int> primes={2};
	bool isprime = true;
	int i=3;
	while(i<=nmax){
		isprime=true; 
		for (int j=0;j<primes.size();j++){
			if( (i % primes[j] == 0)){ // check divisibility using mod
				isprime=false; // if divisible, isprime should be false
			}
			/* cout << "current num: " << i <<  ", current prime: " << primes[j] << ",\t n \% p: " << i % primes[j] << ".\t is prime? " << isprime << "\n"; */ 
		}
		if(isprime){ // if isprime never made false, it is a prime, add to primes vector
			primes.push_back(i);
		}
		i++;
	}
	// print primes identified
	for(int p: primes)
		cout << p <<",";
	cout<<"\n";
	return 0;
}
