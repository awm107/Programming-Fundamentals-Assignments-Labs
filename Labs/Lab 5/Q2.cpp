#include<iostream>
using namespace std;
int main()
{
	int num1 = 0, num2 = 0, temp = 0, GCD = 0;
	cout << "Input num 1: ";
	cin >> num1;
	cout << "Input num 2: ";
	cin >> num2;
	while (num1!=num2 &&num2%num1!=0)
	{
		temp = num1;
		num1 = num2 % num1;
		num2 = temp;
	}
	if (num2%num1==0)
	{
		GCD = num1;
		cout << "GCD: " << GCD << endl;
	}
	system("pause");
	return 0;
}
