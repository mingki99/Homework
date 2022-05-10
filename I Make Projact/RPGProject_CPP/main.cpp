#include <iostream>
using namespace std;
#include <list>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <algorithm>

// 오늘의 주제 : nullptr

class Knight
{
public:
	void test() {}
};

Knight* FindKNight()
{
	// TODO
	return nullptr;
}


// 오버로딩 하게될때




void Test(float f)
{
}

void Test(bool a)
{

}

void Test(void* ptr)
{
	cout << "Test(*)" << endl;
}

// nullptr구현
const
class
{
public:
	// 그 어떤 타입의 포인터들이라도 치환 가능
	template<typename T>
	operator T* () const
	{
		return 0;
	}

	// 그 어떤 타입의 멤버 포인터들이라도 치환 가능
	template<typename C, typename T>
	operator T C::* () const
	{
		return 0;
	}

private:
	void operator&() const = delete;	// 주소값 접근 &을 막는다.

} _NullPtr;




int main()
{
	
	// 포인터를 받아주는 버전으로 실행되게 하고싶지만
	// Test(0);
	// Test(NULL);
	Test(_NullPtr);

	// 2) 가독성
	auto knight = FindKNight();
	if (knight == _NullPtr)	// 만든 클래스로 치환가능
	{
	}
	
	void (Knight::*memFunc)();
	memFunc = &Knight::test;
	// 포인터의 값이 없으면 true
	if (memFunc == _NullPtr)
	{
	}

	// &_NullPtr
	// &nullptr

	auto whoami = nullptr;

	return 0;
}

