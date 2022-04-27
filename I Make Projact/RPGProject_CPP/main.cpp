
#include <iostream>

using namespace std;


// ������ ���� : �Լ� ������

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
	int _itemID;	// �������� �����ϱ� ���� ID
	int _rarity;	// ��͵�
	int _ownerID;	// ������ ID
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

	// �ٱ��� �ּ�
	// pointer[ �ּ� ] -> �ּ� [ ]

	typedef int DATA;

	// 1) ������			*
	// 2) �����̸�		pointer
	// 3) ������ Ÿ��	int

	DATA* pointer = &a;
	
	// �Լ�
	typedef int(FUNC_TYPE)(int a, int b);


	// 1) ������			*
	// 2) �����̸�		fn
	// 3) ������ Ÿ��	�Լ� (���ڴ� int, int / ��ȯ�� int)
	FUNC_TYPE* fn;

	// �����Ϳ� �Լ��� �ּҸ� �־����.
	
	fn = Sub;

	// �Լ��� �̸��� �Լ��� ���� �ּ� (�迭�� ����)
	// �Լ��� ȣ�� �� �� �ְԵȴ�.
	int result = fn(1, 2);
	cout << result << endl;

	// �Լ� �����ʹ� *(���� ������) �پ �Ȱ��� �Լ� �ּ��̴�.
	int result2 = (*fn)(1,2);	
	cout << result2 <<endl;


	Item items[10] = {};
	items[3]._rarity = 2;
	Item* rareItem = FindItem(items, 10, IsRareItem, 100);

	return 0;
}