#include "../std_lib_facilities.h"

int main(){

	double cm_per_inch = 2.54;

	double length = 1;

	while(length != 0){

		cout << "Please enter a value in inch:\n";
		cin >> length;
		cout << "Length in cm:" << length * cm_per_inch << "\n"; 
	}


	return 0;
}