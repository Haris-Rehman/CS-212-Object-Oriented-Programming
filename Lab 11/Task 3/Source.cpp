# include <iostream>
# include "Header.h"
using namespace std;

fibonacci::fibonacci()
{
	first = 0, second = 1, next = 0;
	total = 0;
}

void fibonacci::sequence()
{
	cout << "Fibonacci series are: \n";

	for (int i = 0; ; i++)
	{
		next = first + second;
		if (next % 2 == 0)
			total = total + next; // sum of even valued terms
		first = second;
		second = next;
		if (total > 4000000)
			throw exception("exceeded sum by 4000000");
	}
}

void fibonacci::print()
{
	cout << endl << "sum of even valued numbers: " << total << endl << endl;
}