#include <iostream>

#include <string>
#include <algorithm>
#include <vector>

using namespace std;


vector<int>b = { 10 };


int main()
{
	b.push_back(15);
	b.push_back(20);

	cout << b[0] << endl;
	cout << b[1] << endl;
	cout << b[2] << endl;


	return 0;
}