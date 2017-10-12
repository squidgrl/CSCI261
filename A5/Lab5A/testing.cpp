//test

#include <iostream>
#include <string>
using namespace std;

int main() {

	string s = "$chool i$ of all$ Mine$";
	char target = '$';
	char replacement = 's';

	//REPLACE, arguments: string s, char target, char replacement
	for(int i = 0; i < (s.length()- 1); ++i) {
		if(s.at(i) == '$') {
			s.replace(i, 1, replacement);
		}
	}


	return 0;
}
