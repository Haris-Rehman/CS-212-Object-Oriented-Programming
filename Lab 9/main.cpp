# include <iostream>
# include "Header.h"
using namespace std;
int main()
{
	Company cx;
	int operation;
	int a; // decide team in case 3
	while (1)
	{
		cout << "\n\n\t1 = add employees\n\t2 = remove employees\n\t3 = assign project\n\t4 = get information\n\t5 = Exit program" << endl << "\nOperation:  ";
		cin >> operation;
		system("CLS");
		switch (operation)
		{
		case 1:
			int ta; int ea;
			cout << "team 1 = 1\nteam 2 = 2\nteam=";
			cin >> ta;
			cout << "no. of employees:  ";
			cin >> ea;
			cx.addemployees(ta - 1, ea);
			break;
		case 2:
			int ts; int es;
			cout << "team 1 = 1\nteam 2 = 2\nteam=";
			cin >> ts;
			cout << "no. of employees:  ";
			cin >> es;
			cx.substractemployees(ts - 1, es);
			break;
		case 3:
			int nps;
			a = cx.decideteam();
			cout << "no.of projects:  ";
			cin >> nps;
			cx.givebonus(nps, a - 1);
			break;
		case 4:
			cx.display();
			break;
		case 5:
			return 0;
		}
	}
	return 0;
}
