#include "../std_lib_facilities.h"

int f(const int& x){ //ezen a referencián keresztül ne tudjuk módositani
	x = x + 1;
	return x;
}

int main(){
	
	int xx = 42;

	cout << f(xx) << '\n';
	cout << xx << '\n';
	
	int yy = 420;

	cout << f(yy) << '\n';
	cout << yy << '\n';

	return 0;
}