#include "../std_lib_facilities.h"

int ga[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void fill_array(int a[], int elements){
	for (int i = 0; i < elements; ++i) {
    	a[i] = tgamma(i + 2); //using tgamma of i+1 yields i!
	}
} 

void print_array(ostream& os, int* a, int n){
	cout << "[";

	for (int i = 0; i < n; ++i)
	{
		cout << a[i];
		if(i != (n - 1)){
			cout << ", ";
		}
	}

	cout << "]\n\n";
}

//Task 3
void f(int arr[], int elements){
	int la[10];

	//copy
	for (int i = 0; i < elements; ++i)
	{			
		la[i] = arr[i];
	}

	cout << "Printing the elements of la: ";
	print_array(cout, la, 10);

	int* p = new int[elements];

	//copy
	for (int i = 0; i < elements; ++i)
	{
		p[i] = arr[i];
	}

	cout << "Printing the elements of the free-store array: ";
	print_array(cout, p, 10);

	delete[] p;
}


int main(){
	//Task 4

	cout << "Calling function f() with ga.\n";

	f(ga, 10);

	cout << "\n\n\n";

	cout << "Calling function f() with aa.\n";

	int aa[10];

	fill_array(aa, 10);

	f(aa, 10);

	return 0;
}