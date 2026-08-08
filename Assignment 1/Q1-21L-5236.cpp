#include<iostream>
using namespace std;
int main()
{
	long number = 0, sum = 0;
	cout << "Enter a six digit number: ";
	cin >> number;
	if (number%10!=0)
	{
		sum = number % 10 + sum;
		number = number / 10;
	}
	if (number % 10 != 0)
	{
		sum = number % 10 + sum;
		number = number / 10;
	}
	if (number % 10 != 0)
	{
		sum = number % 10 + sum;
		number = number / 10;
	}
	if (number % 10 != 0)
	{
		sum = number % 10 + sum;
		number = number / 10;
	}
	if (number % 10 != 0)
	{
		sum = number % 10 + sum;
		number = number / 10;
	}
	if (number % 10 != 0)
	{
		sum = number % 10 + sum;
		number = number / 10;
	}
	cout << "The sum of the six numbers are: " << sum << endl;
	system("pause");
	return 0;
	}