#include "std_lib_facilities.h"
int main(){
	vector<int> v = {5,7,9,8,4,8};
	cout << v.size() << '\n' << &v << '\n';
	for (int i=0;i<v.size();i++){
		cout << v[i] << ',' ;
	} cout << '\n';
	for (int x: v)
		cout << x << ',';
	cout << '\n';


	vector<string> words;
	for(string temp; cin >> temp;)
		words.push_back(temp);	
	cout << "\n\n";
	sort(words);

	for (int i=0; i < words.size(); i++)
	{
		if( (i == 0 || words[i-1] != words[i]) & (words[i] != "canal") ){
			cout << words[i] << '\n';
		}
	}	

	return 0;
}
