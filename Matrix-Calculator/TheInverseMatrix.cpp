/**
*
* Solution to course project # 11
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2021/2022
*
* @author Maria Aleksandrova
* @idnumber 0MI0600067
* @compiler VC
*
* <The logic of the Inverse void function>
*
*/

#include "TheInverseMatrix.h"
#include <iostream>
using namespace std;

void Inverse() {
	float a[10][10], x[10], ratio;
	int i, j, k;
	int n; // number of rows and columns of the matrix
	
	// We will find the inverse matrix of a square matrix
	cout << "Enter the number of rows and columns of the matrix (rows = columns): ";
	cin >> n;

	// Entering the elements of the matrix
	cout << "Enter the elements of the matrix: " << endl;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << "a" << i << j << "= ";
			cin >> a[i][j];
		}
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i == j)
			{
				a[i][j + n] = 1;
			}
			else
			{
				a[i][j + n] = 0;
			}
		}
	}

	cout << endl;

	for (i = 1; i <= n; i++)
	{// We check if the determinant of the matrix is equal to zero
		if (a[i][i] == 0)
		{
			cout << "The determinant of the matrix is equal to zero! The transposition of the matrix cannot be performed!";
			cout << " " << endl;
			exit(0); 
		}
		for (j = 1; j <= n; j++)
		{
			if (i != j)
			{
				ratio = a[j][i] / a[i][i];
				for (k = 1; k <= 2 * n; k++)
				{
					a[j][k] = a[j][k] - ratio * a[i][k];
				}
			}
		}
	}
	
	for (i = 1; i <= n; i++)
	{
		for (j = n + 1; j <= 2 * n; j++)
		{
			a[i][j] = a[i][j] / a[i][i];
		}
	}
	
	// Printing the matrix
	cout << endl << "The inverse matrix is:" << endl;
	for (i = 1; i <= n; i++)
	{
		for (j = n + 1; j <= 2 * n; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	return;
}