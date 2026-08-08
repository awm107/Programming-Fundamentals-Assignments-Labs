#include<iostream>
using namespace std;
void ShowPattern(int n)
{
	char symbol = '*';
	if ((n <= 3) && (n > 0))
	{
		for (int i = n; i > 0; i--)
		{
			for (int j = i; j > 0; j--)
			{
				cout << symbol;
			}
			cout << endl;
		}
	}
	else
	{
		for (int i = n; i > 0; i--)                  //i is the line number in opposite//
		{
			for (int j = 1; j <= i; j++)				 //j is the number of symbol //	
			{
				if ((j>=2)&&(j<i)&&(i<=n-1)&&(i>=3))
				{
					for (int space = i-2; space>0 ; space--)
					{
						cout << " ";
					}
				}
				cout << symbol;
			}
			cout << endl;
		}
	}
}
int main()
{
	int N = 0;
	cout << "Enter the value for N: ";
	cin >> N;
	ShowPattern(N);

	system("pause");
	return 0;
}