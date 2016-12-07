//Jiunn Siow
//07-11-2016
//Payroll lab assignment

#include<iostream>
using namespace std;

int main()
{
	const int SIZE = 7;
	//Employee iD
	int empID[SIZE] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
	int hours[SIZE] = {};
	double payrate[SIZE] = {};
	double wages[SIZE] = {};
	
	cout << "Hello, this program will calculate the gross wages for all employees." << endl;
	for (int count = 0; count < SIZE; count++)
	{
		cout << "How many hours did employee " << empID[count] << " work?" << endl;
		cin >> hours[count];
		while (hours[count] < 0) //Input validation
		{
			cout << "Incorrect values. Hours must be above 0. Please enter again: " << endl;
			cin >> hours[count];
		}
		cout << "What is the pay rate for employee " << empID[count] << "?" << endl;
		cin >> payrate[count];
		while (payrate[count] < 15.00) //Input validation
		{
			cout << "Incorrect values. Hours must be above 15. Please enter again: " << endl;
			cin >> payrate[count];
		}
		wages[count] = payrate[count] * hours[count]; //Calculates wages
	}
	cout << "The gross wages for all employees are: " << endl; //Display wages
	for (int count = 0; count < SIZE; count++)
	{
		cout << "Employee " << empID[count] << ": $" << wages[count] << endl;
	}
	system("pause");
	return 0;
}