#include "../std_lib_facilities.h"

int main(){
	
	cout << "Please enter an expression\n";

	int lval = 0, rval = 0;

	cin >> lval;


	for(char op; cin >> op;){
		if(op != 'x'){
			cin >> rval;
		}

		switch(op){
			case '+':
				lval += rval;
				break;
			case '-':
				lval -= rval;
				break;
			case '*':
				lval *= rval;
				break;
			case '/':
				lval /= rval;
				break;
			default:
				cout << "Result: " << lval << '\n';
				return 0;
		}
	}
	
	return 0;
}