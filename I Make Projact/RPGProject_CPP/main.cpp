#include <iostream>
using namespace std;
#include <list>
#include <vector>
#include <deque>


// ������ ���� : deque

// vector : ���� �迭
// [          ]

// list : ���� ���� ����Ʈ
// [ ] <-> [ ] <-> [ ] <-> []

// deque : doble-ended queue ��ũ
// [   ]
// [   ]


int main()
{
	// ������ �����̳� (Sequence Container)
	// �����Ͱ� ���� ������� �����Ǵ� ����
	// vector list deque

	// vector�� ���������� �迭 ������� ����
	// �ٸ� �޸� �Ҵ� ��å�� �ٸ���

	// vector
	// [1 1 1]

	// deque
	// [    3 3]	1��
	// [3 4 3 3]	2��
	// [1 1 1 2]	3��
	// [2      ]	4��

	vector<int> v(3,1);
	deque<int> dq(3, 1);

	v.push_back(2);
	v.push_back(2);

	dq.push_back(2);
	dq.push_back(2);

	dq.push_front(3);
	dq.push_front(3);

	// - deque�� ���ۿ���
	// - �߰� ����/���� = �ſ� ������
	// -- �迭�̱⿡ �߰��� �����ϸ� �и� ������ ���� ����������Ѵ�.
	// - ó��/�� ����/���� = �Ѵ� ������
	// - ��������  = ������. 

	dq[3] = 10;

	deque<int>::iterator it;

	// _Size_type _Block = _Mycont->_Getblock(_Myoff);
	// _Size_type _Off = _Myoff % _Block_size;
	// return _Mycont->_Map[_Block][_Off];


	return 0;
}

