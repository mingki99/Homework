#include <iostream>
using namespace std;
#include <list>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <algorithm>

// 오늘의 주제 : auto

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

	// auto는 일종의 조거 카드
	// 형식 연역 (type deduction)
	// 추론 규칙은 생각보다 복잡해질 수 있다.

	/*auto f = &d;
	const auto test1 = b;
	auto* test2 = a1;*/

	// 주의!
	// 기본 auto는 const, & 무시!!
	int& reference = a;
	const int cst = a;

	auto test1 = reference;	// int 형으로 복사된다.
	auto test2 = cst;		// int 형으로 복사된다

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	
	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{	
		auto data = v[i];
		// auto& data = v[i]	명시적으로 레퍼런스라고 지정을 해줘야한다.


		data = 100;
	}

	// 가독성을 위해 일반적으로 나두는게 좋다.
	// 타이핑이 길어지는경우 사용하자.
	map<int, int> m;
	
	// 긴 문장
	pair<map<int,int>::iterator, bool> itbool = m.insert(make_pair(1, 100));

	// auto 이용하여 짧은 문장
	auto itbool1 = m.insert(make_pair(2, 300));

	return 0;
}

