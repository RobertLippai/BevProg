#include "../std_lib_facilities.h"

class Bad_area {};

int area(int length, int width){

	if (length <= 0 || width <= 0)
	{
		throw Bad_area{};
	}

	return length * width;

}

int main(){
	
	int x = 7;
	int y = 2;

	try{
		int area1 = area(x, y);	

		cout << "area1==" << area1 << "\n"; 
	} catch (Bad_area) {
		cerr << "Bad area caught!\n";
	}


	return 0;
}