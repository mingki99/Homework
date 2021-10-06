#include <iostream>
//STL
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string Mother = "My Famliy";
	string Sister = "Member";
	string Me = "Three People";

	string B1;
	string B2;
	string B3;

	string b1;
	string b2;
	string b3;

	for (auto a : Mother)
	{
		B1.push_back(toupper(a));
	}
	for (auto a : Sister)
	{
		B2.push_back(toupper(a));
	}
	for (auto a : Me)
	{
		B3.push_back(toupper(a));
	}

	cout << B1 << endl;
	cout << B2 << endl;
	cout << B3 << endl;
	cout <<B1+B2+ B3 << endl;
	
	for (auto A : Mother)
	{
		b1.push_back(tolower(A));
	}
	for (auto A : Sister)
	{
		b2.push_back(tolower(A));
	}
	for (auto A : Me)
	{
		b3.push_back(tolower(A));
	}

	cout << b1 << endl;
	cout << b2 << endl;
	cout << b3 << endl;
	cout << b1+b2+b3 << endl;


	return 0;
}