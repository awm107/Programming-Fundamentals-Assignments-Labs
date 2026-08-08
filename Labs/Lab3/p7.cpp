#include<iostream>
using namespace std;
void main()
{
	int Maxmarks = 100, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
	float percentage = 0.0;
	cout << "Enter marks of 5 subjects:" << endl;
	if (s1<=Maxmarks)
	{
		cout << "Subject1= ";
		cin >> s1;
	}
	if (s2<=Maxmarks)
	{
		cout << "Subject2= ";
		cin >> s2;
	}
	if (s3<=Maxmarks)
	{
		cout << "Subject3= ";
		cin >> s3;
	}
	if (s4<=Maxmarks)
	{
		cout << "Subject4= ";
		cin >> s4;
	}
	if (s5<=Maxmarks)
	{
		cout << "Subject5= ";
		cin >> s5;
	}
	percentage = (s1 + s2 + s3 + s4 + s5) / 5;
	cout << "OUTPUT:" << endl;
	cout << "The percentage is " << percentage << endl;
	system("pause");
}