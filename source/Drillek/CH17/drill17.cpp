#include "../std_lib_facilities.h"

//Task 4
void print_array10(ostream& os, int* a){
	for (int i = 0; i < 10; ++i)
	{
		cout << a[i] << '\n';
	}
}

//Task 7

void print_array(ostream& os, int* a, int n){
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << '\n';
	}
}

int main(){
	//Task 1
	int* int_array = new int[10];

	//Task 2
	for (int i = 0; i < 10; ++i)
	{
		cout << int_array[i] << '\n';
	}
	
	cout << '\n';

	//Task 3
	delete[] int_array;

	//Task 5
	int* int_array_five = new int[10] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};

	print_array10(cout, int_array_five);

	delete[] int_array_five;

	cout << '\n';

	//Task 6
	int* int_array_six = new int[11] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
	print_array10(cout, int_array_five);

	delete[] int_array_six;

	cout << '\n';

	//Task 8
	int* int_array_eight = new int[20];
	for (int i = 0; i < 20; ++i)
	{
		int_array_eight[i] = (100 + i);
	}
	
	print_array(cout, int_array_eight, 20);
	delete[] int_array_eight;
	cout << '\n';


	return 0;
}