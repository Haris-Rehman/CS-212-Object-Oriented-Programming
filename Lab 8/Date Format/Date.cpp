#include <iostream>
#include <stdexcept>
#include "Date.h" // include Date class definition
using namespace std;
// constructor confirms proper value for month; calls
// utility function checkDay to confirm proper value for day
Date::Date(int mn, int dy, int yr)
{
	if (mn > 0 && mn <= monthsPerYear) // validate the month
		month = mn;
	else
		cout << "invalid\n";

	year = yr; // could validate yr
	day = checkDay(dy); // validate the day
	checkmonth();
	// output Date object to show when its constructor is called
	cout << "date\n";
	cout << endl;
} // end Date constructor

// print Date object in form month/day/year
void Date::print() const
{
	cout << day << '/' << month << '/' << year << endl << endl;
	cout << month << '/' << day << '/' << year << endl << endl;
	cout << m << " " << day << ", " << year;
	cout << endl;
} // end function print

Date::~Date()
{
	//cout << "Date object destructor for date ";
	//print();
	cout << endl;
} // end ~Date destructor
// utility function to confirm proper day value based on
// month and year; handles leap years, too
int Date::checkDay(int testDay) const
{
	static const int daysPerMonth[monthsPerYear + 1] =
	{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	// determine whether testDay is valid for specified month
	if (testDay > 0 && testDay <= daysPerMonth[month])
		return testDay;
	// February 29 check for leap year
	if (month == 2 && testDay == 29 && (year % 400 == 0 ||
		(year % 4 == 0 && year % 100 != 0)))
		return testDay;
	throw invalid_argument("Invalid day for current month and year");
} // end function checkDay

void Date::checkmonth()
{
	if (month == 1)
		m = "january";
	if (month == 2)
		m = "february";
	if (month == 3)
		m = "march";
	if (month == 4)
		m = "april";
	if (month == 5)
		m = "may";
	if (month == 6)
		m = "june";
	if (month == 7)
		m = "july";
	if (month == 8)
		m = "august";
	if (month == 9)
		m = "september";
	if (month == 10)
		m = "octuber";
	if (month == 11)
		m = "november";
	if (month == 12)
		m = "december";
}
