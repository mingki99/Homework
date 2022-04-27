
#include <iostream>

using namespace std;


// 오늘의 주제 : 함수 포인터

int Add(int a, int b)
{
	return a+b;
}

int Sub(int a, int b)
{
	return a-b;
}

class Item
{
public:
	Item() : _itemID(0), _rarity(0), _ownerID(0)
	{

	}
		

public:
	int _itemID;	// 아이템을 구분하기 위한 ID
	int _rarity;	// 희귀도
	int _ownerID;	// 소지자 ID
};

typedef bool(ITEM_SELECTOR)(Item*, int);

Item* FindItem(Item items[], int itemCount, ITEM_SELECTOR* selector, int value)
{
	for (int i = 0; i < itemCount; i++)
	{
		Item* item = &items[i];
		if(selector(item, value))
			return item;

	}
}

bool IsRareItem(Item* item, int value)
{
	return item->_rarity >= value;
}

bool IsOwnerItem(Item* item, int ownerld)
{
	return item->_ownerID == ownerld;
}


int main()
{
	int a = 10;

	// 바구니 주소
	// pointer[ 주소 ] -> 주소 [ ]

	typedef int DATA;

	// 1) 포인터			*
	// 2) 변수이름		pointer
	// 3) 데이터 타입	int

	DATA* pointer = &a;
	
	// 함수
	typedef int(FUNC_TYPE)(int a, int b);


	// 1) 포인터			*
	// 2) 변수이름		fn
	// 3) 데이터 타입	함수 (인자는 int, int / 반환은 int)
	FUNC_TYPE* fn;

	// 포인터에 함수의 주소를 넣어줬다.
	
	fn = Sub;

	// 함수의 이름은 함수의 시작 주소 (배열과 유사)
	// 함수를 호출 할 수 있게된다.
	int result = fn(1, 2);
	cout << result << endl;

	// 함수 포인터는 *(접근 연산자) 붙어도 똑같은 함수 주소이다.
	int result2 = (*fn)(1,2);	
	cout << result2 <<endl;


	Item items[10] = {};
	items[3]._rarity = 2;
	Item* rareItem = FindItem(items, 10, IsRareItem, 100);

	return 0;
}