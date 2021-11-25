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

void fillArray(int a[], int elements){
	for (int i = 0; i < elements; ++i)
	{
		a[i] = (100 + i);
	}
	
}

//implement fillVector

void fillVector(vector <int>& a, int elements){
	for (int i = 0; i < elements; ++i)
	{
		a.push_back((100 + i));
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
	cout << "Task 5 [Array]:\n";

	int* int_array_five = new int[10];
	fillArray(int_array_five, 10);

	print_array10(cout, int_array_five);

	delete[] int_array_five;


	//Task 6
	cout << "Task 6 [Array]:\n";

	int* int_array_six = new int[11];
	fillArray(int_array_six, 11);

	print_array(cout, int_array_six, 11);

	delete[] int_array_six;


	//Task 8
	cout << "Task 8 [Array]:\n";

	int* int_array_eight = new int[20];
	fillArray(int_array_eight, 20);

	print_array(cout, int_array_eight, 20);

	delete[] int_array_eight;



	//
	// Vector Task 10
	//

	//Task 5 Vector
	cout << "Task 5 [Vector]:\n";

	vector<int> vector_array_five;

	fillVector(vector_array_five, 10);

	print_vector(cout, vector_array_five);



	//Vector Task 6
	cout << "Task 6 [Vector]:\n";

	vector<int> vector_array_six;

	fillVector(vector_array_six, 11);

	print_vector(cout, vector_array_five);

	//Vector Task 8
	cout << "Task 8 [Vector]:\n";

	vector<int> vector_array_eight;

	fillVector(vector_array_eight, 20);
	
	print_vector(cout, vector_array_eight);

	return 0;

}