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
* <The logic of the TranspositionOfMatrix void function>
*
*/

#include "TranspositionOfTheMatrix.h"
#include <iostream>
using namespace std;

void TranspositionOfMatrix() {
    int a[10][10], transpose[10][10];
    int row, column;

    cout << "Enter rows of matrix: ";
    cin >> row;

    cout << "Enter columns of matrix: ";
    cin >> column;

    cout << endl;

    // Entering the elements of the matrix
    cout << "Enter elements of matrix: " << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << ": ";
            cin >> a[i][j];
        }
    }

    cout << endl;

    // Printing the matrix
    cout << "The matrix: " << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << a[i][j] << " ";
            if (j == column - 1)
                cout << endl;
        }
    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            transpose[j][i] = a[i][j];
        }
    }

    cout << endl;

    // Printing the transpose of the matrix
    cout << "The transpose of the matrix: " << endl;
    for (int i = 0; i < column; ++i) {
        for (int j = 0; j < row; ++j) {
            cout << transpose[i][j] << " ";
            if (j == row - 1)
                cout << endl;
        }
    }

    return;
}