#include "../std_lib_facilities.h"

double* calc(int res_size, int max){
	double* p = new double[max];
	double* res = new double[res_size];
	//Do something...
	delete p;
	return res;
}

int main(){
	
	double* r = calc(100, 200);
	//Do something
	
	delete[] r;
	
	return 0;
}