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
* <The logic of the DeterminantOfMatrix void function>
*
*/

#include "DeterminantOfTheMatrix.h"
#include <iostream>
using namespace std;

void DeterminantOfMatrix() {
    int rows, columns, i, j;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;

    cout << endl;

    // Checking if the number of rows and the number of columns is more that 4
    int const MAX_SIZE = 4;
    if (rows > MAX_SIZE || columns > MAX_SIZE) {
        cout << "The maximum size of the matrix needs to be 4x4!" << endl;

        cout << "Please enter rows for matrix again: ";
        cin >> rows;
        cout << "Please enter columns for matrix again: ";
        cin >> columns;
    }

    int a[10][10];
    float det = 0;

    // Entering the elements of the matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {

            cout << "Enter element a" << i + 1 << j + 1 << ": ";
            cin >> a[i][j];
        }
    }

    cout << endl;

    // Printing the matrix
    cout << "The matrix: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;

    // Calculating and displaying the determinant of the matrix 
    for (i = 0; i < 3; i++) {
        det = det + (a[0][i] * (a[1][(i + 1) % 3] * a[2][(i + 2) % 3] - a[1][(i + 2) % 3] * a[2][(i + 1) % 3]));
    }
    cout << "The determinant of the matrix is: " << det << endl;

    return;
}