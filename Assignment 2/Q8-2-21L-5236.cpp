#include<iostream>
using namespace std;
int main()
{
	int n1=0, n2=1, n3, T;
	cout << "you want to output up to: ";
	cin >> T;
	cout << "The sequence up to<" << T << " is ";
	for (int i = 0; i < T; i++)
	{
		while (n1<T)
		{
			cout << n1 << " , ";
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
		}
	}
	system("pause");
	return 0;

}