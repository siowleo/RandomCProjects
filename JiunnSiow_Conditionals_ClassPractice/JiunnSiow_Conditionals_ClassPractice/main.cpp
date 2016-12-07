//Jiunn Siow
//06-27-2016
//Conditionals 

#include<iostream>
using namespace std;

int main()
{
	
	double grade;
	char LetterGrade;
	cout << "Enter a grade between 0 and 100. I will give you the letter grade.";
	cin >> grade;
	//Error Checking
	if (grade < 0 || grade > 100)
	{
	cout << "Invalid grade! Please enter again.";
	cin >> grade;
	}
	//Decide what letter grade
	if (grade >= 90)
	LetterGrade = 'A';
	else if (grade >= 80)
	LetterGrade = 'B';
	else if (grade >= 70)
	LetterGrade = 'C';
	else if (grade >= 60)
	LetterGrade = 'D';
	else
	LetterGrade = 'F';
	cout << "Letter Grade: " << LetterGrade << endl;
	if (LetterGrade <= 'C') //ASCII Values
	cout << "You passed." << endl;
	else
	cout << "Sorry you did not pass." << endl;
	
	//--------------------
	double age, income;
	cout << "You will get a $100 raise if you are older than 70 and make less than 1000." << endl;
	cout << "Enter your age and income with a space in between: ";
	cin >> age >> income;
	if (age > 70 && income < 1000)
	{
		income += 100;
		cout << "You will get a raise. your income is now $" << income << endl;
	}
	else
	{
		cout << "Sorry, no raise for you.";
		if (age < 70 && income >1000)
			cout << "You are too young and make too much to qualify for a raise." << endl;
		else
		{
			if (age <= 70)
				cout << "You are too young to qualify for a raise." << endl;
			else
			cout << "Your income does not qualify for a raise." << endl;
		}
    }
	//--------------------
	cout << endl << endl;
	system("pause");
	return 0;
}