#include<iostream>
using namespace std;
int main()
{
	char alphabet=' ';
	cout<<"Enter any alphabet: ";
	cin>>alphabet;

	switch (alphabet)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		cout<<"The alphabet is vowel."<<endl;  // a,e,i,o,u are vowels.//
		break;
	default:
		cout<<"The alphabet is consonent."<<endl; //rest of the alphabets other than vowels are consonents.//
	}

	system("pause");
	return 0;
	
}