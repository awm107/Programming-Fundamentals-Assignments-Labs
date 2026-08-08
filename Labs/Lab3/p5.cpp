#include<iostream>
using namespace std;
int main()
{
	int S = 0, C = 0, V = 0, Totalscopes = 0, Bill = 0;
	double Totalbill = 0.0, gst = 0.17;
	cout << "Enter # of scopes you wanted." << endl;
	cout << "Strawberry: ";
	cin >> S;
	cout << "Chocolate: ";
	cin >> C;
	cout << "Vanilla: ";
	cin >> V;
	Totalscopes = S + C + V;
	Bill = Totalscopes * 100;
	Totalbill = Bill + (Bill * gst);
	cout << "OUTPUT" << endl;
	cout << "Bill: " << Totalbill<<endl;
	system("pause");
	return 0;
	}