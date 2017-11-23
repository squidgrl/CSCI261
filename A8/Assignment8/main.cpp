/* CSCI 261 Assignment 7: Magic Item
 *
 * Author: Krista Dunlap
 *
 * Testing Magic Items
 */

#include <iostream>
#include "SS.cpp"
#include "MF.cpp"
#include "L.cpp"
using namespace std;

int main() {

	//FIRST
	cout << "We will begin with our first magic item!" << endl;

	//Creating first magic item
	MagicItem newItem1;

	//Printing Question 1
	cout << newItem1.getCandyQ() << endl;

	string candyAns;

	//Getting answer for Question 1
	getline(cin, candyAns);

	//If answer is correct, adding to score
	if(newItem1.checkCandy(candyAns)) {
		newItem1.setUserScore(1);
	}

	//Printing Question 2
	cout << newItem1.getStatueQ() << endl;

	string statueAns;

	//Getting answer for Question 2
	getline(cin, statueAns);

	//If answer is correct, adding to score
	if(newItem1.checkStatue(statueAns)) {
		newItem1.setUserScore(1);
	}

	//Printing Question 3
	cout << newItem1.getMQuestion() << endl;

	int mAns;

	//Getting answer to Question 3
	cin >> mAns;

	//If answer is correct, adding to score
	if(newItem1.checkM(mAns)) {
		newItem1.setUserScore(1);
	}

	//Awarding prize
	newItem1.awardPrize(newItem1);

	//SECOND
	cout << "Now we will use the second magic item!" << endl << endl;

	//Creating second magic item
	MagicBook newItem2;

	//Calling introduction
	newItem2.introduction();

	cout << endl;

	//THIRD
	cout << "We will now use our third magic item!" << endl;

	//Creating third magic item
	Problem newItem3;

	//Calling introduction
	newItem3.introduction();

	//Printing problem 1
	cout << newItem3.getProblem1() << endl;

	//Getting user input
	int ans1;
	cin >> ans1;
	int correctAns = 0;

	//If answer is correct, adding to point
	if(newItem3.checkAnswer1(ans1)) {

		++correctAns;

	}

	//Printing problem 2
	cout << newItem3.getProblem2() << endl;

	//Getting user answer
	int ans2;
	cin >> ans2;

	//If answer is correct, adding to points
	if(newItem3.checkAnswer2(ans2)) {

		++correctAns;

	}

	//Printing problem 3
	cout << newItem3.getProblem3() << endl;

	//Getting answer from user
	int ans3;
	cin >> ans3;

	//If answer is correct, adding points
	if(newItem3.checkAnswer3(ans3)) {

		++correctAns;

	}

	//Printing prize
	cout << "This magic item had no prize built in but I'll make one up. You won " << correctAns << " gold pieces." << endl;

	return 0;
}
