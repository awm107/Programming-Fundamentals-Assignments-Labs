#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	long a = 0, b = 0, c = 0;
	double X1,X2 = 0.0;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;


	X1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a ;
	X2= (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
	cout << "OUTPUT:" << endl;
	cout <<"X= " << X1 << "," << X2 << endl;
	system("pause");
	return 0;


}