#include <iostream>
using namespace std;
#include <list>
#include <vector>
#include <deque>
#include <map>
#include <set>

// ������ ���� : �˰���
#include <algorithm>

int main()
{
	// �ڷᱸ�� (�����͸� �����ϴ� ����)
	// �˰��� (�����͸� ��� ����� ���ΰ�?)

	// find
	// find_if

	// count
	// count_if
	// all_of
	// none_of

	
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
		for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		{	
			if (*it== number)
			{
				found = true;
				cout << (*it) <<endl;
				cout << count << "�� ° �� 50 ����" << endl;
				break;
			}
			
			++count;
			


		}

		// ������, ������, � �����͸� ã���ִ� find
		vector<int>::iterator itfind = find(v.begin(), v.end(), number);
		if(itfind == v.end())
		{
			// ��ã����
			cout << "�� ã���� " << endl;
		}
		else
		{
			cout << "ã�Ҵ�" << endl;
		}

	}

	// 11�� ������ ���ڰ� ���Ϳ� �ִ��� üũ�Ѵ�. (bool, ù ���� iterator)
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
		
		struct CanDivideBy11
		{
			bool operator()(int a)
			{
				return (a%11) == 0;
			}
		};

		// ó���� ��, �״��� ������ bool �� ����ִ� 
		vector<int>::iterator itFind = std::find_if(v.begin(),v.end(),CanDivideBy11());
		if (itFind == v.end())
		{
			// ��ã����
			cout << "�� ã���� " << endl;
		}
		else
		{
			cout << "ã�Ҵ�" << endl;
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

		struct IsOdd
		{
			bool operator()(int a)
			{
				return (a%2) == 0;
			}
		};

		// ��� ī��Ʈ �Ǿ����� ����
		int n = std::count_if(v.begin(), v.end(),IsOdd());

		// ��絥���Ͱ� ���ǿ� �³�
		bool b1 = std::all_of(v.begin(), v.end(), IsOdd());
		// ��� �����Ͱ� �ϳ��� �ֳ�
		bool b2 = std::any_of(v.begin(), v.end(), IsOdd());
		// ��� �����Ͱ� ���ǿ� �ȸ³�
		bool b3 = std::none_of(v.begin(), v.end(), IsOdd());
			
	}

	cout << "============================" << endl;

	// ���Ϳ� �� �ִ� ��� ���ڵ��� 3�� �����ش�.
	{
		
		for (unsigned int i = 0; i < v.size(); i++)
		{
			v[i] *= 3;
			
			cout << i <<" ��° ���Ϳ� �����͸� 3�� ������ �� : " << v[i] << endl;
		}

		struct MultiplyBy3
		{
			void operator()(int a)
			{
				a *= 3;
			}
		};

		// ���� �ϳ��ϳ� ������ �ش�.
		std::for_each(v.begin(), v.end(), MultiplyBy3());
	}

	// Ȧ���� ������ �ϰ� ����
	{
		for (vector<int>::iterator it = v.begin(); it != v.end();)
		{
			if((*it %2) !=0)
				it = v.erase(it);
			else
				++it;
		}


		v.clear();

		v.push_back(1);
		v.push_back(4);
		v.push_back(3);
		v.push_back(5);
		v.push_back(8);
		v.push_back(2);
		

		// 1 4 3 5 8 2
		// 4 8 2 5 8 2
		// 
		// 4 8 2 5 8 2
		struct IsOdd
		{
			bool operator()(int a)
			{
				return (a % 2) != 0;
			}
		};

		// ������ ���ִ°��� �ƴ� �ʿ��� �����͸� �����ش�.
		// �տ��� �ʿ��ѵ����ͷ� �������ְ�, ������ �����͵��� iterator�� ��ȯ���ش�.
		vector<int>::iterator it = std::remove_if(v.begin(), v.end(), IsOdd());

		// iterator�� ���� ���� ���������� �����ش�.
		v.erase(it, v.end());

		int a = 3;
	}

	return 0;
}

