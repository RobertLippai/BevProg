#include "../std_lib_facilities.h"

string checkUnit(string inputString){
	string unit;

	for (int i = 0; i < inputString.length(); ++i)
		{
			if(!isdigit(inputString[i]) && !isspace(inputString[i]) && inputString[i] != '.'){
				unit += inputString[i];
			}
		}

	if(unit == "cm" || unit == "m" || unit == "in" || unit == "ft"){
		return unit;
	}

	return "error";
}

double findNumber(string inputString){
	int end;

	for (int i = 0; i < inputString.length(); ++i)
		{
			if(!isdigit(inputString[i]) && inputString[i] != '.'){
				end = i;
				break;
			}
		}


	return stod(inputString.substr(0, end));
}


int main(){
	const double inch_to_cm = 2.54;
	const double meter_to_cm = 100;
	const double feet_to_inch = 12;

	vector<double> numbers_inptued_vector;

	double a, smallest, largest, sum = 0;

	bool firstRun = true;

	int numbers_inputed = 0;

	string inputString;

	cout << "Enter a number: "; 

	while(getline(cin, inputString)){

		if(inputString == "|"){
			break;
		}

		string unit = checkUnit(inputString);

		if(unit != "error"){

			a = findNumber(inputString);

			numbers_inputed++;

			cout << "\n";
			
			cout << "You have entered the following number: " << a << "\n";
			
			if(a < smallest){
				cout << "This is the smallest so far.\n";
				smallest = a;
			}

			if(a > largest){
				cout << "This is the largest so far.\n";
				largest = a;
			}

			if(firstRun){
				smallest = a;
				firstRun = false;
			}

			//assume it's in meters
			double convertedNumber = a;

			//Convertion
			if(unit == "cm"){
				convertedNumber = (a / meter_to_cm);
			}
			if(unit == "in"){
				convertedNumber = (a * inch_to_cm) / meter_to_cm;
			}
			if(unit == "ft"){
				convertedNumber = ((a * feet_to_inch) * inch_to_cm) / (meter_to_cm);
			}

			sum += convertedNumber;
			numbers_inptued_vector.push_back(convertedNumber);


		} else {
			cout << "Please enter a valid unit! Such as cm, m, in or ft \n";
		}

		cout << "\n" << "Enter a number: "; 
	}
	
	cout << "You have entered " << numbers_inputed << " numbers.\n";
	cout << "The largest number was " << largest << ".\n";
	cout << "The smallest number was " << smallest << ".\n";
	cout << "The sum of the entered numbers is " << sum << " meter.\n";
	cout << "Your numbers after converting them to meter:\n";
	
	//Task 10-11
	sort(numbers_inptued_vector);

	for(double number : numbers_inptued_vector){
		cout << number << "\n";
	}
	
	return 0;
}