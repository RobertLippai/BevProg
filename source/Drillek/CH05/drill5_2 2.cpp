#include "std_lib_facilities.h"

int main(){
	try {
	//1
		cout << "Success!\n";
	//2
		cout << "Success!\n";
	//3
		cout << "Success!" << "\n";
	//4
		cout << "Success!" << endl;
	//5
		int res = 7;
		vector<int> v(10);
		v[5]  = res;
		cout << "Success!\n";
	//6
		vector<int> u(10);
		u[5] = 7;
		if(u[5] != 7){
			cout << "Success!\n";
		}
	//7
		if(1 = 1){
		 cout << "Success!\n";
		} else cout << "Fail!\n";
		
	//8
		bool c = false;
		if (c){
			cout << "Success!\n";
		} else cout << "Fail\n";
		
	//9
		sring s = "ape";
		bool c = "fool" < s; 
		
		if(c){
		cout << "Success!\n";
		}
	
		return 0;
	}
	catch (exception&e){
		return 1;
	}
	catch (...){
		return 2;
	}
}



//chapter 4 övőhét pééntekig


