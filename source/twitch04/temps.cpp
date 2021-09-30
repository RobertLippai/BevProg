#include "../std_lib_facilities.h"

int main(){
	
	vector<double> temps;

	for(double temp;  cin >> temp;)
		temps.push_back(temp);

	for(auto temp : temps)
		cout << temp << '\n';

	double sum = 0;

	for(auto temp : temps)
		sum += temp;

	cout << "avarge temps: " << sum/temps.size() << '\n';

	sort(temps);

	for(auto temp : temps)
		cout << temp << '\n';
	
	cout << "Median of temps: " << temps[temps.size() / 2] << '\n';

	return 0;
}