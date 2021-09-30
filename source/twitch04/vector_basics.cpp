#include "../std_lib_facilities.h"

int main(){

	vector<int> v = {1, 2, 3, 4, 5};

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << "\n";
	}

	vector<string> philosophers = {"Kant", "Plato", "Hume"};

	//range for loop
	
	for (string name : philosophers)
	{
		cout << name << "\n";
	}

	vector<double> dv;

	cout << "dv size: " << dv.size() << '\n';

	dv.push_back(0);
	dv.push_back(1);
	dv.push_back(25.5);

	cout << "dv size: " << dv.size() << '\n';

	for (auto value : dv){
		cout << value << '\n';
	}

	return 0;
}