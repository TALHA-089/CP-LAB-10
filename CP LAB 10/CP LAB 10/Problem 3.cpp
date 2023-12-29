#include<iostream>
#include<string>

using namespace std;

int main()
{
	string mystring;
	int count = 0;

	cout << "\n\nEnter a String: ";
	getline(cin, mystring);

	int i = 0;

	while (mystring[i] != '\0')
	{
		count++;
		i++;
	}

	cout << "\n\nCharacters in the String are: " << count;

	cout << endl << endl;
	system("pause");
	return 0;
}