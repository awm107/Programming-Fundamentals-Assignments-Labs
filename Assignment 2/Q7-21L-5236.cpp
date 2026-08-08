#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	for (int i =500; i < 3000; ++i)
	{
		if (((i%3==0)&&(i%5!=0))||((i % 3 != 0) && (i % 5 == 0)))
		{
			sum = sum + i;
			
		}
	}
	cout << sum << endl;
	system("pause");
	return 0;

}