#include<iostream>
using namespace std;
void main()
{
	char array1[20] = { '\0' }; // character array
	cout << "enter a string:"<<endl;
	cin.getline(array1, 20); // array input
	for (int a = 0; array1[a] != '\0'; a++)
	{
		if (array1[a]>=97 && array1[a]<=123) // if letter is lower case
		{
			array1[a] = array1[a] - 32; // convert it into higher case
		}
	}
	cout << "string in uppercase letters:" << endl;
	for (int a = 0; a < 20; a++)// loop to print the letters of higher case.
	{
		cout << array1[a];
	}
	cout << endl;
}