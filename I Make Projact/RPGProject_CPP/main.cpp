#include <iostream>

using namespace std;

// ������ ���� : Ÿ�� ��ȯ (������)

class Knight
{
public:

int _hp = 4;
};

class Item
{
public:

	// ���� ������
	Item(int itemType) : _itemType(itemType)	// ����ɶ� ������ Ÿ�� �����ֱ�.
	{
		cout << "Item(int itemType)" << endl << endl;
	}

	virtual~Item()
	{
		cout << " ~Item()" <<endl << endl;
	}
public:
	int _itemType;

};

enum ItemType	// ������ ����
{
	IT_WEAPON = 1,
	IT_ARMOR = 2,
};

class Weapon : virtual public Item
{
public:
	Weapon() : Item(IT_WEAPON)
	{	

		cout << " Weapon()" << endl << endl;
	}

	~Weapon()
	{
		cout << " ~Weapon()" << endl << endl;
	}
};

class Armor : virtual public Item
{
public:
	Armor() : Item(IT_ARMOR)
	{

		cout << " Armor()" << endl << endl;
	}

	~Armor()
	{
		cout << " ~Armor()" << endl << endl;
	}
};


class Handle : public Armor
{
public:
	Handle() : Item(IT_ARMOR)
	{
		cout << "Handle()" << endl << endl;
	}
	~Handle()
	{
		cout << "~Handle()" << endl << endl;
	}
};



int main()
{
	
	Item* inventory[5] = {};	// �������� �� 5���� �־�����. (�ּ�)

	srand((unsigned int)time(nullptr));	// ������ ����� Weapon, Armor�� �����ϰ� �����Ѵ�.

	for (int i = 0; i < 5; ++i)
	{
		int randValue = rand() %2;	// ���� ����
		switch (randValue)
		{
		case 0:
			inventory[i] = new Weapon();	// weapon ����!
			break;
		case 1:
			inventory[i] = new Armor();		// Armor ����!
			break;
		}

	}

	cout << endl <<  "------- Weapon�� Armor�� �ʿ䰡 ��������. -------" << endl <<endl;

	// ************************* �ſ� �߿��� *****************************

	for (int i = 0; i < 5; i++)
	{
		Item* item = inventory[i];
		if (item == nullptr)
			continue;
		
		delete item;	// weapon, Armor�� ������ �ϳ��� �Ҹ��Ű�� �ִ�.

	}

	Item* Inven;
	Inven = new Handle();

	delete Inven;


	// �ֻ��� �θ� Ŭ�������� virtual �Ҹ��ڸ� �� �־�����!!
	
	// [���]
	// - ������ vs �Ϲ� Ÿ�� : ���̸� ��������
	// - ������ ������ Ÿ�� ��ȯ(ĳ����)�� �� ���� �ſ� �ſ� �����ؾ� �Ѵ�!.
	// - �θ� - �ڽ� ���迡�� �θ� Ŭ������ �Ҹ��ڿ��� ����� ���� virtual�� ������!!



	return 0;
}