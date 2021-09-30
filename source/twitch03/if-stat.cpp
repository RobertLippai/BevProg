#include "../std_lib_facilities.h"

int main(){
	int a = 0;
	int b = 0;

	cout << "Please enter 2 values!\n";

	cin >> a >> b;

	if(a<b){
		cout << "a<b" << " a==" << a << " b==" << b << "\n";
	} else cout << "a>b" << " a==" << a << " b==" << b << "\n";
	return 0;
}