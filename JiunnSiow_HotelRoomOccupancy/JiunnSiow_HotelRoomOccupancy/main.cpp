//Jiunn Siow
//06-29-2016
//Occupancy rate for hotel

#include<iostream>
using namespace std;

int main()
{
	int hotelFloors, hotelRooms, hotelRoomsOccupied;
	const int SKIP_FLOOR = 12;
	int totalHotelRooms = 0;
	int totalRoomsOccupied = 0;
	int floor = 1;

	cout << "Hello, this program will calculate the occupancy rate of your hotel. " << endl;
	cout << "How many floors does your hotel have? Please enter: ";
	cin >> hotelFloors; //User input
	while (hotelFloors <= 0)
	{
		cout << "Invalid value!" << endl;
		cout << "Enter a number greater than 0: ";
		cin >> hotelFloors;
	}

	while (floor <= hotelFloors) //Loop will end at specified floor count
	{
			cout << "How many rooms are on floor " << floor << "? Please enter: ";
			cin >> hotelRooms;
			while (hotelRooms < 10)
			{
				cout << "Invalid value You must have more than 10 rooms per floor!" << endl;
				cout << "Enter a number greater than or equal to 10: ";
				cin >> hotelRooms;
			}
			totalHotelRooms += hotelRooms;
			cout << "How many hotel rooms are occupied on floor " << floor << "? Please enter: ";
			cin >> hotelRoomsOccupied;
			while (hotelRoomsOccupied <= 0 || hotelRoomsOccupied > totalHotelRooms)
			{
				cout << "Invalid value! You cannot have negative number of occupied rooms, or you cannot have more occupied rooms than total rooms." << endl;
				cout << "Enter a number greater than 0: ";
				cin >> hotelRoomsOccupied;
			}
			totalRoomsOccupied += hotelRoomsOccupied;
			if (floor == SKIP_FLOOR)
			{
				++hotelFloors;
				++floor;
			}
			//Increment
			floor++;
		}
	cout << "The hotel has " << totalHotelRooms << " rooms." << endl;
	cout << "The hotel has " << totalRoomsOccupied << " occupied rooms." << endl;
	cout << "The percentage of hotel rooms occupied in this hotel is: " << static_cast<double>(totalRoomsOccupied) / totalHotelRooms * 100 << "%" << endl;
	//-----------------------
	cout << endl << endl;
	system("pause");
	return 0;
}
