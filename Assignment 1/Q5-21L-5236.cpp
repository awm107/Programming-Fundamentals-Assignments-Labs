#include<iostream>
using namespace std;
int main()
{
	int num1 = 0, num2 = 0, num3 = 0;
	cout << "Enter number 1: ";
	cin >> num1;
	cout << "Enter number 2: ";
	cin >> num2;
	cout << "Enter number 3: ";
	cin >> num3;

	if (num1 < num2 && num1 < num3)
	{
		if (num2 < num3)
		{
			cout << num1 << " , " << num2 << " , " << num3 << endl;
		}
		else
		{
			cout << num1 << " , " << num3 << " , " << num2 << endl;
		}
	}
	else if (num2 < num1 && num2 < num3)
	{
		if (num1 < num3)
		{
			cout << num2 << " , " << num1 << " , " << num3 << endl;
		}
		else
		{
			cout << num2 << " , " << num3 << " , " << num1 << endl;
		}
	}
	else if (num3 < num1 && num3 < num2)
	{
		if (num1 < num2)
		{
			cout << num3 << " , " << num1 << " , " << num2 << endl;
		}
		else
		{
			cout << num3 << " , " << num2 << " , " << num1 << endl;
		}
	}


	if (num1>num2 && num1>num3)
	{
		if (num2>num3)
		{
			cout << num1 << " , " << num2 << " , " << num3 << endl;
		}
		else
		{
			cout << num1 << " , " << num3 << " , " << num2 << endl;
		}
	}
	else if (num2 > num1 && num2 > num3)
	{
		if (num1 > num3)
		{
			cout << num2 << " , " << num1 << " , " << num3 << endl;
		}
		else
		{
			cout << num2 << " , " << num3 << " , " << num1 << endl;
		}
	}
	else if (num3 > num1 && num3 > num2)
	{
		if (num1 > num2)
		{
			cout << num3 << " , " << num1 << " , " << num2 << endl;
		}
		else
		{
			cout << num3 << " , " << num2 << " , " << num1 << endl;
		}
	}



	system("pause");
	return 0;
}