/* CSCI261 Lab: stringTest
 *
 * Author: Krista Dunlap
 *
 * This program executes some tests that illustrate the properties
 * and behaviors of strings.
 *
 * Copyright 2017 Dr. Jeffrey Paone

Permission is hereby granted, free of charge, to any person
obtaining a copy of this software and associated documentation
files (the "Software"), to deal in the Software without
restriction, including without limitation the rights to use,
copy, modify, merge, publish, distribute, sublicense, and/or
sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following
conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.
 *
*/

#include <iostream>
#include <string>
using namespace std;

void runAllTests();

int main() {

    cout << "Testing your functions...\n\n";
    runAllTests();

    // Exit program.
    return 0;
}


// A generic test function, that simply prints "PASSED" if b is true
// and otherwise prints false. Do not modify this function.
void test(string message, bool b)  {
    cout.width(30);
    cout << message;
    cout.width(10);
    if (b)
      cout << " PASSED\n";
    else
      cout << " FAILED\n";
}

// Returns the length of a string
int stringLength(string s)  {
    return s.length();
}

// Returns the character of a string at a given index
char charAt(string s, int index) {
    return s.at(index);
}

// Returns a concatenation of strings left and right
string stringAppend(string left, string right)  {
    return left.append(right);
}

// Returns the result of inserting a string into another
string stringInsert(string s, string toInsert, int index) {
    return s.insert(index, toInsert);
}

// Replaces part of a string
string stringReplace(string s, string textToReplace, string replaceWith) {
    int index = s.find(textToReplace);
    int length = textToReplace.size();
    return s.replace(index, length, replaceWith);
}

// Returns the first index of character c in string s
int stringFind(string s, char c)  {
    return s.find(c);
}

// Returns part of a string
string stringSubstring(string s, int index, int length) {
    return s.substr(index, length);
}

// Returns the first name, given a full name
string firstName(string s)  {
    int index = s.find(' ');
    return s.substr(0,index);
}

// Returns the middle name, given a full name
string middleName(string s)  {
    int firstSpace = s.find(' ');
    int secondSpace = s.find_last_of(' ');
    int length = (secondSpace - firstSpace);
    return s.substr((firstSpace + 1),(length - 1));
}

// Returns the last name, given a full name
string lastName(string s)  {
    int firstSpace = s.find(' ');
    int secondSpace = s.find_last_of(' ');
    int end = s.length();
    return s.substr((secondSpace + 1), (end - 1));
}

// Returns a string substituting character target with character replacement
string substitute(string s, char target, char replacement)  {
    string replace;
    replace += replacement;
    for(int i = 0; i < (s.length()); ++i) {
        if(s.at(i) == target) {
            s.replace(i, 1, replace);
        }
    }
    return s;
}

// Test suite. You should read, but not modify, this function.
void runAllTests()  {
    test( "Testing length()", 				stringLength("Now") == 3 );
    test( "Testing length()", 				stringLength("Tablet") == 6 );
    test( "Testing at()", 					  charAt("Elephant", 3) == 'p' );
    test( "Testing at()", 					  charAt("Giraffe", 2) == 'r' );
    test( "Testing append()", 				stringAppend("There's a ", "natural mystic.") == "There's a natural mystic." );
    test( "Testing append()", 				stringAppend("It's the ", "eye of the tiger.") == "It's the eye of the tiger." );
    test( "Testing insert()", 				stringInsert("If you carefully.", "listen ", 7) == "If you listen carefully." );
    test( "Testing insert()", 				stringInsert("carefully.", "Watch ", 0) == "Watch carefully." );
    test( "Testing replace()", 				stringReplace("Strings are not the way", "Strings", "Things") == "Things are not the way" );
    test( "Testing replace()", 				stringReplace("Show me the things", "things", "way") == "Show me the way" );
    test( "Testing find()", 			 	  stringFind("Have to face reality now.", 'o') == 6 );
    test( "Testing find()", 			 	  stringFind("Have to face reality now.", 'e') == 3 );
    test( "Testing substr()", 				stringSubstring("Such a natural mystic", 7, 7) == "natural" );
    test( "Testing substr()", 				stringSubstring("Such a natural mystic", 0, 4) == "Such" );
    test( "Testing firstName()", 			firstName("Robert Nesta Marley") == "Robert" );
    test( "Testing firstName()", 			firstName("William Henry Harrison") == "William" );
    test( "Testing firstName()", 			firstName("Chester A Arthur") == "Chester" );
    test( "Testing middleName()", 		middleName("Robert Nesta Marley") == "Nesta" );
	  test( "Testing middleName()", 		middleName("William Henry Harrison") == "Henry" );
    test( "Testing middleName()", 		middleName("Chester A Arthur") == "A" );
    test( "Testing lastName()", 			lastName("Robert Nesta Marley") == "Marley" );
	  test( "Testing lastName()", 			lastName("William Henry Harrison") == "Harrison" );
    test( "Testing lastName()", 			lastName("Chester A Arthur") == "Arthur" );
    test( "Testing substitute()", 		substitute("The Gxxgle", 'x', 'o') == "The Google" );
    test( "Testing substitute()", 		substitute("$chool of Mine$", '$', 's') == "school of Mines" );
    test( "Testing substitute()", 		substitute(substitute("D--", '-', '+'), 'D', 'C') == "C++" );
}
