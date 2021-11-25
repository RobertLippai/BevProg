#include "../std_lib_facilities.h"

class My_vector {

	int sz;
	double* elem;

	void debug(const string& s){
		cerr << this << "->" << s << " elem ptr: " << elem << '\n';
	}
	
public:
	My_vector(int s): sz{s}, elem{new double[s]}
	{
		for(int i = 0; i < sz; ++i) elem[i] = 0;
	}

	~My_vector() { delete[] elem; }

	double get(int n) const { return elem[n]; }
	void set(int n, double d) { elem[n] = d; } 

	int size() const { return sz; }
};

My_vector* some_fct(){
	My_vector* myvec = new My_vector(10);	
	return myvec;
}

int main(){
	
	
	My_vector mv(10);

	cout << mv.size() << '\n';

	for (int i = 0; i < mv.size(); ++i)
	{
		mv.set(i, i * 0.5);
	}

	for (int i = 0; i < mv.size(); ++i)
	{
		cout << mv.get(i) << ' ';
	}

	cout << '\n';

	My_vector* myptr = some_fct();

	cout << myptr->size() << '\n';

	//delete myptr;

	return 0;
}