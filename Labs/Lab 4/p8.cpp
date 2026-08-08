#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0,c=0; //initialize a,b and c//
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	cout<<"Enter the value of c: ";
	cin>>c;
	if (a>0)  //check whether a=0//
	{
		if (a<=b && a<=c)
		{
			if (b%a==0 && c%a==0)
			{
				cout<<"a is common divisor of b and c."<<endl;
			}
			
		}
		else
		{
			cout<<"a is not common divisor of b and c."<<endl; // if a is greater than b and c, it is not its divisor.//
		}
	}
	else
	{
		cout<<"Error."<<endl;  //error if a=0//
	}
	system("pause");
	return 0;
}