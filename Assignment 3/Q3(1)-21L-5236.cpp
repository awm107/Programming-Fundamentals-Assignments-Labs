#include<iostream>
using namespace std;
void PrintDistantArray(int Arr[], int size)
{
	int tempdelete = 0;
	int temp= 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if ((Arr[i]==Arr[j])&&(i!=j))
			{
				tempdelete = Arr[j];
				for (int k = j; (k < size-1); k++)
				{
					temp = Arr[k + 1];
					Arr[k] = temp;
				}
				size = size - 1;
			}
			
		}
	}
	cout << "The Distinct Array is as follows: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << Arr[i] << endl;
	}



}
int main()
{
	const int Array_Size = 20;
	int Arr[Array_Size];
	for (int i = 0; i < Array_Size; i++)
	{
		Arr[i] = 0;
	}
	for (int j = 0; j < Array_Size; j++)
	{
		cout << "Enter the value of array in position " << j<<" : ";
		cin >> Arr[j];
	}
	PrintDistantArray(Arr, Array_Size);

	system("pause");
	return 0;
}