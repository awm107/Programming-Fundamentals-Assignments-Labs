#include <iostream>
using namespace std;
int main()
{
char letter1,letter2;
cout<<"Enter the first initial of your name in capital letter: ";
cin>>letter1;
cout<<"Enter the second initial of your name in capital letter: ";
cin>>letter2;
if (65<=int(letter1)&&int(letter1)<=90 && 65<=int(letter2)&&int(letter2)<=90)
{
	cout<<int(letter1)<<"   "<<int(letter2)<<endl; //convert char into its respective ASCII value//
}
else
{
	cout<<"Try again."<<endl;
}
system("pause");
return 0;

}
	