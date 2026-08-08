#include<iostream>
using namespace std;
int main()
{
	char character;
	cout << "Enter any key from keybaord: ";
	cin >> character;

	if (('a'<character && character <'z')||('A'<character && character <'Z'))
	{
		cout << "The key entered is an alphabet." << endl;
	}
	else if (('0'<character) ||(character <'9'))
	{
		cout << "The key entered is a digit." << endl;
	}
	else
	{
		cout << "The key entered is a special character." << endl;
	}
	system("pause");
	return 0;

}