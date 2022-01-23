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
* <The logic of the MultiplyByScalar void function>
*
*/

#include "MultiplicationByAScalar.h"
#include <iostream>
using namespace std;

void MultiplicationByScalar() {
	int i, j; 
	int rows, columns;
	double scalar;

	cout << "Enter the rows of the matrix: ";
	cin >> rows;
	cout << "Enter the columns of the matrix: ";
	cin >> columns;
	cout << endl;

	double scalarMult[10][10], mult[10][10];

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

	cout << endl;

	// Multiplying the matrix by the scalar and displaying the result
	cout << "The result of the multiplication of the matrix by the scalar: " << endl;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++) {
			mult[i][j] = scalar * scalarMult[i][j];
			cout << mult[i][j] << " ";
		}
		cout << endl;
	}

	return;
}