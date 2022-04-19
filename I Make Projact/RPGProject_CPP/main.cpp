#include <iostream>

using namespace std;

// ������ ���� : ��ü���� ������

// 1) struct vs class

// C++������ strut�� calss�� ���� �� �� ���̴�.
// struct�� �⺻ ���� �����ڰ� public�̰�, class�� parivate�̴�.
// �� �̷��� ������? C���� �Ļ��Ǿ� �����߱� ������, ȣȯ���� ��Ű�� ����
// -> struct�� �׳� ����ü (������ ����)�� ǥ���ϴ� �뵵
// -> struct


struct TestStruct
{

};


class TestClass
{
public:

};

// 2) static ����, static �Լ� (staic = ���� = ������)
// Ŭ������ ��ǥ�ϴ� ������ �Լ�.

class Marine
{
public:
	void TakeDamage(int damage)
	{
		_hp -= damage;
	}

	static void TEST()
	{
		// Ŭ���� �ȿ��ִ� ������ �����Լ� �̱⿡ _hp�� � Marine�� _hp�� �ǵ���� ��������� �� �Ѵ�.
		// _hp = 100	
	}

public:

	int _hp;
	static int s_attack;	// ���� �ٸ� �޸𸮿� �����ִ�. ���赵 �����θ� ����
};

// static ������ � �޸�?
// �ʱ�ȭ �ϸ� .data
// �ʱ�ȭ ���ϸ� .bss

int Marine::s_attack = 0;

int Generateld()
{
	// �����ֱ� : ���α׷� ���� / ���� (�޸𸮿� �׻� �ö� ����)
	// ���ù��� : 
	
	// ���� ���� ��ü
	// ������ �ʱ�ȭ�� �Լ��� ȣ��� ���� �� �ѹ� ����Ǹ� ������ ���α׷� ������ ���� ������ ����ִ�.
	static int s_id = 1;	

	return s_id++;
}

int main()
{
	Marine m1;
	m1._hp = 35;
	m1.TakeDamage(10);
	

	Marine::s_attack = 6;
	// m1.s_attack = 6;

	Marine m2;
	m2._hp = 40;
	m2.s_attack = 6;

	// ���� ���ݷ� ���׷��̵� �Ϸ�! (Academy ���׷��̵� ��)
	m1.s_attack = 7;
	m2.s_attack = 7;

	// ���� �ƴ� .data ����
	static int id = 10;
	int a = id;

	return 0;
}