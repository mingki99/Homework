#include <iostream>
using namespace std;
#include <list>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <algorithm>

// ������ ���� : ����Ʈ ������ (smart pointer)

// ����Ʈ ������ : �����͸� �˸´� ��å�� ���� �����ϴ� ��ü (�����͸� �����ؼ� ���)
// shared_ptr, weak_ptr, unique_ptr

// weak_ptr = shared_ptró�� ���� �����͸� ���������� ������ sherd_ptr�� ������ ������

class Knight
{
public:
	Knight() {cout << "Knight()" << endl;}
	~Knight() { cout << "~Knight()" << endl; }
	
	void Attack()
	{
		// weak_ptr�� if��
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
	// shared_ptr<Knight> _target  = nullptr;    // shared_ptr �� ����
	weak_ptr<Knight> _target ;   // weak_ptr�� ����
};

class RefCountBlock
{
public:
	int _refCount = 1;
	// weak_ptr�� ����ϸ� �������ش�.
	int _weakCOunt = 1;
};

template<typename T>
class SharedPtr
{
public:
	SharedPtr() {}

	// �����ϴ� ���� 
	SharedPtr(T* ptr) : _ptr(ptr)
	{
		if (_ptr != nullptr)
		{
			_block = new RefCountBlock();
			cout << "RefCount : " << _block->_refCount << endl;
		}
	}

	// ���� ������
	SharedPtr(const SharedPtr& sptr) : _ptr(sptr._ptr), _block(sptr._block)
	{
		if (_ptr != nullptr)
		{
			_block->_refCount++;
			cout << "RefCount : " << _block->_refCount << endl;
		}
	}

	// ���� ������
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
			// delete _ptr �� �ٷ� �ϴ°� �ƴϴ�.

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

