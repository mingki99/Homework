#include <iostream>
using namespace std;
#include <list>
#include <vector>
#include <deque>


// 오늘의 주제 : deque

// vector : 동적 배열
// [          ]

// list : 이중 연결 리스트
// [ ] <-> [ ] <-> [ ] <-> []

// deque : doble-ended queue 데크
// [   ]
// [   ]


int main()
{
	// 시퀀스 컨테이너 (Sequence Container)
	// 데이터가 삽입 순서대로 나열되는 형태
	// vector list deque

	// vector와 마찬가지로 배열 기반으로 동작
	// 다만 메모리 할당 정책이 다르다

	// vector
	// [1 1 1]

	// deque
	// [    3 3]	1동
	// [3 4 3 3]	2동
	// [1 1 1 2]	3동
	// [2      ]	4동

	vector<int> v(3,1);
	deque<int> dq(3, 1);

	v.push_back(2);
	v.push_back(2);

	dq.push_back(2);
	dq.push_back(2);

	dq.push_front(3);
	dq.push_front(3);

	// - deque의 동작원리
	// - 중간 삽입/삭제 = 매우 느리다
	// -- 배열이기에 중간에 삭제하면 밀린 공간을 전부 정렬해줘야한다.
	// - 처음/끝 삽입/삭제 = 둘다 빠르다
	// - 임의접근  = 빠르다. 

	dq[3] = 10;

	deque<int>::iterator it;

	// _Size_type _Block = _Mycont->_Getblock(_Myoff);
	// _Size_type _Off = _Myoff % _Block_size;
	// return _Mycont->_Map[_Block][_Off];


	return 0;
}

