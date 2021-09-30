#include "../std_lib_facilities.h"

int main(){

	cout << "Please enter your first and last name and age:\n";

	string first_name;
	string last_name;
	int age; //x eleme Z-nek

	//Whitespaceig olvas (space,tab, újsor)
	cin >> first_name >> last_name >> age;

	string name = first_name + " " + last_name; //concatnation

	cout << "Hello, " << name << 
		", age is " << age <<"\n";

	return 0;
}

/*String

	cin
	cout
	+
	+=s
*/

/*Integer

	cin
	cout
	+
	+=n
	++
	-
*/