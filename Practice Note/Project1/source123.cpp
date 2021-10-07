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
	
	srand( unsigned (time(0))); //unsigned 는 0부터 ~ 양수 인 정수를 뜻하는 데이터타입
	
	vector <int> myvector;

	for (int i = 0; i <= 20; ++i)
	{
		myvector.push_back(i);
	}

	

	random_shuffle(myvector.begin(), myvector.end(), myrandom);

	cout << " 0부터~ 10 까지 출력 " << endl;

	for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
	{
		cout << ' ' << *it;
	}


	return 0;
}