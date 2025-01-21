

#include "std_lib_facilities.h"
int main(){
	vector<int> nums = {0,1,2,3,4,5,6,7,8,9};
	vector<string> digits = {"0","1","2","3","4","5","6","7","8","9"};
	vector<string> words = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	cout << "Please enter the binary operation you want to perform as <operation> <first number> <second number>.\nOperations are plus, minus, mul, div, +,-,*,/.\nNumbers must be single digits, either as a numeric symbol or in words. \nFor example:\nplus 4 5\nor\nmul 4 five.\n";
	string operation;
	string val1;
	string val2;
	cin >> operation;
	cin >> val1;
	cin >> val2;

	int num1=-1,num2=-1;

	// Check which number to use
	for(int i=0;i<10;i++){
		if(val1==digits[i] || val1 == words[i]){
			num1=i;
		} 
		if(val2==digits[i] || val2 == words[i]){
			num2=i;
		} 
	}
	if ((operation == "+") | (operation == "plus")) cout << "The sum of " << num1 << " and " << num2 << " is " << num1+num2 << '\n'; 
	if ((operation == "-") | (operation == "minus")) cout << "The difference of "<< num1 << " and " << num2 << " is " << num1-num2 << '\n'; 
	if ((operation == "*") | (operation == "mul")) cout << "The product of "<< num1 << " and " << num2 << " is " << num1*num2 << '\n'; 
	if ((operation == "/") | (operation == "div")) cout << "The ratio of "<< num1 << " and " << num2 << " is " << num1/num2 << '\n'; 

	return 0;
}

