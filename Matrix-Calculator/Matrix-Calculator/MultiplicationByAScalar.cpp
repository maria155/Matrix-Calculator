#include "MultiplicationByAScalar.h"
#include <iostream>
using namespace std;

void MultiplicationByScalar() {
    double scalar;
    double a[10][10];
    //double mult[10][10];
    int n, m; // n = rows of first matrix, m = columns of first matrix
    
    cout << "Enter scalar: ";
    cin >> scalar;

    cout << "Enter rows for first matrix: ";
    cin >> n;
    cout << "Enter columns for first matrix: ";
    cin >> m;

    cout << endl << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
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


    return;
}