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
* <The logic of the MultiplicationByMatrix void function>
*
*/

#include "MultiplicationByAnotherMatrix.h"
#include <iostream>
using namespace std;

void MultiplicationByMatrix() {

    double a[10][10], b[10][10];
    double mult[10][10];
    int rows1, columns1; // rows1 = rows of first matrix, columns1 = columns of first matrix
    int rows2, columns2; // rows2 = rows of second matrix, columns2 = columns of second matrix

    cout << "Enter rows for first matrix: ";
    cin >> rows1;
    cout << "Enter columns for first matrix: ";
    cin >> columns1;

    cout << "Enter rows for second matrix: ";
    cin >> rows2;
    cout << "Enter columns for second matrix: ";
    cin >> columns2;

    // We cannot multiply two matrices if the columns of the first one are not equal to the rows of the second one
    if (columns1 != rows2) { 
        cout << "The column of the first matrix is not equal to the row of the second matrix." << endl;

        cout << "Please, enter rows for first matrix again: " << endl;
        cin >> rows1;
        cout << "Please, enter columns for first matrix again: " << endl;
        cin >> columns1;

        cout << "Please, enter rows for second matrix again: " << endl;
        cin >> rows2;
        cout << "Please, enter columns for second matrix again: " << endl;
        cin >> columns2;

    }

    // Entering the elements of both matrices
    cout << endl << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < columns1; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << ": ";
            cin >> a[i][j];
        }
    }

    cout << endl << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < columns2; ++j) {
            cout << "Enter element b" << i + 1 << j + 1 << ": ";
            cin >> b[i][j];
        }
    }

    cout << endl;

    // Printing the two matrices 

    cout << "First matrix: " << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns1; j++) {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Second matrix: " << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < columns2; j++) {
            cout << b[i][j] << "  ";
        }
        cout << endl;
    }

    // Initializing elements of matrix mult to zero
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < columns2; ++j) {
            mult[i][j] = 0;
        }
    }

    // Multiplying the matrices
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < columns2; ++j) {
            for (int k = 0; k < rows2; ++k) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Printing the result of the multiplication
    cout << endl << "Result of the multiplication of the two matrices: " << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < columns2; ++j) {
            cout << mult[i][j] << " ";
            if (j == columns2 - 1) {
                cout << endl;
            }
        }
    }

    return;

}