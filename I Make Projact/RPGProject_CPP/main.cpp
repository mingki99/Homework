#include <iostream>
using namespace std;

// ������ ���� : �ݹ� (Callback)
// ���ϴ� Ÿ�ֿ̹� �Լ��� ȣ�� �ϴ� ��.


class Item
{
public:

public:
	int _itemid = 0;
	int _rarity = 0;
	int _ownerid = 0;
};

// Functor ����, ������ ���̵�� ���ڸ� ���� ���̵� �˻����ش�.

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


// Functor ����, ������ �������� ���� ���ڸ� ���� ����� �˻����ش�.
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


template <typename T>	// ���ø��� �̿��Ͽ� ���
Item* FindItem(Item items[], int itemCount, T selector)	// Functor���� �Ѱ��ش�
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

	// items 10�� ����
	Item items[10];
	items[3]._ownerid = 100;
	items[8]._rarity = 2;


	// ���ٸ� �̿��ϸ� ���� functor�� ������ �ʰ� �Լ��� ��� �� �� �ִ�.
	// functor 2������
	FindByOwnerID functorOwner;
	functorOwner._ownerid = 100;	// ü���� 100�� items�� ã�´�

	FindByRarity functorRarity;
	functorRarity._rarity = 1;		// rariy�� 1�� items�� ã�´�.

	// FindOwnerID�� ����
	Item* item = FindItem(items, 10, functorOwner);	
	// FindByRarity�� ����
	Item* item2 = FindItem(items, 10, functorRarity);


	return 0;
}

