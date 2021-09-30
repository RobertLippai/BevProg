#include "../std_lib_facilities.h"

string checkUnit(string inputString){
	string unit;

	for (int i = 0; i < inputString.length(); ++i)
		{
			if(!isdigit(inputString[i]) && !isspace(inputString[i]) && inputString[i] != '.'){
				unit += inputString[i];
			}
		}

	cout << unit;
	if(unit == "cm" || unit == "m" || unit == "in" || unit == "ft"){
		return unit;
	} 

	return "error";
}

double findNumber(string inputString){
	int end;

	for (int i = 0; i < inputString.length(); ++i)
		{
			if(!isdigit(inputString[i])){
				end = i;
			}
		}


	return stod(inputString.substr(0, end));
}


int main(){
	const double inch_to_cm = 2.54;
	const double meter_to_cm = 100;
	const double feet_to_infch = 12;

	double a, smallest, largest, sum = 0;
	bool firstRun = true;

	int numbers_inptued = 0;

	string inputString;

	cout << "Enter a number: "; 

	string errormsg = "error";

	while(getline(cin, inputString)){

		if(inputString == "|"){
			break;
		}
		string unit = checkUnit(inputString);
		if(unit != "error"){

			a = findNumber(inputString);
			numbers_inptued++;

			cout << "\n";
			
			cout << "You have entered the following number: " << a;
			
			if(a < smallest){
				cout << " the smallest so far\n";
				smallest = a;
			}

			if(a > largest){
				cout << " the largest so far\n";
				largest = a;
			}

			if(firstRun){
				smallest = a;
				firstRun = false;
			}

			if(unit == "m"){
				sum += a;
			}
			if(unit == "cm"){
				sum += (a / meter_to_cm);
			}

		} else {
			cout << "Please enter a valid unit! Such as cm, m, in or ft \n";
		}

		cout << "\n" << "Enter a number: "; 
	}
	
	cout << "You have entered " << numbers_inptued << " numbers.\n";
	cout << "The largest number was " << largest << ".\n";
	cout << "The smallest number was " << smallest << ".\n";
	cout << "The sum of the enter m or cm numbers is " << sum << "meter.\n";
	
	return 0;
}
/*
//9es átváltani méterbe

//10-11es csütörtökön csak

*/
