#include<iostream>
using namespace std;
int main()
{
	int length = 0, breadth = 0, area = 0;
	cout << "Please enter length of	rectangle: ";
	cin >> length;
	cout << "Please enter breadth of rectangle: ";
	cin >> breadth;
	area = length * breadth;
	cout << "Area of rectangle is " << area<<endl;
	system("pause");
	return 0;

}