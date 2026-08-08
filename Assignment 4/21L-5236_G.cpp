//Asad Waqar 21L-5236 Assignment 4//
#include<iostream>
#include<fstream>
using namespace std;
void init(char w1[], char w2[], int& l1, int& l2)
{
	int i = 0, j = 0;
	while (w1[i] != '\0')
	{
		i++;
		l1 = i;
	}
	while (w2[j] != '\0')
	{
		j++;
		l2 = j;
	}
}

void CheckImperfectPalindrome1(char w1[], int l1)
{
	int count = 0;
	bool flag;
	for (int i = 0; i < l1; i++)
	{
		l1--;
		if (w1[i] == w1[l1])
		{
			flag = false;
		}
		else
		{
			flag = true;
			count++;
		}
	}

	if (count == 1)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

}
void CheckImperfectPalindrome2(char w2[], int l2)
{
	int count = 0;
	bool flag;
	for (int j = 0; j < l2; j++)
	{
		l2--;
		if (w2[j] == w2[l2])
		{
			flag = false;
		}
		else
		{
			flag = true;
			count++;
		}
	}

	if (count == 1)
	{
		cout << " " << "Yes";
	}
	else
	{
		cout << " " << "No";
	}
}

void CheckSuperAnagram(char w1[], char w2[], int l1, int l2)
{
	bool flag = 0;
	for (int i = 0; i < l1; i++)
	{
		flag = 0;
		for (int j = 0; j < l2; j++)
		{
			if (w1[i] == w2[j])
			{
				flag = true;
				break;
			}
			else
			{
				flag = false;
			}

		}

	}
	if (flag == true)
	{
		cout << " " << "Yes." << "\n";
	}
	else if (flag == false)
	{
		cout << " " << "No." << "\n";
	}
}

int main()
{

	int limit1 = 20, limit2 = 20;
	char word1[100], word2[100];
	ifstream inFile;
	inFile.open("Assignment 4.txt");
	if (!inFile)
	{
		cout << "File Can't open. " << endl;
	}

	while (!inFile.eof())
	{
		inFile >> word1 >> word2;
		init(word1, word2, limit1, limit2);
		CheckImperfectPalindrome1(word1, limit1);
		CheckImperfectPalindrome2(word2, limit2);
		CheckSuperAnagram(word1, word2, limit1, limit2);
	}
	inFile.close();

	system("pause");
	return 0;
}