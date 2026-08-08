#include<iostream>
using namespace std;
int main()
{
	int n1, n2, n3, nf, Start, End;
	cout << "Start: ";
	cin >> Start;
	cout << "End: ";
	cin >> End;
	n1 = Start;
	n2 = Start + 1;
	for (int i =Start; i <=Start; i++)
	{
		while (n1<End)
		{
			cout << n1 << " , ";
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
		}
	}
	cout << endl;
	system("pause");
	return 0;


}