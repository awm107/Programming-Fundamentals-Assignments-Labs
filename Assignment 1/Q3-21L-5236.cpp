#include<iostream>
using namespace std;
int main()
{
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
	int Agg1 = 0, Agg2 = 0, Agg3 = 0, Agg4 = 0, Agg5 = 0;

	cout << "1391: ";
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	Agg1 = c1 + c2 + c3 + c4 + c5;

	cout << "1376: ";
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	Agg2 = c1 + c2 + c3 + c4 + c5;

	cout << "1374: ";
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	Agg3 = c1 + c2 + c3 + c4 + c5;

	cout << "1372: ";
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	Agg4 = c1 + c2 + c3 + c4 + c5;

	cout << "1375: ";
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	Agg5 = c1 + c2 + c3 + c4 + c5;

	if (Agg1>Agg2 && Agg1>Agg3 && Agg1>Agg4 && Agg1>Agg5)
	{
		cout << "1391 has highest aggregate of " << Agg1 << endl;
	}
	else if (Agg2 > Agg1 && Agg2 > Agg3 && Agg2 > Agg4 && Agg2 > Agg5)
	{
		cout << "1376 has highest aggregate of " << Agg2 << endl;
	}
	else if (Agg3 > Agg1 && Agg3 > Agg2 && Agg3 > Agg4 && Agg3 > Agg5)
	{
		cout << "1374 has highest aggregate of " << Agg3 << endl;
	}
	else if (Agg4 > Agg1 && Agg4 > Agg2 && Agg4 > Agg3 && Agg4 > Agg5)
	{
		cout << "1372 has highest aggregate of " << Agg4 << endl;
	}
	else if (Agg5 > Agg1 && Agg5 > Agg2 && Agg5 > Agg3 && Agg5 > Agg4)
	{
		cout << "1375 has highest aggregate of " << Agg5<<endl;
	}
	system("pause");
	return 0;
}