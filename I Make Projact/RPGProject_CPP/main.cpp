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
	// Ű ��ü�� �������ϰ�� set
	// key == value �� ���� �ڷᱸ���̴�.
	set<int>s;

	// �ְ�
	// ����
	// ã��
	// ��ȸ�Ѵ�.

	// �ְ�
	s.insert(10);
	s.insert(30);
	s.insert(20);
	s.insert(50);
	s.insert(40);
	s.insert(70);
	s.insert(100);
	s.insert(80);
	s.insert(90);

	// ����
	s.erase(40);

	// ã��
	set<int>::iterator findit = s.find(50);
	if (findit == s.end())
	{
		cout << "��ã��" << endl;
	} 
	else
	{
		cout << "ã��" << endl;
	}

	// ��ȸ�ϱ�
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << (*it) <<endl;
	}

	cout << "=====================" << endl;

	multimap<int, int> mm;

	// �ֱ�
	// ����Ű�� �ٸ� ������ ���� �� �ִ�.
	mm.insert(make_pair(1, 100));
	mm.insert(make_pair(1, 200));
	mm.insert(make_pair(1, 300));
	mm.insert(make_pair(2, 300));
	mm.insert(make_pair(2, 400));
	mm.insert(make_pair(2, 500));

	// mm[1] = 500; ����°ſ� ���⿡ �����ִ�.

	// ����
	// mm.erase(1);	// 1�� Ű���� ���� �����Ѵ�, ��ȯ ���� ������ Ƚ���� �������ش�.

	// ã��
	/*multimap<int, int>::iterator itFind = mm.find(0);
	if(itFind != mm.end())
		mm.erase(itFind);*/


	pair<multimap<int, int>::iterator, multimap<int, int>::iterator> itPair;
	mm.equal_range(1);

	multimap<int, int>::iterator itBegin = mm.lower_bound(1);
	multimap<int, int>::iterator itEnd = mm.upper_bound(1);

	for (multimap<int, int>::iterator it = itPair.first; it != itPair.second; ++it)
	{
		cout << it->first << " " << it->second <<endl;
	}

	multiset<int> ms;

	// �ֱ�
	ms.insert(100);
	ms.insert(100);
	ms.insert(100);
	ms.insert(200);
	ms.insert(200);

	// ã��
	multiset<int>::iterator findit2 = ms.find(100);

	pair<multiset<int>::iterator, multiset<int>::iterator> itPair2;
	itPair2 = ms.equal_range(100);

	for (multiset<int>::iterator it = itPair2.first; it != itPair2.second; ++it)
	{
		cout << *it << endl;
	}

	multiset<int>::iterator itBegin2 = ms.lower_bound(100);
	multiset<int>::iterator itEnd2 = ms.upper_bound(100);

	for (multiset<int>::iterator it = itBegin2; it != itEnd2; ++it)
	{
		cout << *it << endl;
	}



	return 0;
}

