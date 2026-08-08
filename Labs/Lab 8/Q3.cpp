#include<iostream>
using namespace std;
void UniqueElements(int Arr[], int Size)
{
	bool IsUnique = true;
	for (int i = 0; i < Size; i++)
	{
		for (int j = 0; j < Size; j++)
		{
			if ((Arr[i]==Arr[j])&&(i!=j))	
			{
				IsUnique = false;				//As soon as values get same,not unique.//
				break;							//No need to continue this loop,inc j.//
			}
		}
		if (IsUnique==true)
		{
			cout << "The unique value in the array is: " << Arr[i] << endl;
		}
		IsUnique = true;						//Done so that loop continues till the end of the array.//
	}
}
int main()
{
	const int Array_Size = 10;
	int Arr[Array_Size];
	for (int i = 0; i < Array_Size; i++)
	{
		Arr[i] = 0;								//Initilizes each index of the array.//
	}
	for (int j = 0; j < Array_Size; j++)
	{
		cout << "Enter the value in array position " << j << " : ";
		cin >> Arr[j];
	}
	UniqueElements(Arr, Array_Size);
	system("pause");
	return 0;

}