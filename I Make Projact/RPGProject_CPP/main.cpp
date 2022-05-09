#include <iostream>
using namespace std;
#include <list>
#include <vector>
#include <deque>
#include <map>

// 오늘의 주제 : set, multimap, multiset
#include <set>

int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));

	vector<int> v;

	for (int i = 0; i < 100; i++)
	{
		int num = rand() % 100;
		v.push_back(num);
	}

	// number라는 숫자가 벡터에 체크하는 기능 (bool, 첫 등장 iterator
	{
		int number = 50;
		int count = 1;

		bool found = false;
		for (vector<int>::iterator it = v.begin(); it != v.end();)
		{	
			if (*it== number)
			{
				found = true;
				cout << (*it) <<endl;
				cout << count << "번 째 에 50 등장" << endl;
				break;
			}
			else
			{
				++it;
				++count;
			}


		}

	}

	// 11로 나뉘는 숫자가 백터에 있는지 체크한다.
	{
		int count = 1;
		for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		{
			if (*it % 11 == 0)
			{
				cout << (*it) << " \t 11로 나뉘어진 " << count <<  " 번 째" << endl;
			}
		
			++count;
		}
	}

	// 홀수의 숫자의 갯수는?
	{
		int count = 0;
		for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		{
			if ((*it %2) != 0)
			{
				count ++;
			} 
		}
		cout << " 홀수의 개수 : "  << count << endl;

	}

	cout << "============================" << endl;

	// 백터에 들어가 있는 모든 숫자들을 3을 곱해준다.
	{
		
		for (unsigned int i = 0; i < v.size(); i++)
		{
			v[i] *= 3;
			
			cout << i <<" 번째 백터에 데이터를 3을 곱해준 값 : " << v[i] << endl;
		}
	}

	return 0;
}

