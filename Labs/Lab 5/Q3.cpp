#include<iostream>
using namespace std;
int main()
{
	long num = 0, revnum = 0;
	int digits = 0;
	cout << "Enter number of digits: ";
	cin >> digits;
	cout << "Enter a number of " << digits << " numbers.";
	cin >> num;
	cout<<"The number in reverse order is: ";
	for (int i = 0; (i < digits); i++)
	{
		revnum = num % 10;
		num = num / 10;
		cout << revnum;
	}
	cout << "\n";
	system("pause");
	return 0;
}