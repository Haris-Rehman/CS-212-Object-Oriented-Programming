# include <iostream>
# include <string>
# include "House.h"
using namespace std;
class Town
{
private:
	House*houses;
public:
	Town();
	~Town();
	string getTowninfo();
};
