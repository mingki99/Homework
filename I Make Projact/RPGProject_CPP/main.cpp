#include <iostream>

using namespace std;

// ������ ���� : ���м�

// ��ü ���� (OOP Object Oriented
// ��Ӽ�
// ���м�
// ������

// ���м�(Data Hiding) = ĸ��ȭ(Encapsulation)
// ����ڰ� �������ϰ� �����.
// ����� ����
// - 1) ���� �����ϰ� �ǵ帮�� �ȵǴ� ���
// - 2) �ٸ� ��η� �����ϱ� ���ϴ� ���

// �ڵ���
// - �ڵ�
// - ���
// - ����
// - ��
// - ���� ������

// �Ϲ� ������ ���忡�� ����ϴ� ��?
// - �ڵ�/���/��
// ���� �� (������ �ǵ帮�� ū�ϳ�)
// - ����, ���� ���⼱

// public (������) protected(��ȣ�޴�) private(������)
// - public : �������׳� �����Ѵ�.
// - protected : ���� �ڼյ鿡�Ը� ���.
// - private : ���� ����Ѵ�. << class Car ���ο����� ���

// ��� ���� ������ : ���� �������� �θ���� ������ ��� �����ٱ�?
// �θ������ �������� ������ �� ���� �ڼյ����׵� �Ȱ��� ������� ��������.
// - public : ��ӹ��� ��� Ư���� �������׳� ����
// - protected : ��ӹ��� ��� Ư���� ���� �ڼյ鿡�Ը� ���.
// - private : ��ӹ��� Ŭ������ Ư������ ����ϰ� ����� . 

// ��� ���� �����ڿ� �������� �����ڴ� class ������ �⺻ private �̴�. (�׷��Ƿ� public�� �� ����������)


class Car
{
public: // (���) ���� ������
	void Movehandle() {}
	void PushPedal() {}
	void OpenDoor() {}

	// Ű�� ������ ���� ����
	void TurnKey()
	{
		RunEngine();
	}


protected:
	void DisassembleCar() {}
	void RunEngine() {}
	void ConnectCircuit() {}


	
public:
	// �ڵ�
	// ���
	// ����
	// ��
	// ���� ���⼱

};

class SuperCar : public Car // ��� ���� ������
{
public:
	void PushRemoteController()
	{
		RunEngine();
	}

};

// 'ĸ��ȭ'
// ������ �����Ϳ� �Լ��� �������� ������� ��

class Berserker
{
public:
	int GetHp() {return _hp;}

	// ��� : ü���� 50 ���Ϸ� �������� ����Ŀ ��� �ߵ� (������)

	void SetHP(int hp)
	{
		_hp = hp;
		if (_hp < 50)
		{
			SetBerserkerMode();
		}
	}

private:
	void SetBerserkerMode()
	{
		cout << "�ſ� ������ !" << endl;
	}

private:
	int _hp = 100;

};

int main()
{
	Car car;

	return 0;
}