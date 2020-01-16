//# include <iostream>
//# include "Header.h"
//using namespace std;
//
//MATRIX::MATRIX(float matrix1[][3], float matrix2[][3])
//{
//	for (int row = 0; row < 3; row++)
//	{
//		for (int column = 0; column < 3; column++)
//		{
//			arr1[row][column] = matrix1[row][column];
//		}
//	}
//	for (int row = 0; row < 3; row++)
//	{
//		for (int column = 0; column < 3; column++)
//		{
//			arr2[row][column] = matrix2[row][column];
//		}
//	}
//}
//
//float MATRIX::getMatrix(int row, int column)
//{
//	return result[row][column];
//}
//
//void MATRIX::AddMatrix()
//{
//	for (int row = 0; row < 3; row++)
//	{
//		for (int column = 0; column < 3; column++)
//		{
//			result[row][column] = arr1[row][column] + arr2[row][column];
//		}
//	}
//}
//
//void MATRIX::SubstractMatrix()
//{
//	for (int row = 0; row < 3; row++)
//	{
//		for (int column = 0; column < 3; column++)
//		{
//			result[row][column] = arr1[row][column] - arr2[row][column];
//		}
//	}
//}
//
//void MATRIX::MultiplyMatrix()
//{
//	int element;
//	for (int row = 0; row < 3; row++) // multiplying matrix 1 and matrix 2
//	{
//		for (int column = 0; column < 3; column++)
//		{
//			//element of resultant matrix.
//			element = 0;
//			for (int x = 0; x < 3; x++)
//			{
//				element = element + arr1[row][x] * arr2[x][column];
//			}
//			result[row][column] = element;
//			//element of resultant matrix.
//		}
//	}
//}
//
//void MATRIX::DisplayMatrix()
//{
//	cout << "\nresultant:" << endl;
//	for (int row = 0; row < 3; row++)//print resultant matric
//	{
//		for (int column = 0; column < 3; column++)
//		{
//			cout << getMatrix(row, column) << "\t";
//		}
//		cout << endl;
//	}
//}
