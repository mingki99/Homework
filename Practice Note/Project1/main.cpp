#include <iostream>

using namespace std;


// ��Ģ 6�� ��� ã��.

int main()
{
	int A;
	
	cin >> A;



	int startPoint = 1;

	int count = 1;

	for (count; startPoint < A ; ++count)
	{
		startPoint = startPoint + (6 * count);
	}
	
	cout << count << endl;


	return 0;
}