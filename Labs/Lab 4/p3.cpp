#include<iostream>
using namespace std;
int main()
{
	int age=0; //initialize age variable//
	cout<<"Please enter your age: ";
	cin>>age;
	if (age>18)
	{
		cout<<"You are eligible to cast vote."<<endl;  //if age is greater then 18//
	}
	else
	{
		cout<<"You are not eligible to cast vote."<<endl; //if age is less than or equal to 18 //
	}
	system("pause");
	return 0;
}