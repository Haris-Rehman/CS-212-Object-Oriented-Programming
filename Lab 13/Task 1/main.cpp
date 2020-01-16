#include<iostream>
using namespace std;

template <class t>
class MATRIX
{
private:
	t arr1[3][3];
	t arr2[3][3];
	float result[3][3];
public:
	MATRIX(t matrix1[][3], t matrix2[][3])
	{
		for (int row = 0; row < 3; row++)
		{
			for (int column = 0; column < 3; column++)
			{
				arr1[row][column] = matrix1[row][column];
			}
		}
		for (int row = 0; row < 3; row++)
		{
			for (int column = 0; column < 3; column++)
			{
				arr2[row][column] = matrix2[row][column];
			}
		}
	}
	t getMatrix(int row, int column)
	{
		return result[row][column];
	}
	void AddMatrix()
	{
		for (int row = 0; row < 3; row++)
		{
			for (int column = 0; column < 3; column++)
			{
				result[row][column] = arr1[row][column] + arr2[row][column];
			}
		}
	}
	void SubstractMatrix()
	{
		for (int row = 0; row < 3; row++)
		{
			for (int column = 0; column < 3; column++)
			{
				result[row][column] = arr1[row][column] - arr2[row][column];
			}
		}
	}
	void MultiplyMatrix()
	{
		int element;
		for (int row = 0; row < 3; row++) // multiplying matrix 1 and matrix 2
		{
			for (int column = 0; column < 3; column++)
			{
				//element of resultant matrix.
				element = 0;
				for (int x = 0; x < 3; x++)
				{
					element = element + arr1[row][x] * arr2[x][column];
				}
				result[row][column] = element;
				//element of resultant matrix.
			}
		}
	}
	void DisplayMatrix()
	{
		cout << "\n   <resultant>" << endl;
		for (int row = 0; row < 3; row++)//print resultant matric
		{
			for (int column = 0; column < 3; column++)
			{
				cout << getMatrix(row, column) << "\t";
			}
			cout << endl;
		}
		cout << endl;
	}
	void displaymatrices()
	{
		cout << "\n\n    <Matrix1>\n\n";
		for (int row = 0; row < 3; row++)//print resultant matric
		{
			for (int column = 0; column < 3; column++)
			{
				cout << arr1[row][column] << "\t";
			}
			cout << endl;
		}
		cout << endl;
		cout << "\n    <Matrix2>\n\n";
		for (int row = 0; row < 3; row++)//print resultant matric
		{
			for (int column = 0; column < 3; column++)
			{
				cout << arr2[row][column] << "\t";
			}
			cout << endl;
		}
		cout << endl;
	}
};

int main()
{
	while (1)
	{
		system("cls");
		float matrix1[3][3] = { 0 };
		float matrix2[3][3] = { 0 };
		cout << "\n\nmatrix1:" << endl << endl;
		for (int row = 0; row < 3; row++)//matrix1
		{
			for (int column = 0; column < 3; column++)
			{
				cout << "\telenent[" << row + 1 << "][" << column + 1 << "]:  ";
				cin >> matrix1[row][column];
			}
		}
		cout << "\n\nmatrix2:" << endl << endl;
		for (int row = 0; row < 3; row++)//matrix2
		{
			for (int column = 0; column < 3; column++)
			{
				cout << "\telenent[" << row + 1 << "][" << column + 1 << "]:  ";
				cin >> matrix2[row][column];
			}
		}
		MATRIX <float> a(matrix1, matrix2);
		int choice;
		system("CLS");
		a.displaymatrices();
		cout << "\n\nWhat operation do you want to apply?\n\n\t1 = add matrix\n\t2 = substract matrix\n\t3 = multiply matrix\n\nyour choice:  ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			a.AddMatrix();
			break;
		case 2:
			a.SubstractMatrix();
			break;
		case 3:
			a.MultiplyMatrix();
			break;
		}
		a.DisplayMatrix();
		system("pause");
	}
}
