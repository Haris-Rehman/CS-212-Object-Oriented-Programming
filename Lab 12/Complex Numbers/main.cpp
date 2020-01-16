#include<iostream>
#include<math.h>
#include<stdio.h>
#include"Header.h"
using namespace std;

int main()
{
	int cont;
	while (1)
	{
		complex c1; // first complex number
		complex c2; // second complex number
		complexoper explorer;
		int g, h, i, j;

		cout << "First complex number:" << endl << endl;
		cout << "\treal part:\t"; cin >> g;
		c1.setreal(g);
		cout << "\timaginary part:\t"; cin >> h;
		c1.setimaginary(h);

		cout << "\n\n\nSecond complex number:" << endl << endl;
		cout << "\treal part:\t"; cin >> i;
		c2.setreal(i);
		cout << "\timaginary part:\t"; cin >> j;
		c2.setimaginary(j);

		cout << endl << endl;
		explorer.getnumbers(c1, c2);
		cout << endl << endl;

		cout << "do you want to enter again? 1=yes 0=no" << endl;
		cout << "your choice: "; cin >> cont;
		if (cont == 0)
			return 0;
		system("CLS");
	}
}
