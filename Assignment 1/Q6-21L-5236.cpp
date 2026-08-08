#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	double BMI = 0.0, weight = 0.0, height = 0.0;
	cout << "Enter your weight in kg: ";
	cin >> weight;
	cout << "Enter your height in meters: ";
	cin >> height;
	BMI = weight / (pow(height, 2));
	cout << "Your BMI is: " << BMI << endl;

	system("pause");
	return 0;
	
}
