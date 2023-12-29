#include<iostream>
#include<string>

using namespace std;

int main()
{
	string mystring;
	int n;


	cout << "\n\nEnter a String: ";
	getline(cin, mystring);

	cout << "\n\nBefore Deletion: ";
	cout << mystring;

	cout << "\n\nEnter the Number for the character you want to remove (count the spaces as well if any): ";
	cin >> n;

	n = n - 1;

	mystring.erase( n , 1);

	cout <<"\n\nAfter Deletion: " << mystring;

	cout << endl << endl;
	system("pause");
	return 0;
}