/* CSCI261 AssignmentXC: Person Class
 *
 * Description: Definition file for Person Class
 *
 * Author: Krista Dunlap
 *
 */

//Including person declaration file
#include "PersonClass.h"

//Default constructor
Person::Person() {
    
    firstName  = "first";
    lastName = "last";
    gender = 'M';
    age = 25;
    height = 6.3;
    likesMonsterMovies = false;
    likesCantaloupe = true;
    
}

//Function that returns true if criteria met
bool Person::validate() {
    
    if( (gender == 'M') && (age >= 18 && age <= 40) && (height < 7.5) && (likesCantaloupe) && (likesMonsterMovies) ) {
        
        return true;
        
    }
        
    return false;
    
}

//Input function that fills in all data members from a given istream
void Person::input(istream& input) {

    input >> firstName;
    input >> lastName;
    input >> gender;
    input >> age;
    input >> height;
    input >> likesMonsterMovies;
    input >> likesCantaloupe;

    return;
    
}

//Output function that prints all data members to a given ostream
void Person::output(ostream& output) {
    
    output << "First Name: " << firstName << endl;
    output << "Last Name: " << lastName << endl;
    output << "Gender: " << gender << endl;
    output << "Age: " << age << endl;
    output << "Height: " << height << " feet" << endl;
    output << "Likes Monster Movies: " << boolToWord(likesMonsterMovies) << endl;
    output << "Likes Cantaloupe: " << boolToWord(likesCantaloupe) << endl;
    
    return;

}

//Function to switch a bool to a yes/no
string Person::boolToWord(bool thing) {

    if(thing == true) {
        return "Yes";
    }

    return "No";

}

//Function that returns Person height
int Person::getHeight() {

    return height;

}
