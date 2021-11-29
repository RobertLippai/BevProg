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

void print_vector(ostream& os, const vector<int>& v){
	cout << "<";

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i];

		if(i != (v.size() - 1)){
			cout << ", ";
		}
		
	}

	cout << ">\n\n";
}

int main()
try{
	//Task 1
	//int number = 7;
	//int* p1 = &number;

	int* p1 = new int(7); //szivárogni fog?

	//Task 2
	cout << "The value of p1: " << p1 << " the int it points to: " << *p1<< '\n';

	//Task 3
	int* p2 = new int[7] {1,2,4,8,10,13,17};

	//Task 4
	cout << "The value of p2: " << p2 << " the array it points to: ";
	print_array(cout, p2, 7);

	//Task 5
	int* p3 = p2;

	//Task 6
	delete[] p1;
	p1 = p2;

	//Task 7
	p3 = p2;

	//Task 8
	cout << "The value of p1: " << p1 << " the array it points to: ";
	print_array(cout, p1, 7);


	cout << "The value of p2: " << p2 << " the array it points to: ";
	print_array(cout, p2, 7);

	
	//Task 9
	delete[] p2;
	
	//Task 10
	p1 = new int[10] {1,2,4,8,9,72,99, 32, 29, 10};

	//Task 11
	p2 = new int[10];

	//Task 12
	for (int i = 0; i < 10; ++i)
	{
		p2[i] = p1[i];
	}
	cout << "The copied array elements: ";
	print_array(cout, p2, 10);

	delete[] p1;
	delete[] p2;

	//Task 13
	//Vectort ne a free storeban hozzuk létre
	vector<int> vector_array = {1,2,4,8,9,72,99, 32, 29, 10};

	vector<int> vector_array2(10);

	for (int i = 0; i < vector_array.size(); ++i)
	{
		vector_array2[i] = vector_array[i];
	}

	cout << "The copied array elements: ";
	print_vector(cout, vector_array2);

	return 0;
} catch (exception& e) {
    cerr << "exception: " << e.what() <<"\n";
}
catch (...) {
    cerr << "Something went wrong. \n";
}

//2. rész külön kódba
// 2. hexadecimális cím
// allocate = free storeban történjen

//valgrind-ban megnézni hogy ne legyen memóriaszivárgás
//nagyon fontos!
