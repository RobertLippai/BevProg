# include "my.h"
# include "../../std_lib_facilities.h"

int foo;

void print_foo(){
	cout << foo << '\n';
}

void print(int i){
	cout << i << '\n';
}

void swap_v(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << "The value of X: " << a << " The value of Y: " << b << '\n';
}
void swap_r(int& a, int& b){
	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << "The value of X: " << a << " The value of Y: " << b << '\n';
}

//Can't compile beacuse of the const ints

/*void swap_cr(const int& a, const int& b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}*/