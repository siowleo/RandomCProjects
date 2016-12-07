//Jiunn Siow
//06-21-2016
//Expressions and interactivity

#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib> //For rand
#include<iomanip> //For output formatting
#include<ctime> //To seed the rand
using namespace std;

int main()

{

	string name1 = "Kirsten Young", name2 = "Adam Kuo";
	cout << setprecision(2) << fixed << showpoint; //To display numbers after the decimals
	double income1 = 4333.24242, income2 = 2443;
	cout << " How much do you make? ";
	cin >> income1;
	cin.ignore();
	cout << " What is your name? ";
	getline(cin, name1);
	cout << setw(25) << left << setfill('.') << name1 << income1 << endl;
	cout << setw(25) << left << name2 << income2 << endl;
	//------------------------------
	//Expressions
	cout << " 5 - 8 % 3 + 2 * 3 / 5 = " << 5 - 8 % 3 + 2 * 3 / 5 << endl;
	cout << " 3 + 3 - 7 % 8 / 2 * 3 = " << 3 + 3 - 7 % 8 / 2 * 3 << endl;
	//------------------------------
	//Static cast
	char letter = 'b';
	cout << "The ASCII value of " << letter << " is " << static_cast<int>(letter) << endl;
	int num = 5900;
	cout << num << " is the ASCII value for " << static_cast<char>(num) << endl;
	//------------------------------
	//Rand
	srand(time(0));
	cout << rand() % 100 + 1 << endl;
	cout << rand() % 100 + 1 << endl;
	cout << rand() % 100 + 1 << endl;
	//------------------------------
	//Using combined operators
	int num1 = 5;
	num1 += 3;
	cout << "The result of num1 += 3 is " << num1 << endl;
	//------------------------------
	cout << endl << endl;
	system("pause");
	return 0;

}