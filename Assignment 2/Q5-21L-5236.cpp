#include<iostream>
using namespace std;
int main()
{
	int odd = 0, even = 0, num = 0;
	cout << "Enter any number: ";
	cin >> num;
	while (num!=-1)
	{
		if (num%2==0)
		{
			even += 1;
		}
		else if (num%2==1)
		{
			odd += 1;
		}
		cout << "Even: " << even << endl;
		cout << "Odd: " << odd << endl;
		cout << "Enter another number: ";
		cin >> num;
	}
	system("pause");
	return 0;



}