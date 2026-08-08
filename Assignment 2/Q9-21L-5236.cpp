#include<iostream>
using namespace std;
int main()
{
	int d1, d2, m1, m2, y1, y2;
	int daydiff, monthdiff, yeardiff;
	bool Valid;
	Valid = false;
	while (Valid==false)
	{
		cout << "Enter the day of birth: ";
		cin >> d1;
		cout << "Enter the month of birth: ";
		cin >> m1;
		cout << "Enter the year of birth: ";
		cin >> y1;
		cout << "Enter the current day: ";
		cin >> d2;
		cout << "Enter the current month: ";
		cin >> m2;
		cout << "Enter the current year: ";
		cin >> y2;

		if (d1>31 ||d1<1)
		{
			cout << "wrong input." << endl;
		}
		else if (d2 > 31 || d2 < 1)
		{
			cout << "wrong input." << endl;
		}
		else if (m1 > 12 || m1 < 1)
		{
			cout << "wrong input." << endl;
		}
		else if (m2 > 12 || m2 < 1)
		{
			cout << "wrong input." << endl;
		}
		else if (y1 > y2 || y1 < 1900)
		{
			cout << "wrong input." << endl;
		}
		else
		{
			Valid = true;
		}
		if (d2<d1)
		{
			if (m2%2==0)
			{
				d2 = d2 + 31;
				daydiff = d2 - d1;
			}
			else if (m2%2!=0)
			{
				d2 = d2 + 30;
				daydiff = d2 - d1;
			}
		}
		if (m2<m1)
		{
			yeardiff = y2 - y1;
			yeardiff = yeardiff - 1;
			m2 = m2 + 12;
			monthdiff = m2 - m1;
		}
		else
		{
			daydiff = d2 - d1;
			monthdiff = m2 - m1;
			yeardiff = y2 - y1;
		}
		cout << "The age is " << yeardiff << " years " << monthdiff << " months and " << daydiff << " days." << endl;
	}
	system("pause");
	return 0;


}