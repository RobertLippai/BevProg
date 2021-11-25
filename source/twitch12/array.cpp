#include "../std_lib_facilities.h"

int qa[100];

int main(){
	
	char lac[100];
	int lai[100];
	double lad[100];

	lad[7] = 100;

	cout << lad[7] << '\n';

	for (int i = 0; i < 100; ++i)
	{
		lad[i] = i;
	}	

	for (int i = 0; i < 100; ++i)
	{
		cout << lad[i] << ' ';
	}

	cout << '\n';

	double* p = &lad[5];

	cout << *p << '\n';

	cout << p[2] << '\n';
	cout << p[-3] << '\n';

	p += 2;

	cout << *p << '\n';

	for(double* k = &lad[0]; k < &lad[100]; ++k){
		cout << *k << ' ';
	}
	
	cout << '\n';

	return 0;
}