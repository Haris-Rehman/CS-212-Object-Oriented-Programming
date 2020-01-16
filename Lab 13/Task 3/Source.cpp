#include<iostream>
using namespace std;

template<class data>
void addnum(data x, data &sum, int n1, int n2)
{
	for (int i = 1; i <= n1; i++)
	{
		sum = sum + (i*x);
	}
	sum = sum + 1;
	sum = sum + (n2*x);
}

int main()
{
	float sum = 0;
	int n1;
	int n2;
	float x;

	cout << "\n\nexpression:\n\t";
	cout << "1 + x + 2x + 3x + ....... + n1x + n2x" << endl;
	cout << endl << endl;
	
	cout << "enter the values:\n\n";
	cout << "\tn1 =\t";
	cin >> n1;
	cout << "\tn2 =\t";
	cin >> n2;
	cout << "\tx  =\t";
	cin >> x;

	cout << "\t\t\t\t//same founction called for any given datatype.\n";
	addnum(x, sum, n1, n2);//same founction called for any given datatype

	cout << "\n\n\tsum =\t" << sum << endl << endl;
	return 0;
}
