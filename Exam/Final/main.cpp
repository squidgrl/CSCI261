#include <iostream>
#include <string>
using namespace std;

int diffMinMax(const int array[], int arraySize) {

	int min, max;
	min = array[0];
	max = array[0];

	for(int i = 0; i < arraySize; ++i) {
		if(array[i] < min) {
			min = array[i];
		}
		if(array[i] > max) {
			max = array[i];
		}
	}

	return (max - min);

}

int main() {

	string s = "stop rolling";

	cout << s.size() << endl;

	s.replace(4,1,"X");

	cout << s.at(5) << endl;

	return 0;
}
