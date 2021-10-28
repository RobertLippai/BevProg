#include "../std_lib_facilities.h"

int f(int x){
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