//Jiunn Siow
//07-05-2016
//Functions class practice

#include<iostream>
using namespace std;
void printNumbers(int); //Prototype
void countNums(int);
bool isEven(int);
void add(double, double, double&);
void add(double, double);
void print(double, double, double);

int main()
{
{
	int num;
	double num1, num2, total;
	printNumbers(10); //function call
	//Call the function 100 times
	for (int i = 0; i < 100; i++)
	{
		countNums(100);
	}
	cout << endl << endl;
	//------------------------------
	char end;
	cout << "Would you like to close the program? Y/N: ";
	cin >> end;
	if (end = 'Y' || end == 'y')
		exit(EXIT_SUCCESS);
	//Call the isEven function
	cout << "Enter an integer, I'll tell you if it is odd or even: ";
	cin >> num;
	if (isEven(num))
		cout << num << " is even. " << endl;
	else
		cout << num << " is odd. " << endl;
	//------------------------
	//Call the add function
	cout << "Please give me two numbers. I will add them up: ";
	cin >> num1 >> num2;
	add(num1, num2, total);
	cout << num1 << " + " << num2 << " = " << total << endl;
	add(45, 25.5, total); //If the argument is passed by reference, it must be a variable
	add(num1, num2);
	//---------------------------
	cout << endl << endl;
	system("pause");
	return 0;
}

//--------------------------
//Print numbers
//This functions prints numbers
	void printNumbers(int count)
	{
	for (int i = 0; i < count; i++)
	{
		cout << i << ",";
		if (i % 10 == 0)
			cout << endl;
	}
	cout << endl;
    }
//--------------------------
//This function counts numbers
void countNums()
{
	static int num = 0; //extend the life of the variable
	cout << ++num << ",";
}
//-----------------------------
bool isEven(int num)
{
	if (num % 2 == 0)
		return true;
	return false;
}
//-----------------------------
//Pass by reference
void add(double num1, double num2, double& result)
{
	result = num1 + num2;
}
//-----------------------------
//Function overloading
void add(double num1, double num2)
{
	double result = num1 + num2;
	print(num1, num2, result);
}
//--------------------------
void print(double num1, double num2, double result)
{
	cout << num1 << " + " << num2 << " = " << result << endl;

}

