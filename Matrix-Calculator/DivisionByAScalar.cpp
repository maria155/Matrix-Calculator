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
* <The logic of the DivisionByScalar void function>
*
*/

#include "DivisionByAScalar.h"
#include <iostream>
using namespace std;

void DivisionByScalar() {// We will use an almost identical method to the one for multiplication by a scalar
	int i, j;
	int rows, columns;
	float scalar;

	cout << "Enter the rows of the matrix: ";
	cin >> rows;
	cout << "Enter the columns of the matrix: ";
	cin >> columns;
	cout << endl;

	float scalarMult[10][10], mult[10][10];

	// Entering the elements of the matrix
	cout << "Enter the elements of the matrix" << endl;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < rows; j++) {
			cout << "Enter element a" << i + 1 << j + 1 << ": ";
			cin >> scalarMult[i][j];
		}
	}
	cout << endl;

	// Printing the matrix
	cout << "The matrix: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << scalarMult[i][j] << "  ";
		}
		cout << endl;
	}

	cout << endl;

	// Entering the scalar
	cout << "Enter the scalar: ";
	cin >> scalar;

	// Checking if the divider is equal to zero
	if (scalar == 0) {
		cout << "The division cannot be completed!" << endl;
		cout << "Enter scalar again: ";
		cin >> scalar;
	}

	cout << endl;

	// Dividing the matrix by the scalar and displaying the result
	cout << "The result of the division of the matrix by the scalar: " << endl;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++) {
			mult[i][j] = scalarMult[i][j] / scalar;
			cout << mult[i][j] << " ";
		}
		cout << endl;
	}

	return;
}