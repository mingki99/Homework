#include <iostream>
using namespace std;
#include <list>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <algorithm>

// ������ ���� : ���� ����(forwarding reference)

class Knight
{
public:
	Knight() { cout << "�⺻ ������"  << endl;}
	Knight(const Knight&) { cout << "���� ������" << endl; }
	Knight(Knight&&) noexcept { cout << "�̵� ������" << endl; }
};

void RvalueRef(Knight&& knight) {}	// ���� �� ����

void Copy(Knight k) {}

template<typename T>
void ForwardingRef(T&& param)	// ���� ����
{
	Copy (std::forward<T>(std::move(param)));
	// �ް� �������
	Copy(param);

	// ������ �������
	Copy(std::move(param));
}

//template<typename T>
//void ForwardingRef(const T&& param)	// const�� ���δٸ� ������ ������ ��ɹۿ� ���Ѵ�.
//{
//
//}

int main()
{
	// ���� ����(universal reference)
	// ���� ����(forwading reference) C++17

	// && �ι� == ������ ����

	Knight k1;

	RvalueRef(std::move(k1));

	// ��쿡 ���� �ް�����, ������ ������ ���� �� �ִ�.
	ForwardingRef(k1);				// OK
	ForwardingRef(std::move(k1));	// OK


	// ������ ������� error�� �����ϴµ� ���� �۵��ȴ�!
	auto&& k2 = k1;	// �ް� ������ �ٲ���ִ�.

	auto&& k3 = std::move(k1);	// ������ ������ �ٲ���ִ�.

	// ������ : ���� ���� (type deduction)�� �Ͼ��.

	// ���� ������ �����ϴ� ���
	
	Knight& k4 = k1;	// �ް� ����
	Knight&& k5 = std::move(k1);	// ������ ����
	// k5�� �������� ������ �±������� 
	// k5�� ��������ʰ� ��� ����� �� �ֱ⿡ �ް��̴�.


	// ������ : �ް��� �ƴϴ�. = ���ϽĿ��� ����� ��� X
	// ������ ���� : �������� ������ �� �ִ� ����Ÿ��
	RvalueRef(k5);





	return 0;
}

