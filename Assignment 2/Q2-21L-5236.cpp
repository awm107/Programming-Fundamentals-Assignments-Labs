#include<iostream>
using namespace std;
int main()
{
	int x = 100, y=0;
	cin >> y;
	while (y != 25)
	{
		if (x > 0)
		{
				cin >> x;
				cout << "x = " << x << endl;
		}
		cin >> y;

	}
	system("pause");
	return 0;

}