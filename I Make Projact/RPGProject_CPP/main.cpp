#include <iostream>
using namespace std;
#include <list>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <algorithm>

// ������ ���� : ������(rvalue) ������ std::move

// ����� ������� �̵���Ű�� ���� �� ȿ���� ����

class Pet
{

};

class Knight
{
public:
	Knight()
	{
		cout << "Knight" << endl;
	}

	Knight(const Knight& knight)
	{
		cout << "const Knight" <<endl;
	}

	// �̵�������
	Knight(Knight&&)
	{

	}

	~Knight()
	{
		if(_pet)
			delete _pet;
	}

	void operator=(const Knight& knight)
	{
		cout << "operator = (const Knight&)" <<endl;

		// ���� ����
		// �������� ��ü�� �����Ǵ°Ϳ� ������ ������ ����� ��δ�.
		_hp = knight._hp;

		if (knight._pet)
			_pet = new Pet(*knight._pet);
	}

	// �̵� ���� ������
	void operator=(Knight&& knight) noexcept
	{
		cout << "operator = (const Knight&)" << endl;

		// ���� ����
		// �������� ��ü�� �����Ǵ°Ϳ� ������ ������ ����� ��δ�.
		_hp = knight._hp;

		_pet = knight._pet;

		// Pet�� �Ҹ� �Ǿ����� delete�� �ű⿡ nullptr�� ����Ѵ�.
		knight._pet = nullptr;
	}

public:
	void Const_PrintInfo() const {}
	void PrintInfo() {}
public:
	int _hp = 100;
	Pet* _pet = nullptr;
};

void TestKnight_Copy(Knight knight)
{
	knight._hp = 100;	// �ٸ� kngiht�� ���� �ٲٴ� ����
}


// ������� �����!
void TestKnight_LvalueRef(Knight& knight)
{
	knight._hp = 100;	// �������� ���� ����ȴ�.
}

// �б�����θ� ����Ѵ�.
// �׷��Ƿ� knight�� constŰ���常 ���� �Լ��� ����� �� �ִ�.
void TestKnight_ConstLvalueRef(const Knight& knight)
{
	knight.Const_PrintInfo();  // const�� ���� �Լ��� ���ٰ���
	// knight.PrintInfo()         error ���� �Ұ���
}

// ������ ������ ����Ѵ�.
// �а��� ���� �ٲ㵵 ������ �� ������ �ƹ����Գ� �����
void TestKnight_RvalueRef(Knight&& knight) // �̵����
{
	// knight._hp = 100;	���� �Ұ�
}


int main()
{
	// �ް�(lvalue) vs ������(rvalue)
	// - lvalue : ���Ͻ��� �Ѿ ��� ���ӵǴ� ��ü
	// - rvalue : lvalue�� �ƴ� ������ (�ӽ� ���� ������, ����, I++)

	int a = 3;
	// ��  ��
	// 3 = a

	Knight k1;

	TestKnight_Copy(k1);

	TestKnight_LvalueRef(k1);

	// TestKnight_LvalueRef(Knight());	const ������ lvalue�� �Ǿ��Ѵٴ� error�� ��´�

	// ���������� const�� ���� ������ �Ұ����ϴ� ���������� ����� �� �ִ� 
	TestKnight_ConstLvalueRef(Knight());	// �ӽ������� Knight

	TestKnight_RvalueRef(Knight());

	TestKnight_RvalueRef(static_cast<Knight&&>(k1));


	Knight k2;
	k2._pet = new Pet();
	k2._hp = 1000;

	Knight k3;

	// ������� ����
	k3 = static_cast<Knight&&>(k2);	// ������ ������ �ȴٶ�� ��

	k3 = std::move(k2);	// ������ ������ ĳ����

	// �� �ϳ��� �����ϴ� �����ͷ� ����� ������ unique_ptr�� ����Ѵ�
	std::unique_ptr<Knight> uptr = std::make_unique<Knight>();
	std::unique_ptr<Knight> uptr2 = std::move(uptr);	// uptr2�� ��簪�� �Ѱ��ְ� uptr2���� �� ����ִ�.

	return 0;
}

