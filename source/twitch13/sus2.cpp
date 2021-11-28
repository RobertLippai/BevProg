#include "../std_lib_facilities.h"

vector<int>* suspicious(){

	vector<int>* p = new vector<int>;

	for (int i; cin >> i;)
	{
		//an int is true if it's not 0
		if(i) {
			// -> if we want to call a function throu a pointer we have to use the arrow
			p -> push_back(i);
		} else throw std::exception();
	}

	return p;
}

int main()
try {
	
	vector<int>* p = suspicious();
	
	for (int i = 0; i < p->size(); ++i)
	{
		cout << p->at(i) << ' ';
	}

	cout << '\n';

	//can't run if exception is thrown
	delete p;

	return 0;

} catch (std::exception& e){
	std::cerr << "Error!\n";
	return 1;
}