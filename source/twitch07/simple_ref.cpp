#include "../std_lib_facilities.h"

int main(){
	
	int i = 7;

	cout << "i: " << i << '\n';
	
	int& r = i;
	r = 9;

	cout << "i: " << i << '\n';
	cout << "r: " << r << '\n';

	const int& cr = i;
	//cr = 10;

	cout << "i: " << i << '\n';
	cout << "r: " << r << '\n';
	cout << "cr: " << cr << '\n';

	i = 100;

	cout << "i: " << i << '\n';
	cout << "r: " << r << '\n';
	cout << "cr: " << cr << '\n';

	return 0;
}