# include <iostream>
# include <string>
# include "Town.h"
using namespace std;
class City
{
private:
	Town*Towns;
public:
	City();
	~City();
	string getCityinfo();
};
