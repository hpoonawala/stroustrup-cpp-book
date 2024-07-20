
#include "std_lib_facilities.h"
int main(){
	int i=0;
	while(i<26){
		cout << char('a'+i) << '\t' << int('a'+i) << '\n' ;
		++i;
	}

	for(i=0;i<26;i++){
		cout << char('a'+i) << '\t' << int('a'+i) << '\n' ;
	}
	for(i=0;i<26;i++){
		cout << char('A'+i) << '\t' << int('A'+i) << '\n' ;
	}
	for(i=0;i<10;i++){
		cout << char('0'+i) << '\t' << int('0'+i) << '\n' ;
	}
	return 0;
}
