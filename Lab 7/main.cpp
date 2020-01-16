# include <iostream>
# include <fstream>
# include "City.h"
using namespace std;
int main()
{
	City c1;
	cout << c1.getCityinfo(); // display information
	ofstream myfile("Haris.txt");
	if (myfile.is_open())
		myfile << c1.getCityinfo(); // store information in txt file
	return 0;
}
