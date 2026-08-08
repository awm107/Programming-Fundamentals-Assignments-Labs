#include<iostream>
using namespace std;
int main()
{
	const int Array_Size = 10;
	int numbers[Array_Size];
	for (int count = 0; count < Array_Size; count++)
	{
		numbers[count] = 0;			//initializes each index of the array to 0.//
	}
	for (int i = 0; i < Array_Size; i++)
	{
		cout << "Enter the value in the array position " << i << " :" << endl;
		cin >> numbers[i];
	}
	int max = 0, min = 0;
	max = numbers[0];
	min = numbers[0];
	for (int j = 0; j < Array_Size-1; j++)
	{
		if (max>numbers[j+1])
		{
			max = numbers[j + 1];
		}
		if (min<numbers[j+1])
		{
			min = numbers[j + 1];
		}
	}
	cout << "The largest value in the array is: " << max << endl;
	cout << "The smallest value in the array is: " << min << endl;
	system("pause");
	return 0;
}

