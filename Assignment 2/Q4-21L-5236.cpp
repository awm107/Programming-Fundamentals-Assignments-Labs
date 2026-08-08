#include<iostream>
using namespace std;
int main()
{
	int N = 0;
	int i = 1;
	cout << "Enter any number:";
	cin >> N;
	for (i; i<=N-2; i++)
	{
		if ((i)*(i+1)*(i+2)==N)
		{
			cout << "Multiplication of " << i << " , " << i + 1 << " and " << i + 2 << " is equal to " << N<<endl;
			goto end;
		}
		if ((i) * (i + 1) * (i + 2) > N)
		{
			cout << "NO" << endl;
			goto end;
		}
	}
end:
	system("pause");
	return 0;


}