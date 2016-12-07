//Jiunn Siow
//06-16-2016
//To write a program to determine ocean levels given a specified amount of time.

#include<iostream>
using namespace std;
int main()

{

	const double OCEAN_RISING_RATE = 1.5; //Define the ocean rising rate
	float After5Years = 5;
	float After7Years = 7;
	float After10Years = 10;
	double NewOceanLevel;

	//---------------------------------------

	NewOceanLevel = After5Years * OCEAN_RISING_RATE;
	cout << "The number of millimeters higher that the ocean will be in 5 years is " << NewOceanLevel << endl << endl; //Display new ocean level after five years
	NewOceanLevel = After7Years * OCEAN_RISING_RATE;
	cout << "The number of millimeters higher that the ocean will be in 7 years is " << NewOceanLevel << endl << endl; //Display new ocean level after seven years
	NewOceanLevel = After10Years * OCEAN_RISING_RATE;
	cout << "The number of millimeters higher that the ocean will be in 10 years is " << NewOceanLevel << endl << endl; //Display new ocean level after 10 years

	//---------------------------------------

	system("pause");
	return 0;

}
