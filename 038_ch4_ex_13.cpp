// Sieve of Erastothenes 1 to 100
#include "std_lib_facilities.h"
int main(){
	int nums[100]={0}; // Initialize as 0s. We'll mark non-primes with a -1
	int cursor=1; // Cursor is the index of the smallest number (starting from 2 which has index 1) that has not been marked
	while(cursor<100){
		/* cout << "cursor: " << cursor << "\n"; */
		if(nums[cursor]==0){ // only if cursor+1 is unmarked should we mark its multiples
			for(int i=cursor*(cursor+2);i<100;i=i+cursor+1){ // Mark all multiples of number cursor+1
				/* cout << i << ","; */
				nums[i]=-1;
			}
			/* cout<<"\n"; */
		} 
		cursor++;  // move the cursor along. 
	}

	// Print the primes
	for(int i=1;i<100;i++)
		if(nums[i]==0)
			cout << i+1 <<",";
	cout<<"\n";
	return 0;
}
