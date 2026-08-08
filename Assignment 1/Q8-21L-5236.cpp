#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0;
	cout << "Enter the value of a: ";
	cin >> a;
	cout << "Enter the value of b: ";
	cin >> b;
	cout << "Enter the value of c: ";
	cin >> c;
	if (c == sqrt(pow(a, 2) + pow(b, 2)))
	{
		cout << "The three numbers entered are pythogrean triple."<<endl;
	}
	else
	{
		cout << "The three numbers entered are not pythogrean triple." << endl;
	}
	system("pause");
	return 0;
}