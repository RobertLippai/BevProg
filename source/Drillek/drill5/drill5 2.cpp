#include "std_lib_facilities.h"

int main(){
	try {
		//1
		//cout << "Success!\n";
		
		
		//2
		//cout << "Success!\n";
		
		
		//3
		//cout << "Success!" << "\n";
		
		
		//4
		//cout << "Success!" << endl;
		
		
		//5
		/*
		int res = 7;
		vector<int> v(10);
		v[5]  = res;
		cout << "Success!\n";
		*/
		
		
		//6
		/*
		vector<int> v(10);
		v[5] = 7;
		if(v[5] == 7){
			cout << "Success!\n";
		}
		*/
		
		
		//7
		/*
		if(1 == 1){
			cout << "Success!\n";
		} else cout << "Fail!\n";
		*/
		
		
		//8
		/*
		bool c = true;
		if (c){
			cout << "Success!\n";
		} else cout << "Fail\n";
		*/
		
		//9
		/*
		string s = "ape";
		bool c = string("fool").length() > s.length() ? true : false;
		
		if(c){
			cout << "Success!\n";
		}
		*/
		
		//10 - 11
		/*
		string s = "ape";
		if(s != "fool"){
			cout << "Success!\n";
		}
		*/
		
		
		//12
		/*
		string s = "ape";
		
		if(s != "fool"){
			cout << "Success!\n";
		}
		*/
		
		
		//13
		/*
		vector<char> v(5);
		for(int i = 0; i < v.size(); i++){
			cout << "Success!\n";
		}
		*/
		
		
		//14
		/*
		vector<char> v(5);
		for(int i = 0; i <= v.size(); i++){
			cout << "Success!\n";
		}
		*/
		
		
		//15
		/*
		string s = "Success!\n";
		for(int i = 0; i < s.length(); ++i){
			cout << s[i];
		}
		*/
		
		//16
		/*
		if(true) {
			cout << "Success!\n";
		} else cout << "Fail!\n";
		*/
		
		
		//17
		/*
		int x = 2000;
		int c = x;
		
		if(c == 2000){
			cout << "Success!\n";
		}
		*/
		
		
		/*
		//18
		string s = "Success!\n";
		for(int i = 0;  i < 10; ++i){
			cout << s[i];
		}
		*/
		
		//19
		/*
		vector<int> v(5);
		
		for(int i = 0; i <= v.size(); ++i){
			cout << "Succes!\n";
		}
		*/
		
		//20
		/*
		int i = 0;
		int j = 9;
		
		while (i < 10){
			++j;
			++i;
		}
		
		if(j > i){
			cout << "Success!\n";
		}
		*/
		
		//21,22,23,24
		
		//24
		int x = 4;
		double d = 5/(x-2);
		if(d == 2*x + 0.5){
			cout << "Success!\n";
		}
		
		
			
		//25
		/*
		cout << "Success!\n";
		*/
		
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


