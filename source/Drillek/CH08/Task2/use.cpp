# include "my.h"
# include "iostream"
using namespace std;

int main(){
	int x = 7;
	int y = 9;
	cout << "The value of X: " << x << " The value of Y: " << y << '\n';
	

	swap_v(x,y);
	cout << "After SWAP_V: The value of X: " << x << " The value of Y: " << y << '\n';

	swap_r(x,y);
	cout << "After SWAP_R: The value of X: " << x << " The value of Y: " << y << '\n';

	
	swap_v(7,9);
	cout << "After SWAP_V: The value of X: " << x << " The value of Y: " << y << '\n';
	//swap_r(7,9);

	
	
	
	
	const int cx = 7;
	const int cy = 9;
	cout << "The value of CX: " << cx << " The value of CY: " << cy << '\n';


	swap_v(cx,cy);
	cout << "After SWAP_V: The value of CX: " << cx << " The value of CY: " << cy << '\n';

	//swap_r(cx,cy);
	
	
	
	double dx = 7.7;
	double dy = 9.9;

	cout << "The value of DX: " << dx << " The value of DY: " << dy << '\n';

	swap_v(dx,dy);
	cout << "After SWAP_V: The value of DX: " << dx << " The value of DY: " << dy << '\n';

	//swap_r(dx,dy);

	return 0;
}
