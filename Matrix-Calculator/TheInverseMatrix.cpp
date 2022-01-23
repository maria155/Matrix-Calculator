#include "TheInverseMatrix.h"
#include <iostream>
using namespace std;

void Inverse() {
	float a[10][10], x[10], ratio;
	int i, j, k, n;


	
	cout << "Enter order of matrix: ";
	cin >> n;

	
	cout << "Enter coefficients of Matrix: " << endl;
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

	for (i = 1; i <= n; i++)
	{
		if (a[i][i] == 0.0)
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