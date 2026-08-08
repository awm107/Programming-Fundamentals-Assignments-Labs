#include<iostream>
using namespace std;
int main()
{
	int num = 0, sum = 0;
	cout << "Enter your numbers: " << endl;
	while (num!=-1)
	{
		cin >> num;
		sum = sum + num;
	}
	if (num==-1)
	{
		sum = sum + 1;
	}
	cout << "Sum is " << sum << endl;
	system("pause");
	return 0;


}