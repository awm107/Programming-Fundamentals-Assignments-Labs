#include<iostream>
using namespace std;
bool Prime(int Num)
{
	int Remainder;
	bool IsPrime;
		for (int i = 2; i < Num; i++)
		{
			Remainder = Num % i;
			if (Remainder!=0)
			{
				IsPrime = true;
			}
			else if(Remainder==0)
			{
				IsPrime = false;
				break;
			}
		}
		return IsPrime;


}
int main()
{
	int N = 0;
	int InpLen = 0;
	cout << "Enter number of inputs you want: ";
	cin >> InpLen;
	for (int i = 1; i < InpLen ; i++)
	{
		cout << "Enter a number: ";
		cin >> N;

		if (Prime(N)==true)
		{
			cout << N << " is a prime number." << endl;
		}
		else
		{
			cout << N << " is not a prime number." << endl;
		}
	}
	
	system("pause");
	return 0;





}