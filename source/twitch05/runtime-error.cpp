#include "../std_lib_facilities.h"

int area(int length, int width){

	if (length <= 0 || width <= 0)
	{
		return -1;
	}
	return length * width;

}

int main(){
	
	int x = -7;
	int y = 2;

	int area1 = area(x, y);

	cout << "area1==" << area1 << "\n"; 
	
	if(area1 <= 0) error("Bad area!\n");

	return 0;
}