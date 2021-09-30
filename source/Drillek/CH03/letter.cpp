#include "../std_lib_facilities.h"

int main(){

	//Task 1
	cout << "Enter the name of the person you want to write to:\n";
	
	string first_name;
	
	cin >> first_name;
	
	cout << "Dear " << first_name << "," << "\n";

	
	///Task 2
	cout << "	How are you? I would be fine, but I miss you. I'm really looking forward to see you next holiday. This time I will take a week off, so we can go spend the whole week together. \n";


	//Task 3

	cout << "Enter your other friend's name:\n";

	string friend_name;

	cin >> friend_name;

	cout << "Have you seen " << friend_name << " lately?\n";


	//Task 4
	char friend_sex = 0;

	cout << "Please enter your friend's gender. Type m for male, f for female:\n";

	cin >> friend_sex;

	if(friend_sex == 'm'){
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	}
	if(friend_sex == 'f'){
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	}


	//Task 5

	cout << "Please enter the recipient's age:\n";

	int age;

	cin >> age;

	cout << "I hear you just had a birthday and you are " << age << " years old.\n";

	if(age <= 0 || age >= 110 ){
		simple_error("you're kidding!");
	}


	//Task 6
	if(age < 12){
		cout << "Next year you will be " << age + 1 << ".\n";
	}
	if(age == 17){
		cout << "Next year you will be able to vote.\n";
	}
	if(age > 70){
		cout << "I hope you are enjoying retirement.\n";
	}


	//Task 7
	cout << "Yours sincerely,\n" << "\n" << "\n";
	cout << "Robert\n";

	return 0;
}