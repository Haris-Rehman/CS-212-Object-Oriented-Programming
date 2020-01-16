#include<iostream>
using namespace std;

template<class t>
void store(t array[5], int size)
{
	cout << "\n\nvalues in the store founction:\n\n";
	for (int i = 0; i < size; i++)
	{
		cout << "\tarray[" << i << "] = " << array[i] << endl;
	}

	cout << endl;
}

int main()
{
	float arr[5];

	cout << "enter 5 elements of array:" << endl << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "\telement " << i << " = "; cin >> arr[i];
	}
	cout << "\t\t\t\t//same founction called for any given datatype.\n";
	store(arr, 5);//same founction called for any given datatype
	cout << endl;
	return 0;
}
