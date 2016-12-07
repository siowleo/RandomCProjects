//Jiunn Siow
//06-21-2016
//Create a program that asks the user how many cookies she wants to make, then determine # of ingredients

#include<iostream>
#include<iomanip> //Set precision
using namespace std;

int main()

{
	const double SUGAR = 1.5; 
	const double BUTTER = 1; 
	const double FLOUR = 2.75; 
	const double COOKIES = 48;
	double FinalCookies;
	double FinalSugar;
	double FinalButter;
	double FinalFlour;
	//-----------------------------
	cout << "Hello, this program will help you determine the number of ingredients you need. " << endl;
	cout << " How many cookies do you want to make? " << endl;
	cin >> FinalCookies; //User input
	double SUGAR_RATIO = SUGAR / COOKIES;
	double BUTTER_RATIO = BUTTER / COOKIES;
	double FLOUR_RATIO = FLOUR / COOKIES;
	FinalSugar = FinalCookies * SUGAR_RATIO;
	FinalButter = FinalCookies * BUTTER_RATIO;
	FinalFlour = FinalCookies * FLOUR_RATIO;
	cout << setprecision(2) << fixed << showpoint;
	cout << " You will need " << FinalSugar << " cups of sugar." << endl;
	cout << " You will need " << FinalButter << " cups of butter." << endl;
	cout << " You will need " << FinalFlour << " cups of flour." << endl;
	//-----------------------------
	system("pause");
	return 0;
}