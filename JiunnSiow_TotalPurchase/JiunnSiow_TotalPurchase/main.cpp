//Jiunn Siow
//6-16-2016
//To create a program that calculates the total purchase, given five subtotals and sales tax

#include<iostream> //Preprocessor directive
using namespace std;
int main()
{
	const double TAX_RATE = 0.07; //Sales tax rate
	float Item1Price = 15.95;
	float Item2Price = 24.95;
	float Item3Price = 6.95;
	float Item4Price = 12.95;
	float Item5Price = 3.95;
	double Tax;
	double TotalPrice;
	double SubTotal;
	//----------------------------------

	SubTotal = (Item1Price + Item2Price + Item3Price + Item4Price + Item5Price); //The prices of all five items combined
	Tax = SubTotal * TAX_RATE; //The amount of tax for the purchase
	TotalPrice = SubTotal + Tax; //Total amount of purchase

	//----------------------------------

	cout << "The price of item 1 is $" << Item1Price << endl << endl;
	cout << "The price of item 2 is $" << Item2Price << endl << endl;
	cout << "The price of item 3 is $" << Item3Price << endl << endl;
	cout << "The price of item 4 is $" << Item4Price << endl << endl;
	cout << "The price of item 5 is $" << Item5Price << endl << endl; 
	cout << "The subtotal of the purchase is $" << SubTotal << endl << endl; //Display the subtotal of the purchase
	cout << "The tax of the purchase is $" << Tax << endl << endl; //Display the amount of tax
	cout << "The total price of the purchase is $" << TotalPrice << endl << endl; //Display the total price

	//----------------------------------
		system("pause");
		return 0;

}