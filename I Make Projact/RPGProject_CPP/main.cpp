#include <iostream>
using namespace std;
#include <list>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <algorithm>

// ������ ���� : nullptr

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


// �����ε� �ϰԵɶ�




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

// nullptr����
const
class
{
public:
	// �� � Ÿ���� �����͵��̶� ġȯ ����
	template<typename T>
	operator T* () const
	{
		return 0;
	}

	// �� � Ÿ���� ��� �����͵��̶� ġȯ ����
	template<typename C, typename T>
	operator T C::* () const
	{
		return 0;
	}

private:
	void operator&() const = delete;	// �ּҰ� ���� &�� ���´�.

} _NullPtr;




int main()
{
	
	// �����͸� �޾��ִ� �������� ����ǰ� �ϰ������
	// Test(0);
	// Test(NULL);
	Test(_NullPtr);

	// 2) ������
	auto knight = FindKNight();
	if (knight == _NullPtr)	// ���� Ŭ������ ġȯ����
	{
	}
	
	void (Knight::*memFunc)();
	memFunc = &Knight::test;
	// �������� ���� ������ true
	if (memFunc == _NullPtr)
	{
	}

	// &_NullPtr
	// &nullptr

	auto whoami = nullptr;

	return 0;
}

