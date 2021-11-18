# include "my.h"
# include "iostream"
using namespace std;

int main(){
	int x = 7;
	int y = 9;

	
	cout << "Calling swap_v(x,y): ";
	swap_v(x,y);

	cout << "Calling swap_v(7,9): ";
	swap_v(7,9);

	cout << "Calling swap_r(x,y): ";
	swap_r(x,y);
	

	
	const int cx = 7;
	const int cy = 9;

	cout << "Calling swap_v(cx,cy): ";
	swap_v(cx,cy);

	cout << "Calling swap_v(7.7,9.9): ";
	swap_v(7.7,9.9);


	
	double dx = 7.7;
	double dy = 9.9;

	cout << "Calling swap_v(dx,dy): ";
	swap_v(dx,dy);

	return 0;
}
