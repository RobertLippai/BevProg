#include "../std_lib_facilities.h"

int main(){
	
	double* a = new double;
	double* b = new double(0);

	cout << "a==" << a << " *a==" << *a << '\n';
	cout << "b==" << b << " *b==" << *b << '\n';
	
	double* c = new double[4];

	for (int i = 0; i < 4; ++i)
	{
		cout << c[i] << ' ';
	}
	cout << '\n';

	int* d2 = new int[4];

	cout << d2[2] << '\n';
	cout << d2[100] << '\n';
	cout << d2[-3] << '\n';
	cout << '\n';

	double* e = new double[4] {1.1, 2.2, 3.3, 4.4};

	for (int i = 0; i < 4; ++i)
	{
		cout << e[i] << '\n';
	}
	cout << '\n';

	double* d0 = nullptr;
	cout << d0 << '\n';


	return 0;
}