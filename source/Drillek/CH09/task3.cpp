#include "../std_lib_facilities.h"

struct Date
{
private:
	int year; //year
	int month; //month
	int day; //day

public:
	//constructor
	Date(int y, int m, int d);
	void add_day(int n);
	int get_year() { return year; }
	int get_month() { return month; }
	int get_day() { return day; }

	void set_year(int y){
		if(y > 0){
			year = y;
		} else error("Invalid year in set_year().");
	}

	void set_month(int m){
		if(m > 0 && m <= 12){
			month = m;
		} else error("Invalid month in set_month().");
	}

	void set_day(int d){
		if(d > 0 && d <= 31){
			day = d;
		} else error("Invalid day in set_day().");
	}
};

Date::Date(int y, int m, int d){
	if(y > 0){
		year = y;
	} else error("Invalid year.");

	if(m <= 12 && m > 0){
		month = m;
	} else error("Invalid month.");

	if(d <= 31 && d > 0){
		day = d;
	} else error("Invalid day.");
}

void Date::add_day(int n){
	day += n;
	if(day > 31){
		month++;
		day -= 31;

		if(month > 12){
			year++;
			month -= 12;
		}
	}
}

ostream& operator<<(ostream& os, Date& d) {
	return os << '(' << d.get_year() << ',' << d.get_month() << ',' << d.get_day() << ')';
}

int main()
try{
	
	Date today (1978, 6, 25);

	Date tomorrow = today;
	tomorrow.add_day(1);

	cout << "Today: " << today << '\n';
	cout << "Tomorrow: " << tomorrow << '\n';

	return 0;

} catch (exception& e){
	cerr << e.what() << '\n';
	return 1;
}