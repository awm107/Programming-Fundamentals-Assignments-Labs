#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;
	double lenAB = 0.0, lenBC = 0.0, lenAC = 0.0;
	cout << "Enter the x coordinate of p1: ";
	cin >> x1;
	cout << "Enter the y coordinate of p1: ";
	cin >> y1;
	cout << "Enter the x coordinate of p2: ";
	cin >> x2;
	cout << "Enter the y coordinate of p2: ";
	cin >> y2;
	cout << "Enter the x coordinate of p3: ";
	cin >> x3;
	cout << "Enter the y coordinate of p3: ";
	cin >> y3;
	cout << "p1: ( " << x1 << " , " << y1 << " )" << endl;
	cout << "p2: ( " << x2 << " , " << y2 << " )" << endl;
	cout << "p3: ( " << x3 << " , " << y3 << " )" << endl;

	lenAB = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	lenBC = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	lenAC = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));

	if (lenAB>lenBC && lenAB>lenAC)
	{
		if (lenAB==sqrt(pow(lenBC,2)+pow(lenAC,2)))
		{
			cout << "Right Angle Triangle." << endl;
		}
		else
		{
			cout << "Scalene Triangle." << endl;
		}
	}
	else if (lenBC>lenAB && lenBC>lenAC)
	{
		if (lenBC == sqrt(pow(lenAB, 2) + pow(lenAC, 2)))
		{
			cout << "Right Angle Triangle." << endl;
		}
		else
		{
			cout << "Scalene Triangle." << endl;
		}
	}
	else if (lenAC>lenAB && lenAC>lenBC)
	{
		if (lenAC == sqrt(pow(lenAB, 2) + pow(lenBC, 2)))
		{
			cout << "Right Angle Triangle." << endl;
		}
		else
		{
			cout << "Scalene Triangle." << endl;
		}
	}
	system("pause");
	return 0;

}