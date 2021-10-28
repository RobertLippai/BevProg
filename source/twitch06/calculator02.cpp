#include "../std_lib_facilities.h"


double expression();


class Token{
public:
	char kind;
	double value;

	Token(char ch) : kind(ch), value(0) {}
	Token(char ch, double val) : kind(ch), value(val){}

};

Token get_token(){
	char ch;
	cin >> ch;

	switch(ch){
		case '(':
		case ')':
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
			return Token(ch);
		case '.':
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		{
			cin.putback(ch);
			double value = 0;
			cin >> value;
			return Token('8', value);
		}
		default:
			error("Bad token");
			return 0;
	}
}

double primary(){
	Token t = get_token();

	switch(t.kind){
		case '(':
		{
			double d = expression();
			t = get_token();
			if(t.kind != ')') error("')' expected");
			return d;
		}
		case '8':
			return t.value;
		default:
			error("primary expected");
			return 0;
	}
}

double term(){

	double left = primary();
	Token t = get_token();

	while(true){
		switch(t.kind){
			case '*':
				left *= primary();
				t = get_token();
				break;
			case '/':
				left /= primary();
				t = get_token();
				break;
			/*
			case '%':
				left % primary();
				t = get_token();
				break;
			*/
			default:
				return left;
		}
	}
}

double expression(){

	double left = term();
	Token t = get_token();

	while(true){
		switch(t.kind){
			case '+':
				left += term();
				t = get_token();
				break;
			case '-':
				left -= term();
				t = get_token();
				break;
			default:
				return left;
		}
	}
}

int main()
try{
	
	while(cin){
		cout << "Result: " << expression() << '\n';
	}
	
	return 0;
} catch (exception& e){
	cerr << "Error: " << e.what() << '\n';
}