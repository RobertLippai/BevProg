#include "../std_lib_facilities.h"

vector<int> gv = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void fill_vector(vector<int>& arr, int elements){
	for (int i = 0; i < elements; ++i) {
    	arr.push_back(tgamma(i + 2)); //using tgamma of i+1 yields i!
    	//cout << "arr[i]: " << arr[i] << '\n';
	}
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

void f(vector<int> arr){
	vector<int> lv (arr.size());

	//copy
	lv = arr;

	print_vector(cout, lv);

	vector<int> lv2 = arr;

	print_vector(cout, lv2);
}

int main(){
	//Task 4

	cout << "Calling function f() with gv.\n";

	f(gv);

	cout << "\n\n\n";

	cout << "Calling function f() with vv.\n";

	vector<int> vv;

	fill_vector(vv, 10);

	f(vv);

	return 0;
}