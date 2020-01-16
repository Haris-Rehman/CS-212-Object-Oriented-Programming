#include <iostream>      
#include <time.h>       
#include <ctime>
#include <cstdlib>
# include "Date.h"
using namespace std;
int main()
{
	time_t thisTime = time(NULL);
	tm * timePtr = (tm *)malloc(sizeof(tm));
	localtime_s(timePtr, &thisTime);
	Date a(timePtr->tm_mon + 1, timePtr->tm_mday, timePtr->tm_year + 1900);
	a.print();
	free(timePtr);
	return 0;
}
