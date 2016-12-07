//Jiunn Siow
//07-12-2016
//C string class practice

#include<iostream>
using namespace std;

//Function prototypes
void isEmailValid();
void getNum();
void getName();
void convertToProperCase();
void printAlphabetically();

int main()
{
	char again;
	do
	{
		//isEmailValid();
		//getNum();
		//getName();
		printAlphabetically();
		//convertToProperCase();
		cout << "Would you like to continue?";
		cin >> again;
		cin.ignore();
		cout << endl << endl;
	} while (toupper(again) == 'Y');
	//--------------------------------
	cout << endl << endl;
	system("pause");
	return 0;
}

//---------------------------------
//This function tests the validity of an email address
void isEmailValid()
{
	const int SIZE = 20;
	char email[SIZE];
	int atCount = 0;
	bool hasDot = false;
	bool hasSpace = false;
	bool hasPunct = false;
	cout << "Enter your email please: ";
	cin.getline(email, SIZE - 1);
	for (int i = 0; i < strlen(email); i++)
	{
		if (email[i] == '@')
			atCount++;
		if (email[i] == '.')
			hasDot = true;
		if (isspace(email[i]))
			hasSpace = true;
		if (ispunct(email[i]) && email[i] != '.' && email[i] != '@')
			hasPunct = true;
	}
	if (atCount == 1 && hasDot && !hasSpace && !hasPunct)
		cout << "Thank you for entering your email."<<endl;
	else
		cout << "Sorry, invalid email format!"<<endl;
}
//-----------------------------------------
//This function gets an integer as a string from the user
void getNum()
{
	int num;
	char strNum[10];
	cout << "Enter an integer: ";
	cin.getline(strNum, 9);
	num = atoi(strNum);
	cout << "You entered " << num << endl << endl;
}
//-------------------------------
void getName()
{
	bool funny = false;
	char name[25];
	cout << "Enter your first name: ";
	cin.getline(name, 24);
	for (int i = 0; i < strlen(name); i++)
	{
		if (ispunct(name[i]) || isdigit(name[i]) || isspace(name[i]))
			funny = true;
	}
	if (funny)
		cout << "You have a funny name!" << endl << endl;
}
//-----------------------------------------
//Convert a text to proper case
void convertToProperCase()
{
	char address[35];
	cout << "Enter your address: ";
	cin.getline(address, 24);
	address[0] = toupper(address[0]); //Convert the first character to uppercase
	for (int i = 0; i < strlen(address); i++)
	{
		if (isspace(address[i - 1])) //Check the previous character to see if it is a space
			address[i] = toupper(address[i]); //Convert the character after a space to uppercase
		else
			address[i] = tolower(address[i]);
	}
	cout << address << endl;
}
//-------------------------------------------
//Put names in order
void printAlphabetically()
{
	const int SIZE = 21;
	char name1[SIZE];
	char name2[SIZE];
	cout << "Enter the first name: ";
	cin.getline(name1, SIZE - 1);
	cout << "Enter the second name: ";
	cin.getline(name2, SIZE - 1);
	name1[0] = toupper(name1[0]);
	if (strcmp(name1, name2) < 0)
		cout << name1 << endl << name2 << endl;
	else
		cout << name2 << endl << name1 << endl;
}
