#include <iostream>
using namespace std;
#include <list>

// ������ ���� : list

// vector : ���� �迭
// [               ]



class Node
{
public:
	Node*	_next;	// node�� �ּҰ��� �������̱⿡ class node�� ����Ѵ�.
	Node*	_prev;
	int		_data;

};


// ���� / ���� / ����
// list : ���� ����Ʈ

// ������ �������ִ� �迭�� �ƴ϶� ������ ���������͸� �������ִ� data���̴�. 
// 
// ĭ������ ������Ѵ�
// 
// ���� ����Ʈ
// [1] -> [2] -> [3] -> [4] -> [5]

// ���� ����Ʈ
// [1] <-> [2] <-> [3] <-> [4] <-> [5] <-> [My_Head : end()]	end()�Լ��� ����Ҷ� �ִ� ������ ���� ���� �����ΰ������ִ�.

// ���� ����Ʈ
// [1] <-> [2] <-> [3] <-> [4] <-> [5] <->



int main()
{
	// list (���� ����Ʈ)
	// - list�� ���� ����
	// - �߰� ����/����		= ���� O�� 1�� ����� ���̰� �����ȴ�.
	// - ó��/�� ����/����	= ���� O�� 1�� ����� ���̰� �����ȴ�.
	// - ���� ���� (i��° �����ʹ� ����ս��ϱ�?)			= ����

	list<int> li;

	list<int>::iterator itRemember;

	for (int i = 0; i < 100; i++)
	{
		if ( i == 50)
		{	
			// ����Ʈ�� �ʱ�ȭ �� �� ���� ���� �����Ѵ�.
			itRemember = li.insert(li.end(), i);	// 50�� iterator�� ����ϰ��ִ�.
		}
		else
		{
			li.push_back(i);
		}
		
		
	}

	
	li.push_front(10);	// 

	int size = li.size();
	// li.capacity() ����	�ǽð����� �����͸� ������ְ� �������ش�.

	int first = li.front();
	int last = li.back();

	

	list<int>::iterator itBegin = li.begin();
	list<int>::iterator itEnd = li.end();

	// li[3] = 10;	���� �Ұ���
	// li + 10;		�Ұ���

	int* ptrBegin = &(li.front());
	int* ptrEnd = &(li.back());

	// list<int>::iterator itTest1 = --itBegin;	begin���� ��ĭ�ڷ�(end)�� �̵��� �Ұ���
	list<int>::iterator itTest1 = --itEnd;
	// list<int>::iterator itTest1 = ++itEnd;	end���� ��ĭ�ڷ�(begin)���� �̵��� �Ұ���

	for (list<int>::iterator it = li.begin(); it != li.end(); ++it)
	{
		cout << *it << endl;
	}


	li.insert(itBegin, 100);	// ������ ��ġ 100 �ֱ�.

	li.erase(li.begin());	// �� �� ����

	li.pop_front();	// �� �� ����

	li.remove(10);	// ���ڰ��� ���� �迭���� ���� �����Ѵ� 



	// ���������� ���������� �߰����� ������ ������?
	// 
	// ���������Ͽ� ���Ի��� �ϴ� ���� ������.
	// 50�� �ε��� �����͸� ����
	list<int>::iterator it = li.begin();
	for(int i =0; i< 50; i++)
		++it;

	li.erase(it);	// iterartor�� ���ִ� 50�� ������ ó���� �����ϴ�.

	li.erase(itRemember);	// �׸��Ͽ� ���� ������ ���� �̸� ����־ �ٷ� �־��� �� �ִ�.

	// li.erase(50); 





	return 0;
}

