#include<iostream>
using namespace std;
int main()
{
	int num=0;  //initialize num variable
	cout<<"Enter a number: ";
	cin>> num;
	if (num>=0)
	{
		cout<<"Number is positive."<<endl; //num is greater than or equal to 0//
	}
	else
	{
		cout<<"Number is negitive."<<endl;   //num is less than 0//
	}
	system("pause");
	return 0;
	
}