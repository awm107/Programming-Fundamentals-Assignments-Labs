#include<iostream>
using namespace std;
void FindSumPair(int Arr[], int Size, int num)
{
	bool IsEqual = false;
	for (int i = 0; i < Size; i++)
	{
		for (int j = 0; j < Size; j++)
		{
			if ((i!=j)&&(Arr[i]+Arr[j]==num))
			{
				IsEqual = true;
				cout << "The number " << num << " has the sum pairs: " << Arr[i] << " and " << Arr[j] << " at positions: " << i << " , " << j << " respectively." << endl;

			}

		}
	}
}
int main()
{
	const int Array_Size = 10;
	int Arr[Array_Size];
	int N = 0;
	for (int i = 0; i < Array_Size; i++)
	{
		Arr[i] = 0;										//initiliazing every index.//
	}
	for (int j = 0; j < Array_Size; j++)
	{
		cout << "Enter the value for array position " << j << ": ";
		cin >> Arr[j];
	}
	cout << "Enter a number: ";
	cin >> N;
	FindSumPair(Arr, Array_Size, N);
	system("pause");
	return 0;
}