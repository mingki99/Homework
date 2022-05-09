#include <iostream>
using namespace std;
#include <list>
#include <vector>
#include <deque>
#include <map>

// ������ ���� : set, multimap, multiset
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

	// number��� ���ڰ� ���Ϳ� üũ�ϴ� ��� (bool, ù ���� iterator
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
				cout << count << "�� ° �� 50 ����" << endl;
				break;
			}
			else
			{
				++it;
				++count;
			}


		}

	}

	// 11�� ������ ���ڰ� ���Ϳ� �ִ��� üũ�Ѵ�.
	{
		int count = 1;
		for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		{
			if (*it % 11 == 0)
			{
				cout << (*it) << " \t 11�� �������� " << count <<  " �� °" << endl;
			}
		
			++count;
		}
	}

	// Ȧ���� ������ ������?
	{
		int count = 0;
		for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		{
			if ((*it %2) != 0)
			{
				count ++;
			} 
		}
		cout << " Ȧ���� ���� : "  << count << endl;

	}

	cout << "============================" << endl;

	// ���Ϳ� �� �ִ� ��� ���ڵ��� 3�� �����ش�.
	{
		
		for (unsigned int i = 0; i < v.size(); i++)
		{
			v[i] *= 3;
			
			cout << i <<" ��° ���Ϳ� �����͸� 3�� ������ �� : " << v[i] << endl;
		}
	}

	return 0;
}

