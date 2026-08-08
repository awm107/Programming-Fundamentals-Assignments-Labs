#include<iostream>
using namespace std;
int main()
{
	int Totalfloors = 0, Totalrooms = 0, TotalOccupiedRooms = 0, TotalUnoccupiedRooms = 0, OccupiedRooms = 0, rooms = 0;
	double OccupancyRate = 0;
	cout << "Enter number of floors of the hotel: ";
	cin >> Totalfloors;
	cout << "\n";
	for (int i = 1; (i <= Totalfloors)&&(i!=13); i++) //i is floor number//
	{
			cout << "Enter number of rooms in floor " << i << " : ";
			cin >> rooms;
			cout << "How many of the rooms are occupied in floor " << i << " : ";
			cin >> OccupiedRooms;
			cout << "\n";
			Totalrooms = Totalrooms + rooms;
			TotalOccupiedRooms = TotalOccupiedRooms + OccupiedRooms;
			TotalUnoccupiedRooms = Totalrooms - TotalOccupiedRooms;
			OccupancyRate = TotalOccupiedRooms / Totalrooms;
	}
	cout << "The total number of rooms in the hotel are: " << Totalrooms << endl;
	cout << "\n";
	cout << "The total number of occupied rooms in the hotel are: " << TotalOccupiedRooms << endl;
	cout << "\n";
	cout << "The total number of unoccupied rooms in the hotel are: " << TotalUnoccupiedRooms << endl;
	cout << "\n";
	cout << "The occupancy rate of rooms in the hotel is: " << OccupancyRate *100 << endl;
	cout << "\n";
	system("pause");
	return 0;

}