/* CSCI 261 AssignmentXC: People Validator
 *
 * Author: Krista Dunlap
 *
 * Using a Person Class to explore pointers and dynamic memory
 */

//Inlcluding libraries needed
#include <iostream>
#include <fstream>
#include "PersonClass.cpp"
using namespace std;

//selectionSort function declaration
void selectionSort(Person* thePtr, int size);

int main() {
    
    //Declaring/initializing validCount & validCount pointer
    int validCount = 0;
    int* validPtr = &validCount;
    
    //Declaring newPerson
    Person newPerson;
    
    //Declaring fromFile and opening PersonFile.dat
    ifstream fromFile;
    fromFile.open("PersonFile.dat");
    
    //Throwing an error if file is not open
    if(!fromFile.is_open()) {
        cerr << "File error!" << endl;
    }

    //Using while loop to go through file
    while(!fromFile.eof()) {

    	//Using input from file and saving as newPerson
    	newPerson.input(fromFile);

    	//Adding to validCount if person meets my criteria
    	if(newPerson.validate()) {
    		*validPtr += 1;
    	}

    }

    //Printing number of valid people in file
    cout << "The number of valid people is: " << *validPtr << endl << endl;

    //Declaring dynamic array
    Person* ptrArray = new Person [validCount];

    //Resetting reading location
    fromFile.clear();
    fromFile.seekg(0,ios::beg);

    //Declaring offset variable
    int offset = 0;

    cout << "The non-valid people in the file are..." << endl;

    //Using while loop to go through file
    while(!fromFile.eof()) {

    	//Using input from file and saving as newPerson
    	newPerson.input(fromFile);

    	//If person is valid, adding person to array & incrementing offset
    	if(newPerson.validate()) {
    		ptrArray[offset] = newPerson;
    		++offset;
    	}

    	//If person is not valid, printing person
    	else {
    		newPerson.output(cout);
    		cout << endl;
    	}

    }

    //Using selectionSort function to sort the array
    selectionSort(ptrArray,validCount);

    //Printing shortest valid person
    cout << "The shortest valid person is..." << endl;
    (*ptrArray).output(cout);
    cout << endl;

    //Printing median valid person
    cout << "The median valid person is..." << endl;
    (*(ptrArray+((validCount/2)+1))).output(cout);
    cout << endl;

    //Printing tallest valid person
    cout << "The tallest valid person is..." << endl;
    (*(ptrArray+validCount-1)).output(cout);
    cout << endl;

    //Closing file & deleting array
    fromFile.close();
    delete[] ptrArray;

    return 0;
    
}

//selectionSort function definition
void selectionSort(Person* thePtr, int size) {

	//Switching size to an unsigned int
	unsigned int theSize = size;

	//Initializing min to the first element in array
	int min = (*thePtr).getHeight();

	//Initializing index to 0
	int index = 0;

	//Creating a tempPerson place holder
	Person tempPerson;

	//First for loop
	for(unsigned int i = 0; i < (theSize-1); ++i) {

		//Second for loop
		for(unsigned int j = i; j < theSize; ++j) {

			//Finding lowest height in the unsorted part of the list
			if(min > (*(thePtr+j)).getHeight()) {
				min = (*(thePtr+j)).getHeight();
				index = j;
			}

		}

		//Using placeholder to switch the min with the i-th place
		tempPerson = *(thePtr+i);
		*(thePtr+i) = *(thePtr+index);
		*(thePtr+index) = tempPerson;

	}

	return;

}
