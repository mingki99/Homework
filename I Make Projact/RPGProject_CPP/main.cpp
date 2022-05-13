#include <iostream>
using namespace std;
#include <list>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <algorithm>

// 오늘의 주제 : 스마트 포인터 (smart pointer)

// 스마트 포인터 : 포인터를 알맞는 정책에 따라 관리하는 객체 (포인터를 래핑해서 사용)
// shared_ptr, weak_ptr, unique_ptr

// weak_ptr = shared_ptr처럼 직접 포인터를 관리해주진 않지만 sherd_ptr의 유일한 단점인

class Knight
{
public:
	Knight() {cout << "Knight()" << endl;}
	~Knight() { cout << "~Knight()" << endl; }
	
	void Attack()
	{
		// weak_ptr용 if문
		if (_target.expired() == false)
		{
			shared_ptr<Knight> sptr = _target.lock();

			sptr->_hp -= _damage;
			cout << "hp : " << sptr->_hp << endl;
		}

	}

public:
	int _hp = 100;
	int _damage = 10;
	// Knight* _target = nullptr;
	// shared_ptr<Knight> _target  = nullptr;    // shared_ptr 로 관리
	weak_ptr<Knight> _target ;   // weak_ptr로 관리
};

class RefCountBlock
{
public:
	int _refCount = 1;
	// weak_ptr을 사용하면 생성해준다.
	int _weakCOunt = 1;
};

template<typename T>
class SharedPtr
{
public:
	SharedPtr() {}

	// 관리하는 전담 
	SharedPtr(T* ptr) : _ptr(ptr)
	{
		if (_ptr != nullptr)
		{
			_block = new RefCountBlock();
			cout << "RefCount : " << _block->_refCount << endl;
		}
	}

	// 복사 생성자
	SharedPtr(const SharedPtr& sptr) : _ptr(sptr._ptr), _block(sptr._block)
	{
		if (_ptr != nullptr)
		{
			_block->_refCount++;
			cout << "RefCount : " << _block->_refCount << endl;
		}
	}

	// 복사 연산자
	void operator = (const SharedPtr& sptr)
	{
		_ptr = sptr._ptr;
		_block = sptr._block;

		if (_ptr != nullptr)
		{
			_block->_refCount++;
			cout << "RefCount : " << _block->_refCount << endl;
		}

	}

	~SharedPtr()
	{
		if (_ptr != nullptr)
		{
			_block->_refCount--;
			cout << "RefCount : " << _block->_refCount << endl;
			// delete _ptr 을 바로 하는게 아니다.

			if (_block->_refCount == 0)
			{
				delete _ptr;
				delete _block;
				cout << "Delete data" << endl;
			}
		}
	}

public:
	T* _ptr = nullptr;
	RefCountBlock* _block = nullptr;
};

int main()
{
	
	unique_ptr<Knight> uptr = make_unique<Knight>();
	// unique_ptr<Knight> uptr2 = uptr; error

	unique_ptr<Knight> uptr2 = std::move(uptr);


	return 0;
}

