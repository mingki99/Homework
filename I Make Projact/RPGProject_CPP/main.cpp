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
	// 키 자체가 데이터일경우 set
	// key == value 가 같은 자료구조이다.
	set<int>s;

	// 넣고
	// 빼고
	// 찾고
	// 순회한다.

	// 넣고
	s.insert(10);
	s.insert(30);
	s.insert(20);
	s.insert(50);
	s.insert(40);
	s.insert(70);
	s.insert(100);
	s.insert(80);
	s.insert(90);

	// 빼기
	s.erase(40);

	// 찾기
	set<int>::iterator findit = s.find(50);
	if (findit == s.end())
	{
		cout << "못찾음" << endl;
	} 
	else
	{
		cout << "찾음" << endl;
	}

	// 순회하기
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << (*it) <<endl;
	}

	cout << "=====================" << endl;

	multimap<int, int> mm;

	// 넣기
	// 같은키로 다른 값들을 넣을 수 있다.
	mm.insert(make_pair(1, 100));
	mm.insert(make_pair(1, 200));
	mm.insert(make_pair(1, 300));
	mm.insert(make_pair(2, 300));
	mm.insert(make_pair(2, 400));
	mm.insert(make_pair(2, 500));

	// mm[1] = 500; 덮어쓰는거와 같기에 막혀있다.

	// 빼기
	// mm.erase(1);	// 1의 키값을 전부 삭제한다, 반환 값은 삭제된 횟수를 리턴해준다.

	// 찾기
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

	// 넣기
	ms.insert(100);
	ms.insert(100);
	ms.insert(100);
	ms.insert(200);
	ms.insert(200);

	// 찾기
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

