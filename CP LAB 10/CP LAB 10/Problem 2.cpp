#include<iostream>
#include<string>

using namespace std;

int main()
{
	string mystring;
	int length = 0;

	cout << "\n\nEnter a String: ";
	getline(cin, mystring);

	int i = 0;

	while (mystring[i] != '\0')
	{
		length++;
		i++;
	}

	cout << "\n\nLength of the String is " << length << ".";

	cout << endl << endl;
	system("pause");
	return 0;
}