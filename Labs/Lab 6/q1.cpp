#include<iostream>
using namespace std;
float calculateRetail(float WS_Cost, float MU_Percentage)
{
	float rp = 0.0;
	rp = WS_Cost + (WS_Cost * MU_Percentage);
	return rp;
}
int main()
{
	float Wholesalecost = 0.0, MarkupPercent = 0.0, retailprice = 0.0;
	cout << "Enter item's wholesale cost: ";
	cin >> Wholesalecost;
	cout << "Enter item's markup percentage: ";
	cin >> MarkupPercent;
	if (Wholesalecost>=0 && MarkupPercent>=0)
	{
		MarkupPercent = MarkupPercent / 100;
		retailprice = calculateRetail(Wholesalecost, MarkupPercent);
		cout << "The retail price of the item is: " << retailprice << endl;
	}
	else
	{
		cout << "Try again." << endl;
	}
	system("pause");
	return 0;



}