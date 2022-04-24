#include <iostream>
#include <string>


using namespace std;

class Pet
{
public:
	Pet()
	{
		cout << "Pet()" << endl;
	}
	~Pet()
	{
		cout << "~Pet()" << endl;
	}
	Pet(const Pet& pet)
	{
		cout << "Pet(const Pet& pet)" << endl;
	}

	Pet& operator = (const Pet& pet)
	{
		cout << "operator = (const Pet& pet)" <<endl;
		return *this;
	}
};

class Player
{
public:
	Player()
	{
		cout << "Player()" << endl;
	}
	Player(const Player& player)
	{
		cout << "Player(const Player&)" << endl;
		_level = player._level;
	}

	~Player()
	{
		cout << "~Player()" << endl;
	}

	Player& operator = (const Player& pet)
	{
		cout << "operator = (const Player& Player)" << endl;
		return *this;
	}

public:
	int _level = 0;
};

class Knight : public Player
{
public:
	Knight()
	{
		// _pet = new Pet();
	}

	Knight(const Knight& knight) : Player(knight), _pet(knight._pet)
	{
		cout << "operator = (const Knight&)" << endl;
		
		Player::operator=(knight);

		_hp = knight._hp;
		// _pet = new Pet(*(knight._pet));	// ���� ���� ����Ʈ�� ���� ���� ���Ӱ� �����.
		
	}

	Knight& operator = (const Knight& knight)
	{
		_hp = knight._hp;
		// _pet = new pet(*(knight._pet));	// ���� ����
		return *this;
	}

	~Knight()
	{
		// delete _pet;
	}


public:
	int _hp = 100;
	// Pet pet;		// ����� �־�ΰԵǸ� �޸𸮰� �״�� �����ȴ�.
	Pet _pet;	
};


int main()
{
	Pet* pet = new Pet();
	
	Knight knight;	// �⺻ ������
	knight._hp = 200;

	/*cout << "-------------- ���� ������ ------------------" <<endl;
	Knight knight2 = knight;*/	// ���� ������
	// Knight knight3(knight);


	
	Knight knight3;	// �⺻ ������

	cout << "-------------- ���� ���� ������ ------------------" << endl;

	knight3 = knight;	// ���� ���� ������.

	// [���������] + [���� ���� ������]
	// �� �� �� ������ָ� �����Ϸ� '�Ͻ�������' ������ش� = ��������

	// �߰� ���) �����Ϸ��� �˾Ƽ� �� ������ش�?
	// �����ϼ���~ ���� ���� �Ѿ���? >> NO

	// [ ���� ���� Shallow Copy ]
	// ��� �����͸� ��Ʈ�� ������ '�Ȱ���' ���� (�޸� ���� ���� �״�� ����)
	// �����ʹ� �ּҰ� ��� �ڷ��� -> �ּҰ��� �Ȱ��� ����-> ������ ��ü�� ����Ű�� ���°� ��
	// Stack : Knight1 [ hp 0x1000 ] -> Heap 0x1000 Pet[  ]
	// Stack : Knight2 [ hp 0x1000 ] -> Heap 0x1000 Pet[  ]
	// Stack : Knight3 [ hp 0x1000 ] -> Heap 0x1000 Pet[  ]

	// [ ���� ���� Deep Copy ]
	// ��� �����Ͱ� ����(�ּ�) �� �̶��, �����͸� ���� ������ش� (���� ��ü�� �����ϴ� ������ ���� ���� ����)
	// �����ʹ� �ּҰ� �ٱ��� -> ���ο� ��ü�� ���� -> ������ ��ü�� ����Ű�� ���°� ��.
	// Stack : Knight1 [ hp 0x1000 ] -> Heap 0x1000 Pet[  ]
	// Stack : Knight2 [ hp 0x2000 ] -> Heap 0x2000 Pet[  ]
	// Stack : Knight3 [ hp 0x3000 ] -> Heap 0x3000 Pet[  ]

	// ����)
	// - �Ͻ��� ���� ������ Steps
	// 1) �θ� Ŭ������ ���� ������ ȣ��
	// 2) ��� Ŭ������ ���� ������ ȣ�� 
	// 3) ����� �⺻ Ÿ���� ��� �޸� ���� (���� ���� Shallow Copy)

	// - ����� ���� ������ Steps
	// 1) �θ� Ŭ������ �⺻ ������ ȣ��
	// 2) ��� Ŭ������ �⺻ ������ ȣ�� 


	// - �Ͻ��� ���� ���� ������ Steps
	// 1) �θ� Ŭ������ ���� ���� ������ ȣ��
	// 2) ��� Ŭ������ ���� ���� ������ ȣ�� 
	// 3) ����� �⺻ Ÿ���� ��� �޸� ���� (���� ���� Shallow Copy)
	
	// - ����� ���� ���� ������ STeps
	// 1) �˾Ƽ� ���ִ� �� ����.

	// ��ü�� '����' �Ѵٴ� ���� �� ��ü�� ������ ��ġ��Ű���� ��
	// ���� �⺻������ ���� ���� (Shallow Copy) ������� ����
	
	// ����� ���� -> [��� å��] ���α׷������� �����ϰڴٴ� �ǹ�
	// 

	return 0;
}