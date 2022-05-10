#include <iostream>
using namespace std;
#include <list>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <algorithm>

// ������ ���� : auto

class knight
{

};

template<typename T>
void Print(T t)
{
	cout << t << endl;
}



MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

auto add(int a, int b )
{
	return a + b;
}; 

int main()
{
	// Modern C++ (C++11)

	int a = 3;
	float b = 3.14f;
	double c = 1.23;
	knight d = knight();
	const char* e = "rookiss";

	auto a1 = 3;
	auto b1 = 3.14f;
	auto c1 = 1.23;
	auto d1 = knight();
	auto e1 = "rookiss";

	// auto�� ������ ���� ī��
	// ���� ���� (type deduction)
	// �߷� ��Ģ�� �������� �������� �� �ִ�.

	/*auto f = &d;
	const auto test1 = b;
	auto* test2 = a1;*/

	// ����!
	// �⺻ auto�� const, & ����!!
	int& reference = a;
	const int cst = a;

	auto test1 = reference;	// int ������ ����ȴ�.
	auto test2 = cst;		// int ������ ����ȴ�

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	
	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{	
		auto data = v[i];
		// auto& data = v[i]	��������� ���۷������ ������ ������Ѵ�.


		data = 100;
	}

	// �������� ���� �Ϲ������� ���δ°� ����.
	// Ÿ������ ������°�� �������.
	map<int, int> m;
	
	// �� ����
	pair<map<int,int>::iterator, bool> itbool = m.insert(make_pair(1, 100));

	// auto �̿��Ͽ� ª�� ����
	auto itbool1 = m.insert(make_pair(2, 300));

	return 0;
}

