#include <iostream>

#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int myrandom(int i)
{
	return rand() % i;
}



int main()
{
	
	srand( unsigned (time(0))); //unsigned �� 0���� ~ ��� �� ������ ���ϴ� ������Ÿ��
	
	vector <int> myvector;

	for (int i = 0; i <= 20; ++i)
	{
		myvector.push_back(i);
	}

	

	random_shuffle(myvector.begin(), myvector.end(), myrandom);

	cout << " 0����~ 10 ���� ��� " << endl;

	for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
	{
		cout << ' ' << *it;
	}


	return 0;
}