#include<iostream>
using namespace std;
int main()
{
	int num1 = 0, num2 = 0;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	if (num1%num2==0)
	{
		cout << num1 << " is the multiple of " << num2 << endl;
	}
	else if (num2%num1==0)
	{
		cout << num2 << " is the multiple of " << num1 << endl;
	}
	else
	{
		cout << "NON" << endl;
	}
	system("pause");
	return 0;

}