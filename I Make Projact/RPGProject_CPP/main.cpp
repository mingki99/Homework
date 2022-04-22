#include <iostream>

using namespace std;

// 오늘의 주제 : 타입 변환 (포인터)

class Knight
{
public:

int _hp = 4;
};

class Item
{
public:

	// 복사 생성자
	Item(int itemType) : _itemType(itemType)	// 복사될때 아이템 타입 정해주기.
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

enum ItemType	// 아이템 지정
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
	
	Item* inventory[5] = {};	// 아이템이 총 5개가 주어진다. (주소)

	srand((unsigned int)time(nullptr));	// 랜덤을 만들어 Weapon, Armor를 랜덤하게 생성한다.

	for (int i = 0; i < 5; ++i)
	{
		int randValue = rand() %2;	// 랜덤 배정
		switch (randValue)
		{
		case 0:
			inventory[i] = new Weapon();	// weapon 생성!
			break;
		case 1:
			inventory[i] = new Armor();		// Armor 생성!
			break;
		}

	}

	cout << endl <<  "------- Weapon과 Armor의 필요가 없어졌다. -------" << endl <<endl;

	// ************************* 매우 중요함 *****************************

	for (int i = 0; i < 5; i++)
	{
		Item* item = inventory[i];
		if (item == nullptr)
			continue;
		
		delete item;	// weapon, Armor를 꺼내어 하나씩 소멸시키고 있다.

	}

	Item* Inven;
	Inven = new Handle();

	delete Inven;


	// 최상위 부모 클래스에게 virtual 소멸자를 꼭 넣어주자!!
	
	// [결론]
	// - 포인터 vs 일반 타입 : 차이를 이해하자
	// - 포인터 사이의 타입 변환(캐스팅)을 할 떄는 매우 매우 조심해야 한다!.
	// - 부모 - 자식 관계에서 부모 클래스의 소멸자에는 까먹지 말고 virtual을 붙이자!!



	return 0;
}