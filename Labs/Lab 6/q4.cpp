#include<iostream>
using namespace std;
double kineticEnergy(double m, double v)
{
	double KE = 0.0;
	cout << "Enter the object mass: ";
	cin >> m;
	cout << "Enter the object velocity: ";
	cin >> v;
	KE = 0.5 * m * v * v;
	return KE;
}
int main()
{
	double mass = 0.0, velocity = 0.0, KEnergy = 0.0;
	KEnergy = kineticEnergy(mass, velocity);
	cout << "The kinetic energy of the object is: " << KEnergy <<" Joules." << endl;
	system("pause");
	return 0;

}