#include "MultiplicationByAnotherMatrix.h"
#include <iostream>
using namespace std;

void MultiplicationByMatrix() {

    int a[10][10], b[10][10];
    int mult[10][10];
    int n, m; // n = rows of first matrix, m = columns of first matrix
    int z, t; // z = rows of second matrix, t = columns of second matrix

    cout << "Enter rows for first matrix: ";
    cin >> n;
    cout << "Enter columns for first matrix: ";
    cin >> m;

    cout << "Enter rows for second matrix: ";
    cin >> z;
    cout << "Enter columns for second matrix: ";
    cin >> t;

    if (m != z) {
        cout << "The column of the first matrix is not equal to the row of the second matrix." << endl;

        cout << "Please, enter rows for first matrix again: " << endl;
        cin >> n;
        cout << "Please, enter columns for first matrix again: " << endl;
        cin >> m;

        cout << "Please, enter rows for second matrix again: " << endl;
        cin >> z;
        cout << "Please, enter columns for second matrix again: " << endl;
        cin >> t;

    }

    cout << endl << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    }

    cout << endl << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < z; ++i) {
        for (int j = 0; j < t; ++j) {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    }

    cout << endl;

    cout << "First matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Second matrix: " << endl;
    for (int i = 0; i < z; i++) {
        for (int j = 0; j < t; j++) {
            cout << b[i][j] << "  ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < t; ++j) {
            mult[i][j] = 0;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < t; ++j) {
            for (int k = 0; k < z; ++k) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << endl << "Result: " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < t; ++j) {
            cout << mult[i][j] << " ";
            if (j == t - 1) {
                cout << endl;
            }
        }
    }

    return;

}