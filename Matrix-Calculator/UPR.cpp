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
* <The menu that is going to be displayed when you run the programme.>
*
*/


#include "UPR.h"
#include "MultiplicationByAnotherMatrix.h"
#include "MultiplicationByAScalar.h"
#include "DeterminantOfTheMatrix.h"
#include "DivisionByAScalar.h"
#include "TheInverseMatrix.h"
#include "TranspositionOfTheMatrix.h"
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
    cout << "Please enter your choice (1-6): " << endl;
    cin >> choice;
    cout << " " << endl;

    // I use switch-case so that the user can choose one of the options from the menu.
    switch (choice)
    {
    case 1:
        MultiplyByAScalar();
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

    void MultiplyByAScalar() {
        cout << "Multiplication of the matrix by a scalar" << endl;
        cout << " " << endl;


        MultiplicationByScalar();
    }
    void MultiplyByAnotherMatrix() {
        cout << "Multiplication of the matrix by another matrix" << endl;
        cout << " " << endl;

        MultiplicationByMatrix();
    }

    void Determinant() {
        cout << "Finding the determinant of a matrix with a maximum size of 4x4" << endl;
        cout << " " << endl;

        DeterminantOfMatrix();
    }

    void DivideByScalar() {
        cout << "Dividing the matrix by a scalar" << endl;
        cout << " " << endl;

        DivisionByScalar();
    }

    void InverseMatrix() {
        cout << "Finding the inverse matrix" << endl;
        cout << " " << endl;

        Inverse();
    }

    void Transposition() {
        cout << "Finding the transpose of the matrix" << endl;
        cout << " " << endl;

        TranspositionOfMatrix();
    }








  

