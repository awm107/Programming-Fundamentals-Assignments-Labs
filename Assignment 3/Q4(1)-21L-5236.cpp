#include<iostream>
using namespace std;
void SwapArray(int Arr[], int newsize)
{
	int temp = 0;
	int count = 0;
	int size = newsize;
	for (int i = 0; i < newsize; i++)
	{
		if (Arr[i]==1)
		{
			count = count + 1;
			temp = Arr[i];
			for (int j = i; (j < newsize-count); j++)
			{
				Arr[j] = Arr[j + 1];
			}
			Arr[newsize] = temp;
			newsize = newsize - 1;
		}
	}
	for (int index = 0; index <= size; index++)
	{
		cout << Arr[index]<<" ";
	}
	cout << endl;
}
int main()
{
	const int Array_Size = 100;
	int Arr[Array_Size];
	int newArray_Size = 0;
	cout << "Enter the Array. Enter -1 to exit: ";
	for (int i = 0; i < Array_Size; i++)
	{
		cin >> Arr[i];
		if ((Arr[i] == -1))
		{
			newArray_Size = i;
			break;
		}
		else if ((Arr[i] != 0)&&(Arr[i] != 1))
		{
			cout << "Invalid input.Try again.";
			break;
		}
	}
	SwapArray(Arr, newArray_Size);


	system("pause");
	return 0;
}