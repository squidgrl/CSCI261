/* CSCI 261 Lab 4C: Matrix Multiplication
 *
 * Author: Krista Dunlap
 *
 * Doing matrix multiplication with a user inputted matrix
 */

//Inlcluding libraries needed
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	//Declaring/intializing
	const int ROWS = 3;
	const int COLS = 3;
	int userMatrix[ROWS][COLS];
	const int T_ROWS = COLS;
	const int T_COLS = ROWS;
	int transMatrix[T_ROWS][T_COLS];

	cout << "Enter a " << ROWS << "x" << COLS << " matrix." << endl;

	//Using a loop to input matrix into an array
	for(int i = 0; i < ROWS; ++i) {

		for(int j = 0; j < COLS; ++j) {

			cout << "Enter Row " << (i+1) << ", Column " << (j+1) << ": ";

			cin >> userMatrix[i][j];

		}

	}

	cout << endl << "The matrix you entered is:" << endl;

	//Outputting the matrix using a loop
	for(int i = 0; i < ROWS; ++i) {

		cout << "[";

		for(int j = 0; j < COLS; ++j) {

			cout << right << setw(5) << userMatrix[i][j];

		}

		cout << right << setw(2) << "]" << endl;

	}

	//Using loop to create transpose of userMatrix
	for(int i = 0; i < T_ROWS; ++i) {

		for(int j = 0; j < T_COLS; ++j) {

			transMatrix[i][j] = userMatrix[j][i];

		}

	}

	cout << "The transpose of this matrix is:" << endl;

	//Outputting the matrix using a loop
	for(int i = 0; i < T_ROWS; ++i) {

		cout << "[";

		for(int j = 0; j < T_COLS; ++j) {

			cout << right << setw(5) << transMatrix[i][j];

		}

		cout << right << setw(2) << "]" << endl;

	}

	return 0;
}
