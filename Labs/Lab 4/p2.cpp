#include<iostream>
using namespace std;
int main()
{
	float weightkg=0.0, weightp=0.0;   //initialize weight variables
	cout<<"Enter your weight in kg: ";
	cin>>weightkg;
	weightp= weightkg * 2.2;
	cout<<"Your weight in pounds is: "<<weightp<<endl;
	system("pause");
	return 0;
		
}