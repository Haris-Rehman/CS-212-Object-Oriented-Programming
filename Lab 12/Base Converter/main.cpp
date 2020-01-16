# include <iostream>
# include "Header.h"
using namespace std;

int main()
{
	int cont;
	while (1)
	{
		int number;
		base *b1;

		cout << "\n\nEnter the decimal number: ";
		cin >> number;

		decimal d1;
		b1 = &d1;
		b1->convert(number);

		octa o1;
		b1 = &o1;
		b1->convert(number);

		hexa h1;
		b1 = &h1;
		b1->convert(number);

		cout << "do you want to enter again? 1=yes 0=no" << endl;
		cout << "your choice: "; cin >> cont;
		if (cont == 0)
			return 0;
		system("CLS");
	}
}
