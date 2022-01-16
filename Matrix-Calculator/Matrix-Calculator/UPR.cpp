#include "UPR.h"
#include "MultiplicationByAnotherMatrix.h"
#include <iostream>
using namespace std;


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
        cout << "Multiplication of the matrix by a scalar" << endl;
        cout << " " << endl;

    }
    void MultiplyByAnotherMatrix() {
        cout << "Multiplication of the matrix by another matrix" << endl;
        cout << " " << endl;

        MultiplicationByMatrix();
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








  

