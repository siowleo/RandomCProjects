//Jiunn Siow
//06-28-2016
//Repetition class practice 

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	/*double grade = 0, total = 0;
	int count = 0;
	while (grade >= 0)
	{
		cout << "Enter a grade, or enter a negative number to stop: ";
		cin >> grade;
	    if (grade >= 0)
		{
			total += grade;
			count++;
		}
	}
	//another method of doing the same thing
	//total -= grade;
	//count--;
	//--------------------------------
	//Increment operator
	//--------------------------------
	int num = 3;
	cout << "num: " << num << endl;
	cout << "++num: " << ++num << endl;
	cout << "num++: " << num++ << endl;
	cout << "num: " << num << endl << endl;
	//-----------------------------------
	//Input validation
	cout << "Input validation: " << endl;
	cout << "Enter a value between 1 and 10: ";
	cin >> grade; 
	while (grade < 1 || grade > 10)
	{
		cout << "Invalid value! Please enter a value between 1 and 10: ";
		cin >> grade;
	}
	cout << "Thank you. You entered " << grade << endl << endl;
	//-----------------------------------
	cout << "Average: " << total / count; 
	//--------------------------
	*/
	//Here is a gift for you
	for (int i = 0; i < 1000; i++)
		cout << "I love you!" << static_cast<char>(3) << endl;
//--------------------------------
	for (int i = 1; i <= 100; i++)
	{
		cout << i << ",";
		if (i % 10 == 0)
			cout << endl;
	}
	cout << endl << endl;
	//-----------------
	//Nested loop
	const int MAX = 3;
	for (int i = 1; i <= MAX; i++)
	{
		for (int j = 1; j <= MAX; j++)
			cout << setw(4) << i * j << "  ";
		cout << endl;
	}
	//--------------------

	//--------------------
	cout << endl << endl;
	system("pause");
	return 0;
}