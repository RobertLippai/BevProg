#include "../std_lib_facilities.h"

int main(){
	
	double a, b = -1;

	cout << "Enter two number: "; 

	while(cin >> a >> b){
		cout << "\n";
		
		if(a == b){
			cout << "the numbers are equal" << "\n";
		} else if(a > b){
			cout << "the smaller value is: " << b << "\n";
			cout << "the larger value is: " << a << "\n";
		} else {
			cout << "the smaller value is: " << a << "\n";
			cout << "the larger value is: " << b << "\n";
		}
		
		if(abs(a-b) < 1.0/100){
			cout <<  "the numbers are almost equal" << "\n";
		} 

		cout << "\n" << "Enter two number: "; 
	}
	
	cout << "exit\n";
	
	return 0;
}


/*
1-5 az elso fajl

Aztan masik fajl V0.2 
double, 2 változo de csak egyet kerunk be. 
Aztan tracklje az eddigieket. es ha az eddigi legnagyobb szam irja ki

9es átváltani méterbe

10-11es csütörtökön csak

*/
