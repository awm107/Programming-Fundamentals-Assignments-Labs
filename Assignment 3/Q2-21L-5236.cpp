#include<iostream>
using namespace std;
void PrimeFrequency(int Arr[], int start, int end)
{
	int freqcounter = 1;
	bool IsPrime = false;
	for (int i = start-1; i < end-1; i++)
	{
		for (int j = 1; j <= (start-end); j++)
		{
			if ((Arr[i] ==Arr[j+i])&&(i!=i+j))
			{
				freqcounter = freqcounter + 1;
			}
		}
		if (freqcounter==1)
		{
			break;
		}
		else if (freqcounter==2)
		{
			IsPrime = true;
		}
		else
		{
			for (int k = 3; k < freqcounter; k++)
			{
				if (freqcounter % k == 0)
				{
					IsPrime = false;
					break;
				}
				else
				{
					IsPrime = true;
				}
			}
		}
		if (IsPrime==true)
		{
			cout << "Frequency of " << Arr[i] << " is prime frequency which is " << freqcounter << endl;
		}
	}
	
}
int main()
{
	const int Array_Size = 100;
	int Arr[Array_Size];
	int size=0;
	cout << "Enter array size: ";
	cin >> size;
	cout << "Enter the Array. Enter -1 to exit: ";
	for (int i = 0; i < size; i++)
	{
		cin >> Arr[i];
		if (Arr[i]==-1)
		{
			break;
		}

	}
	int Start, End = 0;
	cout << "Enter Starting Range Index: ";
	cin >> Start;
	cout << "Enter Ending Range Index: ";
	cin >> End;
	for (int count = 0; count <(Start-End); count++)
	{
		PrimeFrequency(Arr, Start, End);
	}

	system("pause");
	return 0;
}