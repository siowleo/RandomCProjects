//Jiunn Siow
//07-07-2016
//Arrays, class practice

#include<iostream>
using namespace std;
#include<string>
#include<iomanip>

//Function prototypes
void fillArrays(string[], double[], int);
void printArrays(const string[], const double[], int);
void makeMultiDimensionalArray();
double calcAverage(double[], int);

int main()
{
	const int SIZE = 1;
	string names[SIZE];
	double grades[SIZE];

	cout << "Address of the first element of names array " << names << endl;
	cout << "Address of the first element of grades array " << grades << endl;
	cout << "Size of names array: " << sizeof(names) << endl;
	cout << "Size of grades array: " << sizeof(grades) << endl;

	makeMultiDimensionalArray();
	cout << endl;
	fillArrays(names, grades, SIZE);
	printArrays(names, grades, SIZE);
	cout << calcAverage(grades, SIZE) << endl;

	cout << endl;
	//-----------------------
	cout << endl << endl;
	system("pause");
	return 0;
}

//----------------------------------
//This function fills two parallel arrays
void fillArrays(string students[], double scores[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter a name: ";
		getline(cin, students[i]);
		cout << "Enter a grade for " << students[i] << ":";
		cin >> scores[i];
		cin.ignore();
	}
}
//-----------------------------------
//This function prints values in the arrays
void printArrays(const string students[], const double scores[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << setw(15) << left << students[i] << scores[i] << endl;
	}
}
//-----------------------
//Calculate the average
double calcAverage(double scores[], int size)
{
	double total = 0;
	for (int i = 0; i < size; i++)
		total += scores[i];
	return total / size;
}
//-----------------------
void makeMultiDimensionalArray()
{
	const int SIZE = 10;
		int numbers[SIZE][SIZE];
		//Loop to fill the array 
		for (int row = 0; row < SIZE; row++)
		{
			for (int col = 0; col < SIZE; col++)
				numbers[row][col] = (row + 1)*(col + 1);
		}
		//Loop to print the array 
		for (int row = 0; row < SIZE; row++)
		{
			for (int col = 0; col < SIZE; col++)
			cout << numbers[row][col] << " , ";
			cout << endl;
		}
}