#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num1 = 0, num2 = 0;
	char op;
	float result=0.00;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "Enter the operator: ";
	cin >> op;

	if (op== '+')
	{
		result = num1 + num2;
		cout << num1 << op << num2 << " = " << result << endl;
	}
	else if (op== '-')
	{
		result = num1 - num2;
		cout << num1 << op << num2 << " = " << result << endl;
	}
	else if (op == '*')
	{
		result = num1 * num2;
		cout << num1 << op << num2 << " = " << result << endl;
	}
	else if (op == '/')
	{
		result = num1 / num2;
		cout << num1 << op << num2 << " = " << result << endl;
	}
	else if (op == '%')
	{
		result = num1 % num2;
		cout << num1 << op << num2 << " = " << result << endl;
	}
	else
	{
		cout << "Invalid operator selected." << endl;
	}
	system("pause");
	return 0;

}