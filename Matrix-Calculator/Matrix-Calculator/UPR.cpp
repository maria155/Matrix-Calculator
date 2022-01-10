#include "UPR.h"


void UPR::print()
{
	cout << "Matrix Calculator" << endl;
	cout << " " << endl;
    cout << "MENU" << endl;
    cout << " " << endl;
	cout << "1. Multiplicate the matrix by a scalar" << endl;
	cout << "2. Multiplicate the matrix by another matrix" << endl;
	cout << "3. Find the determinant of a matrix with a maximum size of 4x4" << endl;
	cout << "4. Divide the matrix by a scalar" << endl;
	cout << "5. Find the inverse matrix" << endl;
	cout << "6. Transposition the matrix" << endl;
    cout << " " << endl;
    int choice;
    cout << "Please, enter your choice: " << endl;
    cin >> choice;
    cout << " " << endl;

    if (choice < 1 || choice > 6) {
        cout << "Wrong input. Please choose a valid option from the menu.";
        return;
    }

  
}
