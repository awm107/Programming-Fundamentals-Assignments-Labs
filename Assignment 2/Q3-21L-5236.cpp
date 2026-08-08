#include<iostream>
using namespace std;
int main()
{
	int height = 0;
	char symbol = '*';
	cout << "Enter the height of the pattern: ";
	cin >> height;
	for (int line = 1; line <=height; line++)
	{
		for (int i = 1; i <=line; i++)
		{
			cout << symbol;
		}
		cout << endl;
	}
	for (int line = height; line > 0; --line)
	{
		for (int i = line-1; (i > 0); --i)
		{
			cout << symbol;
		}
		cout << endl;
	}

	system("pause");
	return 0;

}