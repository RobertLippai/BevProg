// g++ vector002.cpp -o "v2" -std=c++11 -fno-elide-constructors && ./v2

#include "../std_lib_facilities.h"

class My_vector {
	long unsigned int sz;
	double* elem;

	void debug(const string& s){
		cerr << this << "->" << s << "; elem ptr: " << elem << '\n';
	}
public:
	My_vector(): sz(0), elem{nullptr}{}
	explicit My_vector(int s): sz(s), elem{new double[s]}
	{
		for (int i = 0; i < s; ++i) elem[i] = 0;
		//debug("(int s) constructor");
	}
	
	My_vector(initializer_list<double> lst): sz{lst.size()}, elem{new double[sz]}
	{
		copy(lst.begin(), lst.end(), elem);
		//debug("(initializer_list<double> lst) constructor");
	}

	My_vector(const My_vector& arg):
		sz{arg.sz}, elem{new double[arg.sz]}
	{
		copy(arg.elem, arg.elem + arg.sz, elem);
		//debug("copy constructor");
	}

	My_vector& operator=(const My_vector& arg){
		double* p = new double[arg.sz];
		copy(arg.elem, arg.elem + arg.sz, p);
		delete[] elem;
		sz = arg.sz;
		elem = p;
		//debug("copy assigment");
		return *this;
	}

	//&& akkor hívodik ha mozgatunk (move)
	My_vector(My_vector&& arg): sz{arg.sz}, elem{arg.elem}
	{
		arg.sz = 0;
		arg.elem = nullptr;
		//debug("move constructor");

	}

	My_vector& operator=(My_vector&& arg)
	{
		delete[] elem;
		elem = arg.elem;
		sz = arg.sz;
		arg.elem = nullptr;
		arg.sz = 0;
		//debug("move assigment");
		return *this;

	}
	
	~My_vector() { 
		//debug("destructor");
		delete[] elem;
	}

	//double get(int n) const { return elem[n]; }
	//void set(int n, double val) { elem[n] = val; }

	double& operator[](int n){
		//cout << ("reference []\n");
		return elem[n];
	}

	//const korrektség, biztosítani kell egy operátort amin
	//keresztül nem tudjuk módosítani a vektor értékét
	double operator[](int n) const {
		//cout << ("copy []\n");
		return elem[n];
	}

	int size() const { return sz; }
};

My_vector* some_fct(){
	My_vector* myvec = new My_vector(10);	
	return myvec;
}

My_vector fill(){
	My_vector res = {12.2, 13.3, 14.4};
	
	return res;
}
int main()
{
	const My_vector v1 {12.2, 13.3, 14.4, 15.5};

	for (int i = 0; i < v1.size(); ++i){
		cout << v1[i] << ' ';
	}

	cout << '\n';

	My_vector v2(10);

	for (int i = 0; i < v2.size(); ++i)
	{
		v2[i] = i;
	}

	for (int i = 0; i < v2.size(); ++i){
		cout << v2[i] << ' ';
	}
	cout << '\n';



	return 0;
}