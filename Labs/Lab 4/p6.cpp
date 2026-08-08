#include<iostream>
using namespace std;
int main()
{
	long year=0;
	cout<<"Enter the year: ";
	cin>>year;
	cout<<"January: 31 days"<<endl;
	if (year % 4==0 || year%100==0 ||year%400==0)
	{
		cout<<"Feburary: 29 days"<<endl;
	}
	else
	{
		cout<<"Feburary: 28 days"<<endl;
	}
	cout<<"March: 31 days"<<endl;
	cout<<"April: 30 days"<<endl;
	cout<<"May: 31 days"<<endl;
	cout<<"June: 30 days"<<endl;
	cout<<"July: 31 days"<<endl;
	cout<<"August: 31 days"<<endl;
	cout<<"September: 30 days"<<endl;
	cout<<"October: 31 days"<<endl;
	cout<<"November: 30 days"<<endl;
	cout<<"December: 31 days"<<endl;
	if (year % 4==0)
	{
		if (year%100==0)
		{
			if (year%400==0)
			{
				cout<<"Leap year."<<endl;
			}
			else
			{
				cout<<"Not a leap year."<<endl;
			}
		}
		else
		{
			cout<<"Leap year."<<endl;
		}
	}
	else
	{
		cout<<"Not a leap year."<<endl;
	}
	system("pause");
	return 0;

}