/* CSCI 261 Lab XC: Pointers & Dynamic Memory
 *
 * Author: Krista Dunlap
 *
 * Gaining familiarity with pointers, addresses and dynamic memory
 */

//Inlcluding libraries needed
#include <iostream>
using namespace std;

int main() {

    //Declare an integer named iNum with initial value 9.
    int iNum = 9;
    
    //Declare a double named dNum with initial value 14.25.
    double dNum = 14.25;
    
    //Declare two pointers to integers named iPtr1 and iPtr2.
    int* iPtr1;
    int* iPtr2;
    
    //Declare a pointer to a double named dPtr.
    double* dPtr;
    
    //Assign the address of iNum to iPtr1.
    iPtr1 = &iNum;
    
    //Output the address of iNum and be sure to identify to the user what you are displaying. There are two ways you can do this; you should do both, to convince yourself they are the same.
    cout << "The address of iNum is " << &iNum << "." << endl;
    cout << "The address of iNum is " << iPtr1 << "." << endl;
    
    //Use iPtr1 to display the contents of iNum.
    cout << "The contents of iNum are " << *iPtr1 << "." << endl;
     
    //Try to assign the address of dNum to iPtr1. What error message do you see? Comment out this bad line of code, but include the error message as a comment directly below.
    //iPtr1 = &dNum;
    //error: cannot convert ‘double*’ to ‘int*’ in assignment
    
    //Assign the address of dNum to dPtr.
    dPtr = &dNum;
    
    //Output the address and then the contents of dNum (using dPtr).
    cout << "The address of dNum is " << dPtr << " and the contents are " << *dPtr << "." << endl;
    
    // Directly change the value of iNum to 7.
    iNum = 7;
    
    // Use iPtr1 to output the contents of iNum.
    cout << "The contents of iNum are " << *iPtr1 << "." << endl;
    
    // Assign iPtr2 to have the same value as iPtr1. Do not reference iNum; instead use the address stored in iPtr1.
    iPtr2 = iPtr1;
    
    // Output the address in iPtr2.  This should be the same as displayed in step 6.
    cout << "The address of iNum is " << &iNum << "." << endl;
    cout << "The address of iNum is " << iPtr2 << "." << endl;
    
    // Output the value pointed to by iPtr2.
    cout << "The contents of iNum are " << *iPtr2 << "." << endl;
    
    // Using iPtr2, change the contents of iNum to 12.
    *iPtr2 = 12;
    
    // Output the contents of iNum three times, first using iPtr1, then using iPtr2, then iNum directly. In each case, identify what the user is seeing appropriately.
    cout << "The contents of iNum are " << *iPtr1 << "." << endl;
    cout << "The contents of iNum are " << *iPtr2 << "." << endl;
    cout << "The contents of iNum are " << iNum << "." << endl;
    
    
    // Declare another pointer to an integer named iPtr3.
    int* iPtr3;
    
    // Declare an integer named num. Have the user input the value for num, which represents the number of items in an array.
    int num;
    cout << "Please enter a number." << endl;
    cin >> num;
    
    // Using the new operator, give iPtr3 enough memory to contain num integers.
    iPtr3 = new int [num];
    
    // Write a loop that prompts the user for num values and stores the values entered in the iPtr3 array.
    for(int i = 0; i < num; ++i) {
        
        cout << "Please enter value " << (i+1) << ": ";
        cin >> *(iPtr3+i);
        
    }
    
    // Write a loop that sums the values in the array.
    int sum = 0;
    for(int i = 0; i < num; ++i) {
        
        sum += *(iPtr3+i);
        
    }
    
    // Display the sum of the values.
    cout << "The sum is " << sum << "." << endl;
    
    // Using the delete operator, return the memory in iPtr3 back to the available memory heap.
    delete[] iPtr3;
    
    return 0;
    
}
