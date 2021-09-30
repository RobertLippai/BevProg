#include "../std_lib_facilities.h"

int main(){

	constexpr double cm_per_inch = 2.54;

	double length = -1;
	char unit = 0;

	cout << "Please enter a length in cm pr in (c/i)\n";
	cin >> length >> unit;

	switch(unit){
		case 'i':
			cout << "length is " << length * cm_per_inch << "\n";
			break;
		case 'c':
			cout << "length is " << length/cm_per_inch << "\n";
			break;
		default:
			cout << "Unsupported unit!\n";
			break;
	}
	return 0;
}