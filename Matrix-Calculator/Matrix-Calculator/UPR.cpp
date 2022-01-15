#include "UPR.h"


void UPR::print()
{
	cout << "Matrix Calculator" << endl;
	cout << " " << endl;
    cout << "MENU" << endl;
    cout << " " << endl;
	cout << "1. Multiply the matrix by a scalar" << endl;
	cout << "2. Multiply the matrix by another matrix" << endl;
	cout << "3. Find the determinant of a matrix with a maximum size of 4x4" << endl;
	cout << "4. Divide the matrix by a scalar" << endl;
	cout << "5. Find the inverse matrix" << endl;
	cout << "6. Transposition the matrix" << endl;
    cout << " " << endl;
    int choice;
    cout << "Please, enter your choice: " << endl;
    cin >> choice;
    cout << " " << endl;

    switch (choice)
    {
    case 1:
        MultiplyByScalar();
        break;
    case 2:
        MultiplyByAnotherMatrix();
        break;
    case 3:
        Determinant();
        break;
    case 4:
        DivideByScalar();
        break;
    case 5:
        InverseMatrix();
        break;
    case 6:
        Transposition();
        break;
    default:
        cout << "Wrong input. Please choose a valid option from the menu." << endl;
        break;
    }
    
}

    void MultiplyByScalar() {
        cout << "Multiplication of the matrix by a scalar:" << endl;
    }
    void MultiplyByAnotherMatrix() {
        cout << "Multiplication of the matrix by another matrix" << endl;
        cout << " " << endl;

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
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j){
                cout << "Enter element a" << i + 1 << j + 1 << " : ";
                cin >> a[i][j];
            }

        cout << endl << "Enter elements of second matrix:" << endl;
        for (int i = 0; i < z; ++i)
            for (int j = 0; j < t; ++j){
                cout << "Enter element b" << i + 1 << j + 1 << " : ";
                cin >> b[i][j];
            }

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < t; ++j){
                mult[i][j] = 0;
            }

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < t; ++j)
                for (int k = 0; k < z; ++k){
                    mult[i][j] += a[i][k] * b[k][j];
                }

        cout << endl << "Result: " << endl;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < t; ++j){
                cout << " " << mult[i][j];
                if (j == t - 1) {
                    cout << endl;
                }
            }

        return;
    }

    void Determinant() {
        cout << "Finding the determinant of a matrix with a maximum size of 4x4:" << endl;
    }

    void DivideByScalar() {
        cout << "Dividing the matrix by a scalar:" << endl;
    }

    void InverseMatrix() {
        cout << "Finding the inverse matrix:" << endl;
    }

    void Transposition() {
        cout << "Transpositioning the matrix:" << endl;
    }








  

