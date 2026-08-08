#include<iostream>
using namespace std;
float CalculateSalary(int& sal, int& GraPass)
{
	float TotalSal = 0.0;
	if (GraPass>15)
	{
		TotalSal = sal + (sal * 0.5);
	}
	else
	{
		TotalSal = sal + (sal * 0.25);
	}
	return TotalSal;
}
int main()
{
	int salary = 0, Gradepasses = 0;
	float TotalSalary = 0.0;
	cout << "Enter the salary: ";
	cin >> salary;
	cout << "Enter the grade passes: ";
	cin >> Gradepasses;
	TotalSalary = CalculateSalary(salary, Gradepasses);
	cout << "The new salary is: " << TotalSalary << endl;
	system("pause");
	return 0;

}