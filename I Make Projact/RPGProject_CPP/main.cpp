#include <iostream>
using namespace std;
#include <list>

// 오늘의 주제 : list

// vector : 동적 배열
// [               ]



class Node
{
public:
	Node*	_next;	// node의 주소값을 넣을것이기에 class node를 사용한다.
	Node*	_prev;
	int		_data;

};


// 단일 / 이중 / 원형
// list : 연결 리스트

// 나란히 나열되있는 배열이 아니라 서로의 다음포인터를 가지고있는 data들이다. 
// 
// 칸단위를 노드라고한다
// 
// 단일 리스트
// [1] -> [2] -> [3] -> [4] -> [5]

// 이중 리스트
// [1] <-> [2] <-> [3] <-> [4] <-> [5] <-> [My_Head : end()]	end()함수를 사용할때 있는 마지막 값이 따로 변수로가지고있다.

// 원형 리스트
// [1] <-> [2] <-> [3] <-> [4] <-> [5] <->



int main()
{
	// list (연결 리스트)
	// - list의 동작 원리
	// - 중간 삽입/삭제		= 전부 O에 1의 비용을 들이고 삭제된다.
	// - 처음/끝 삽입/삭제	= 전부 O에 1의 비용을 들이고 삭제된다.
	// - 임의 접근 (i번째 데이터는 어디잇습니까?)			= 임으

	list<int> li;

	list<int>::iterator itRemember;

	for (int i = 0; i < 100; i++)
	{
		if ( i == 50)
		{	
			// 리스트를 초기화 할 때 지울 값을 저장한다.
			itRemember = li.insert(li.end(), i);	// 50을 iterator로 기억하고있다.
		}
		else
		{
			li.push_back(i);
		}
		
		
	}

	
	li.push_front(10);	// 

	int size = li.size();
	// li.capacity() 없음	실시간으로 데이터를 만들어주고 연결해준다.

	int first = li.front();
	int last = li.back();

	

	list<int>::iterator itBegin = li.begin();
	list<int>::iterator itEnd = li.end();

	// li[3] = 10;	접근 불가능
	// li + 10;		불가능

	int* ptrBegin = &(li.front());
	int* ptrEnd = &(li.back());

	// list<int>::iterator itTest1 = --itBegin;	begin에서 한칸뒤로(end)로 이동은 불가능
	list<int>::iterator itTest1 = --itEnd;
	// list<int>::iterator itTest1 = ++itEnd;	end에서 한칸뒤로(begin)으로 이동은 불가능

	for (list<int>::iterator it = li.begin(); it != li.end(); ++it)
	{
		cout << *it << endl;
	}


	li.insert(itBegin, 100);	// 지정한 위치 100 넣기.

	li.erase(li.begin());	// 맨 앞 삭제

	li.pop_front();	// 맨 앞 삭제

	li.remove(10);	// 인자값과 같은 배열값을 전부 삭제한다 



	// 임의접근은 가능하지만 중간삽입 삭제는 빠르다?
	// 
	// 임의접근하여 삽입삭제 하는 것은 느리다.
	// 50번 인덱스 데이터를 삭제
	list<int>::iterator it = li.begin();
	for(int i =0; i< 50; i++)
		++it;

	li.erase(it);	// iterartor로 되있는 50은 빠르게 처리가 가능하다.

	li.erase(itRemember);	// 그리하여 삽입 삭제한 값을 미리 들고있어서 바로 넣어줄 수 있다.

	// li.erase(50); 





	return 0;
}

