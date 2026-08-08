#include<iostream>
using namespace std;
void PrintDistinctArray(int Arr[], int size)
{
	int tempdelete = 0;
	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if ((Arr[i] == Arr[j]) && (i != j))
			{
				tempdelete = Arr[j];
				for (int k = j; (k < size - 1); k++)
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
	SortDistinctArray(Arr, size);
	cout << "Distinct Element in Sorted (Increasing order) are: " << endl;
	for (int i = 1; i < size; i++)
	{
		cout << Arr[i] << endl;
	}
}
void PrintUniqueArray(int Arr[], int UniArr[], int size)
{
	bool IsUnique = true;
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if ((Arr[i] == Arr[j]) && (i != j))
			{
				IsUnique = false;
				break;
			}
		}
		if (IsUnique == true)
		{
			count = count + 1;
			UniArr[count - 1] = Arr[i];
		}
		IsUnique = true;
	}
	cout << "The Unique Array is as follows: " << endl;
	for (int i = 0; i < count; i++)
	{
		cout << UniArr[i] << endl;
	}
	SortUniqueArray(UniArr, count);
	cout << "Unique Element in Sorted(Decreasing order ) are: " << endl;
	for (int i = 0; i < count-1; i++)
	{
		cout << UniArr[i] << endl;
	}


}
void SortDistinctArray(int Arr[], int size)
{
	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size-1; j++)
		{
			if (Arr[j]>Arr[j+1])
			{
				temp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = temp;
			}
		}
	}

}
void SortUniqueArray(int UniArr[], int count)
{
	int temp = 0;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count - 1; j++)
		{
			if (UniArr[j] < UniArr[j + 1])
			{
				temp = UniArr[j];
				UniArr[j] = UniArr[j + 1];
				UniArr[j + 1] = temp;
			}
		}
	}


}
int main()
{
	const int Array_Size = 20;
	int Arr[Array_Size];
	int UniArr[Array_Size];
	for (int i = 0; i < Array_Size; i++)
	{
		Arr[i] = 0;
		UniArr[i] = 0;
	}
	for (int j = 0; j < Array_Size; j++)
	{
		cout << "Enter the value of array in position " << j << " : ";
		cin >> Arr[j];
	}
	PrintDistinctArray(Arr, Array_Size);
	PrintUniqueArray(Arr, UniArr, Array_Size);

	system("pause");
	return 0;
}