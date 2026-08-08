#include<iostream>
using namespace std;
int main()
{
	int A = 0, B = 0;
	cout << "Enter A: ";
	cin >> A;
	cout << "Enter B: ";
	cin >> B;
	cout << "Before swapping: A= " << A << " , B= " << B << endl;
	A = A + B;
	B = A - B;
	A = A - B;
	cout << "After swapping: A= " << A << " , B= " << B << endl;

	system("pause");
	return 0;

}