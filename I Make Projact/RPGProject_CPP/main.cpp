
#include <iostream>

using namespace std;

// ������ ���� : �Լ� ��ü

void HelloWorld()
{
	cout << "Hello World" << endl;
}

void HelloNumber(int number)
{
	cout << "Hello Number" << endl;
}

class Knight
{
public:
	void AddHp(int addhp)
	{
		_hp;
	}

private:
	int _hp = 100;	// k1�� ü�� 100 k2�� ü�� 200�ΰ��� ����
};

class Functor
{
public:
	void operator() ()	// operator()
	{
		cout << "Functor Test" << endl;
		cout << _value << endl;

	}

	bool operator() (int num)
	{
		cout << "Functor add" <<endl;
		_value += num;
		cout << _value << endl;
		return _value;
	}

private:
	int _value = 0;
};

class MoveTask
{
public:
	void operator() ()
	{
		cout << " �ش� ��ǥ�� �÷��̾� �̵�" <<endl;
	}

public:
	int _playerid;
	int _posX;
	int _posY;
};

int main()
{
	// �Լ� ��ü (Functor) : �Լ�ó�� �����ϴ� ��ü
	// �Լ� �������� ����

	// �Լ� ������ ����

	void(*pfunc)(void);

	// ������ �Ѱ��� �� �����ϴ�.
	pfunc = &HelloWorld;
	(*pfunc)();

	// �Լ� ������ ����
	// 1) �ñ״�ó�� �� ������ ����� �� ����
	// 2) ���¸� ���� �� ����.
	// pfunc = &HelloNumber;
	
	// [�Լ�ó�� ����]�ϴ� ��ü
	// () ������ �����ε�
	HelloWorld();
	
	Functor functor;
	functor();
	bool b = functor(3);

	// MMO���� �Լ� ��ü�� ����ϴ� ����
	// Ŭ�� <-> ���� 
	// ���� : Ŭ�� ������ ��Ʈ��ũ ��Ŷ�� �޾Ƽ� ó��
	// ex) Ŭ�� : �� (5, 0) ��ǥ�� �̵�������!
	MoveTask task;
	task._playerid = 100;
	task._posX = 5;
	task._posY = 0;

	// �������� �ϰ��� ������ִ� �κа� �����ϴ� �κ��� 2���� ����������.

	// ���߿� ���� �� �� �ϰ��� �����Ѵ�.
	task();


	return 0;

} 