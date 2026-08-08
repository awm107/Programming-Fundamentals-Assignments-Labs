#include<iostream>
using namespace std;
void PrintUniqueArray(int Arr[],int UniArr[], int size)
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
		if (IsUnique==true)
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
	PrintUniqueArray(Arr,UniArr, Array_Size);

	system("pause");
	return 0;
}