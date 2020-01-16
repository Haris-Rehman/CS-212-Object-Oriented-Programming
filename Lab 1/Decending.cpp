#include<iostream>
using namespace std;
void main()
{
	int array[5]; int swap;
	cout << "Enter five real numbers:" << endl;
	for (int i = 0; i < 5; i++)//input of 5 real numbers
	{
		cin >> array[i];
	}
	for (int j = 0; j < 4; j++) // checking the condition four times, for five numbers
	{
		for (int k = 0; k < 4 - j; k++) // checking the condition (4-j)times, for completely arranging the numbers
		{
			if (array[k] < array[k + 1]) // CONDITION
			{
				// Using the swap / bubble sorting.
				swap = array[k];
				array[k] = array[k + 1];
				array[k + 1] = swap;
			}
		}
	}
	cout << "numbers in decending order are:" << endl;
	for (int i = 0; i < 5; i++)//output integers in decending orders.
	{
		cout << array[i] << endl;
	}
}