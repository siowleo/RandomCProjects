//Jiunn Siow
//06-29-2016
//Uccupancy rate for hotel

#include<iostream>
using namespace std;

int main()
{
	double hotelFloors, hotelRooms, hotelRoomsOccupied;
	const int SKIP_FLOOR = 13;
	int totalHotelRooms = 0;
	int totalRoomsOccupied = 0;
	int count = 1;
	double percentageOccupied = totalRoomsOccupied / totalHotelRooms;
	cout << "How many floors does your hotel have? Please enter: ";
	cin >> hotelFloors;
	while (hotelFloors <= 0)
	{
		cout << "Invalid value!" << endl;
		cout << "Enter a number greater than 0: ";
		cin >> hotelFloors;
	}
	while (count <= hotelFloors)
	{   
		if (hotelFloors == 13)
			continue;
		cout << "How many rooms are on floor " << count << "? Please enter: ";
		cin >> hotelRooms;
		while (hotelRooms <= 0)
		{
			cout << "Invalid value!" << endl;
			cout << "Enter a number greater than 0: ";
			cin >> hotelRooms;
		}
		totalHotelRooms += hotelRooms;
		cout << "How many hotel rooms are occupied on floor " << count << "? Please enter: ";
		cin >> hotelRoomsOccupied;
		while (hotelRooms <= 0)
		{
			cout << "Invalid value!" << endl;
			cout << "Enter a number greater than 0: ";
			cin >> hotelRoomsOccupied;
		}
		totalRoomsOccupied += hotelRoomsOccupied;
		count++;
	}
	static_cast<double>(totalRoomsOccupied);
	static_cast<double>(totalHotelRooms);
	cout << "The percentage of hotel rooms occupied in this hotel is: " << percentageOccupied * 100 << "%"<< endl;
	//-----------------------
	cout << endl << endl;
	system("pause");
	return 0;
}