#include "../std_lib_facilities.h"

//Task 4
void print_array10(ostream& os, int* a){
	cout << "[";

	for (int i = 0; i < 10; ++i)
	{
		cout << a[i];
		if(i != (10 - 1)){
			cout << ", ";
		}
	}

	cout << "]\n\n";
}

//Task 7

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

void print_vector(ostream& os, vector<int> v){
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

void fillArray(int a[], int elements){
	for (int i = 0; i < elements; ++i)
	{
		a[i] = (100 + i);
	}
	
}

int main(){
	//Task 1
	int* int_array = new int[10];

	//Tömbön nem működik a range for loop
	//Task 2
	cout << "Task 2:\n";

	cout << "[";

	for (int i = 0; i < 10; ++i)
	{
		cout << int_array[i];
		if(i != (10 - 1)){
			cout << ", ";
		}
	}

	cout << "]\n\n";


	
	//Task 3
	delete[] int_array;

	//Task 5
	int* int_array_five = new int[10];
	fillArray(int_array_five, 10);

	cout << "Array: Task 5:\n";
	print_array10(cout, int_array_five);

	delete[] int_array_five;


	//Task 6
	int* int_array_six = new int[11];
	fillArray(int_array_six, 11);

	cout << "Array: Task 6:\n";
	print_array(cout, int_array_six, 11);

	delete[] int_array_six;


	//Task 8
	int* int_array_eight = new int[20];
	fillArray(int_array_eight, 20);


	cout << "Array: Task 8:\n";
	print_array(cout, int_array_eight, 20);

	delete[] int_array_eight;


	//Task 5 Vector
	vector<int> vector_array_five;

	for (int i = 0; i < 10; ++i)
	{
		vector_array_five.push_back((100 + i));
	} 

	cout << "Vector: Task 5:\n";
	print_vector(cout, vector_array_five);


	//Vector Task 6
	vector<int> vector_array_six;
	for (int i = 0; i < 11; ++i)
	{
		vector_array_five.push_back((100 + i));
	} 

	cout << "Vector: Task 6:\n";
	print_vector(cout, vector_array_five);

	//Vector Task 8
	vector<int> vector_array_eight;
	for (int i = 0; i < 20; ++i)
	{
		vector_array_eight.push_back((100 + i));
	} 
	
	cout << "Vector: Task 8:\n";
	print_vector(cout, vector_array_eight);

	return 0;

}