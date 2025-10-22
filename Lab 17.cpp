#include <iostream>
using namespace std;
double getScore() {
	//creates variable
	double score;
	//Inputs scores from the user
	cin >> score;
	//Checks the scores to make sure they're greater than 0 but less than 100
	while (score > 100 || score < 0) {
		cout << "Invalid Entry \n";
		cin >> score;
	}
	//Returns the score
	return score;
}
void displayLetterGrade(double score) {
	//Checks the score and outputs it with corresponding letter grade
	if (score >= 90) {
		cout << "You Got an A \n";
	}
	else if (score >= 80) {
		cout << "You Got a B \n";
	}
	else if (score >= 70) {
		cout << "You Got a C \n";
	}
	else if (score >= 60) {
		cout<<"You Got a D \n";
	}
	else {
		cout << "You Got an F \n";
	}
}
int main() {
	double score1, score2, score3;

	cout << "Enter your three exam scores below.\n";
	

	// Call getScore three times to get and validate each test score
	score1 = getScore();
	score2 = getScore();
	score3 = getScore();

	// Display letter grades for each exam
	cout << "\nLetter grades:\n";
	cout << "Exam 1: ";
	displayLetterGrade(score1);

	cout << "Exam 2: ";
	displayLetterGrade(score2);

	cout << "Exam 3: ";
	displayLetterGrade(score3);

	return 0;
}