#include "DeterminantOfTheMatrix.h"
#include <iostream>
using namespace std;

void DeterminantOfMatrix() {
    int n, m, i, j= 0;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;
    int a[10][10];
    float det = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {

            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    }
    for (i = 0; i < 3; i++)
        det = det + (a[0][i] * (a[1][(i + 1) % 3] * a[2][(i + 2) % 3] - a[1][(i + 2) % 3] * a[2][(i + 1) % 3]));

    cout << "The determinant of the matrix is: " << det;

    return;
}