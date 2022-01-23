#include "DivisionByAScalar.h"
#include <iostream>
using namespace std;

void DivisionByScalar() {// we will use an almost identical method to the one for multiplication by a scalar
	int i, j; // the number of rows and columns of the matrix
	int rows, columns;
	float scalar;

	cout << "Enter the rows of the matrix: ";
	cin >> i;
	cout << "Enter the columns of the matrix: ";
	cin >> j;
	cout << endl;


	float scalarMult[10][10], mult[10][10];

	cout << "Enter the elements of the matrix" << endl;
	for (rows = 0; rows < i; rows++) {
		for (columns = 0; columns < i; columns++) {
			cin >> scalarMult[rows][columns];
		}
	}
	cout << endl;

	cout << "Enter the scalar: ";
	cin >> scalar;

	cout << endl;

	cout << "The result of the multiplication of the matrix by a scalar: " << endl;
	for (rows = 0; rows < i; rows++) {
		for (columns = 0; columns < j; columns++) {
			mult[rows][columns] =  scalarMult[rows][columns] / scalar;
			cout << mult[rows][columns] << " ";
		}
		cout << endl;
	}

	return;
}