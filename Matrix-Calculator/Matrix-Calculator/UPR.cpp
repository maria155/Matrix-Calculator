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

        // we enter the numbers for the first matrix
        int i, j;
        int a[10][20];
        int n, m; // n = rows, m = columns
        
        cout << "Enter the number of rows of the first matrix: ";
        cin >> n;
        cout << "Enter the number of columns of the first matrix: ";
        cin >> m;
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++)
            {
                cout << "a[" << i << "][" << j << "]= ";
                cin >> a[i][j];
            }
        }

        // the first matrix

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++) {
               if (a[i][j] < 10) {
                  cout << " ";
                }
                cout << a[i][j] << "  ";
                
            }
            cout << endl;
        }

        //we enter the numbers for the second matrix 

        int b[10][20];
        int k, t; // k = rows, t = columns

        cout << "Enter the number of rows of the second matrix: ";
        cin >> k;
        cout << "Enter the number of columns of the second matrix: ";
        cin >> t;
        for (i = 0; i < k; i++) {
            for (j = 0; j < t; j++)
            {
                cout << "b[" << i << "][" << j << "]= ";
                cin >> b[i][j];
            }
        }

        // the second matrix

        for (i = 0; i < k; i++)
        {
            for (j = 0; j < t; j++) {
                if (b[i][j] < 10) {
                    cout << " ";
                }
                cout << b[i][j] << "  ";

            }
            cout << endl;
        }

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








  

