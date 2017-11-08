#include <iostream>
#include <string>
using namespace std;

int main() {

	/*double numbers[2][2] = {1,2,3,4};

	double sums[2] = {0};

	for(int i = 0; i < 2; ++i) {

		for(int j = 0; j < 2; ++j) {

			sums[i] += numbers[i][j];

		}

	}

	for(int i = 0; i < 2; ++i) {

		cout << sums[i] << " ";

	}

	cout << endl;*/

	/*bool arr[4] = {true};

	for(int i = 0; i < 4; ++i) {

		cout << arr[i] << " ";

	}

	cout << endl;*/

	int arr[2][3] = {1,2,3,1,2,3};

	for(int i = 0; i < 2; ++i) {

		for(int j = 0; j < 3; ++j) {

			cout << arr[i][j] << " ";

		}
	}

	cout << endl;

	/*string s = "stop rolling";

	cout << s.size() << endl;

	s.replace(4,1,"X");

	cout << s << endl;

	cout << s.at(5) << endl;*/

	return 0;

}
