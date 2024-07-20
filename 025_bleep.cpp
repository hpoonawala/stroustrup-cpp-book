#include "std_lib_facilities.h"
int main(){


	vector<string> disliked = {"canal","ev"};
	for(string temp; cin >> temp;)
	{ 
		bool flag = false;
		for (string disliked_word : disliked)
			if (temp == disliked_word) {flag=true; break;}
		if (flag) cout << "BLEEP ";
		else cout << temp << " ";

	}

	return 0;
}
