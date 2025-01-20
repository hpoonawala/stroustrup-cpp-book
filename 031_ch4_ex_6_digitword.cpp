#include "std_lib_facilities.h"
int main(){
	vector<string> digits = {"0","1","2","3","4","5","6","7","8","9"};
	vector<string> words = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	cout << digits.size() << '\n' << &digits << '\n';
	cout << words.size() << '\n' << &words << '\n';
	string input;
	bool flag=false;
	while(true){
		// Using bisection, calculate 
		/* cout << upper << ", " << mid << ", " << lower << endl; */
		cout << "Enter a number as a single digit or a word. Enter 'exit' to stop.:\n"; 
		cin >> input ;
		if (input == "exit"){
			break;
		}
		flag = false;
		for(int i=0;i<10;i++){
			if(input==digits[i]){
				cout<< digits[i] << " in words is " << words[i]<<"\n";
				flag=true;
			} else if(input==words[i]){
				cout<< words[i] << " is the digit " << digits[i]<<"\n";
				flag=true;
			} 
		}
		if(!flag){
				cout<<"Invalid entry. Try again\n";
		}


	}

	return 0;
}
