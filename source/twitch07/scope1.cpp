#include "../std_lib_facilities.h"

void f(int x){
	int z = x + 7;
	x += 10;

	cout << "Z in f:" << z << " X in f: " << x << '\n';
}

int g(int x){
	int z = x + 2;

	cout << "Z in g:" << z << " X in g: " << x << '\n';

	return 2 * z;
}

int main(){
	
	int z = 10;

	cout << "Z in main: " << z << '\n';

	f(z);

	cout << "Z in main: " << z << '\n';

	int x = g(z);

	cout << "X in main: " << x << '\n';

	return 0;
}