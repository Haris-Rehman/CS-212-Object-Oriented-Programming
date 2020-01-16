# include <iostream>
# include <string>
using namespace std;
class Date
{
public:
	static const int monthsPerYear = 12; // number of months in a year
	Date(int mn, int dy, int yr);
	~Date();
	void print() const; // print date in month/day/year format
	int checkDay(int) const;
	void checkmonth();
private:
	int month; // 1-12 (January-December)
	string m;
	int day; // 1-31 based on month
	int year; // any year
}; // end class Date
