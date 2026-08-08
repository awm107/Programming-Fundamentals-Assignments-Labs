#include<iostream>
using namespace std;
double getLength()
{
	double l = 0.0;
	cout << "Enter the length of the rectangle: ";
	cin >> l;
	return l;
}
double getwidth()
{
	double w = 0.0;
	cout << "Enter the width of the rectangle : ";
	cin >> w;
	return w;
}
double getArea(double l, double w)
{
	double A = 0.0;
	A = l * w;
	return A;
}
void displayData(double l, double w, double A)
{
	cout << "The length of the rectangle: " << l << endl;
	cout << "The width of the rectangle: " << w << endl;
	cout << "The area of the rectangle: " << A << endl;
}
int main()
{
	double length = 0.0, width = 0.0, Area = 0.0;
	length = getLength();
	width = getwidth();
	Area = getArea(length, width);
	displayData(length, width, Area);
	system("pause");
	return 0;

}