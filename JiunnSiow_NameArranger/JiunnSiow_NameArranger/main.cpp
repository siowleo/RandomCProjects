//Jiunn Siow
//07-13-2016
//Chapter 10 lab assignment name arranger

#include<iostream>
using namespace std;

int main()
{
	const int SIZE = 20;
	char firstName[SIZE];
	char middleName[SIZE];
	char lastName[SIZE];
	char fullName[SIZE*3];
	cout << "What is your first name? : "; //Get first name
	cin.getline(firstName, SIZE - 1);
	cout << "what is your middle name? : "; //Get middle name
	cin.getline(middleName, SIZE - 1);
	cout << "what is your last name? : "; //Get last name
	cin.getline(lastName, SIZE - 1);
	//-------------------------------------
	strncpy_s(fullName, lastName, SIZE*3-1); //Concatenate arrays
	strcat_s(fullName, ",");
	strcat_s(fullName, " ");
	strcat_s(fullName, firstName);
	strcat_s(fullName, " ");
	strcat_s(fullName, middleName);
	cout << fullName;
	//------------------------------------
	cout << endl << endl;
	system("pause");
	return 0;
}