#include <iostream>
using namespace std;

// 오늘의 주제 : 콜백 (Callback)
// 원하는 타이밍에 함수를 호출 하는 것.


class Item
{
public:

public:
	int _itemid = 0;
	int _rarity = 0;
	int _ownerid = 0;
};

// Functor 생성, 지정된 아이디와 인자를 받은 아이디를 검사해준다.

class FindByOwnerID	
{
public:
	bool operator() (const Item* item)
	{
		return item->_ownerid==_ownerid;
	}

public:
	int _ownerid;
};


// Functor 생성, 지정된 아이템의 값과 인자를 받은 레어값을 검사해준다.
class FindByRarity	
{
public:
	bool operator() (const Item* item)
	{
		return item->_rarity == _rarity;
	}

public:
	int _rarity;
};


template <typename T>	// 템플릿을 이용하여 사용
Item* FindItem(Item items[], int itemCount, T selector)	// Functor들을 넘겨준다
{
	for (int i = 0; i < itemCount; i++)
	{
		Item* item = &items[i];
		
		if(selector(item))
			return item;
	}
}



int main()
{

	// items 10개 생성
	Item items[10];
	items[3]._ownerid = 100;
	items[8]._rarity = 2;


	// 람다를 이용하면 직접 functor를 만들지 않고 함수를 사용 할 수 있다.
	// functor 2개생성
	FindByOwnerID functorOwner;
	functorOwner._ownerid = 100;	// 체력이 100인 items를 찾는다

	FindByRarity functorRarity;
	functorRarity._rarity = 1;		// rariy가 1인 items를 찾는다.

	// FindOwnerID로 실행
	Item* item = FindItem(items, 10, functorOwner);	
	// FindByRarity로 실행
	Item* item2 = FindItem(items, 10, functorRarity);


	return 0;
}

