#include "../std_lib_facilities.h"

int main(){
	string previous = "";

	string current;

	while(cin >> current){
		if(current == previous){
			cout << "repeating words: " << current << "\n";
		}
		previous = current;
	}

	return 0;
}