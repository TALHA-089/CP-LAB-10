#include<iostream>
#include<string>
using namespace std;
int main()
{
	int f = 0;
	string palindrome = "";
	string check = "";
	cout << "\nEnter the Phrase or Word: ";
	getline(cin, palindrome);
	int j = 0;
	for (int i = palindrome.length() - 1; i >= 0; i--)
	{
		check[j] = palindrome[i];
		j++;
	}
	for (int k = 0; k < palindrome.length(); k++)
	{
		if (check[k] != palindrome[k])
		{
			f = 1;
		}

	}
	if (f == 1)
	{
		cout << "\nNOT PALINDROME";
	}
	else
	{
		cout << "\nPALINDROME";
	}
	cout << endl << endl;
	system("pause");
	return 0;
}
