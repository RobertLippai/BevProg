#include "../std_lib_facilities.h"

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
int main(){
	//Task 1
	int* number = new int(7);
	int* p1 = number;

	//Task 2
	cout << "The value of p1: " << p1 << " the int it points to: " << *p1<< '\n';

	//Task 3
	int* array_of_ints = new int[7] {1,2,4,8,10,13,17};
	int* p2 = array_of_ints;

	//Task 4
	cout << "The value of p2: " << p2 << " the array it points to: ";
	print_array(cout, p2, 7);

	//Task 5
	int* p3 = p2;

	//Task 6
	p1 = p2;

	//Task 7
	p3 = p2;

	//Task 8
	cout << "The value of p1: " << p1 << " the array it points to: ";
	print_array(cout, p1, 7);


	cout << "The value of p2: " << p2 << " the array it points to: ";
	print_array(cout, p2, 7);


	//Task 9
	delete number;
	delete p1;
	delete[] p2;
	delete[] array_of_ints;

	//Task 10
	int* s = new int[10] {1,2,4,8,9,72,99};
	int* p1 = s;

	/*int* s = new int[10];
	int* p2 = s;

	cout << p1 << " " << p2 << "\n";*/


	return 0;
}

//2. rész külön kódba
// 2. hexadecimális cím
// allocate = free storeban történjen

//valgrind-ban megnézni hogy ne legyen memóriaszivárgás
//nagyon fontos!
//12 for cikclus az értékeket másoljuk
//vector-t ne a free storeba hozzuk létre.


/*
10. Allocate an array of ten int s; initialize it to 1, 2, 4, 8, etc.; and assign its
address to a variable p1 .
11. Allocate an array of ten int s, and assign its address to a variable p2 .
12. Copy the values from the array pointed to by p1 into the array pointed to
by p2 .
13. Repeat 10–12 using a vector rather than an array.

*/