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

	//Declaring/intializing matrices and their rows/columns
	const int ROWS = 3;
	const int COLS = 3;
	int userMatrix[ROWS][COLS];
	const int T_ROWS = COLS;
	const int T_COLS = ROWS;
	int transMatrix[T_ROWS][T_COLS];
	const int P_ROWS = ROWS;
	const int P_COLS = ROWS;
	int prodMatrix[P_ROWS][P_COLS];

	cout << "Enter a " << ROWS << "x" << COLS << " matrix." << endl;

	//Using a loop to input matrix into an array
	for(int i = 0; i < ROWS; ++i) {

		for(int j = 0; j < COLS; ++j) {

			cout << "Enter Row " << (i+1) << ", Column " << (j+1) << ": ";

			cin >> userMatrix[i][j];

		}

	}

	cout << endl << "The matrix you entered is:" << endl;

	//Outputting the user matrix using a loop
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

	//Outputting the transposed matrix using a loop
	for(int i = 0; i < T_ROWS; ++i) {

		cout << "[";

		for(int j = 0; j < T_COLS; ++j) {

			cout << right << setw(5) << transMatrix[i][j];

		}

		cout << right << setw(2) << "]" << endl;

	}

	//Using a loop to calculate product matrix
	for(int i = 0; i < ROWS; ++i) {

		for(int j = 0; j < COLS; ++j) {

			prodMatrix[i][j] = 0;

			for(int k = 0; k < COLS; ++k) {

				prodMatrix[i][j] += userMatrix[i][k] * transMatrix[k][j];

			}

		}

	}

	cout << "The product is:" << endl;

	//Outputting the product matrix using a loop
	for(int i = 0; i < P_ROWS; ++i) {

		cout << "[";

		for(int j = 0; j < P_COLS; ++j) {

			cout << right << setw(5) << prodMatrix[i][j];

		}

		cout << right << setw(2) << "]" << endl;

	}

	return 0;
}
