#include<iostream>
using namespace std;
int main()
{
	int n1, n2, n3, nf, k;
	cout << "How many Fibonacci numbers you need: ";
	cin >> k;
	n1 = 0;
	n2 = 1;
		for (int i = 0; i <=k ; i++)
		{
			cout << "Which Fibonacci: ";
			cin >> nf;
			for (int x = 1; x <nf; x++)
			{
				n3 = n1 + n2;
				n1 = n2;
				n2 = n3;
			}
			cout << "F" << nf << " = " << n3 << endl;
		}
		system("pause");
		return 0;
}