#include<iostream>
using namespace std;
void FindTriplet(int Arr[], int size, int num)
{
	int i = 0, j = 0, k = 0;
	bool AreTriplet = false;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			for (k = 0; k < size; k++)
			{
				if ((i!=j)&&(i!=k)&&(j!=k))						//no same elements should be used.//
				{
					if (Arr[i]+Arr[j]+Arr[k]==num)
					{
						AreTriplet = true;
						break;
					}
				}
			}
			if (AreTriplet==true)
			{
				break;
			}
		}
		if (AreTriplet==true)
		{
			cout << Arr[i] << " , " << Arr[j] << " and " << Arr[k] << endl;
		}
		AreTriplet = false;
	}
}
int main()
{
	const int N = 10;
	int Arr[N];
	for (int i = 0; i < N; i++)
	{
		Arr[i] = 0;											//initialize array elements.//
	}
	for (int j = 0; j < N; j++)
	{
		cout << "Enter the values in array position " << j << " : ";
		cin >> Arr[j];
	}
	int Num = 0;
	cout << "Enter the number you want to find for its sum: ";
	cin >> Num;
	FindTriplet(Arr, N, Num);


	system("pause");
	return 0;
}