//Jiunn Siow
//06-27-2016
//Fat Gram Calculator Lab Assignment
//pakbaz
#include<iostream>
using namespace std;

int main()
{
	double calories, fatGrams;
	const double FAT_GRAM_CALORIES = 9;
	cout << "Hello, this program will calculate the percentage of calories that come from fat." << endl;
	cout << "Please enter the total number of calories and fat grams in your food, seperate with a space: ";
	cin >> calories >> fatGrams; 
	//Error Check
	if (calories < 0)
	{
		cout << "Calorie value is wrong! Please enter again. ";
		cin >> calories;
	}
	if (fatGrams < 0)
	{ 
		cout << "Fat gram value is wrong! Please enter again. ";
		cin >> fatGrams; 
	}
	//Calculations
	double FatCalories = fatGrams * FAT_GRAM_CALORIES;
	double PercentageFatCalories = FatCalories / calories;
	if (PercentageFatCalories > 1 || PercentageFatCalories < 0)
		cout << "Invalid Fat Grams or calories!";

   // if (PercentageFatCalories < 1 && PercentageFatCalories > 0)
	else
	{
		cout << "The percentage of calories that come from fat is: " << PercentageFatCalories * 100 << "%" << endl;
		if (PercentageFatCalories < 0.30)
			cout << "This food is low in fat." << endl;

	}

//-------------
	cout << endl << endl; 
	system("pause");
	return 0;
}
