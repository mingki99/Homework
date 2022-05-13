#include <iostream>
using namespace std;
#include <list>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <algorithm>

// ������ ���� : ����(lambda)

// �Լ� ��ü�� ������ ����� ����

enum class ItemType
{
	None,
	Armor,
	Weapon,
	Jewelry,
	Consumable
};

enum class Rarity
{
	Common,
	Rare,
	Unique
};

class Item
{
public:
	Item() {}
	Item(int itemid, Rarity rarity, ItemType type)
		: _itmeid(itemid), _rarity(rarity), _type(type)
	{
	}
public:
	int _itmeid = 0;
	Rarity _rarity = Rarity::Common;
	ItemType _type = ItemType::None;
};


int main()
{
	
	vector<Item> v;
	v.push_back(Item(1, Rarity::Common, ItemType::Weapon));
	v.push_back(Item(2, Rarity::Common, ItemType::Armor));
	v.push_back(Item(3, Rarity::Rare, ItemType::Jewelry));
	v.push_back(Item(4, Rarity::Unique, ItemType::Weapon));

	// ���� = �Լ� ��ü�� �ս��� ����� ����
	// ���� ��ü�� C++11�� '���ο�' ����� �� ���� �ƴϴ�.


	{
		int itemId = 4;

		// ���� [&] ���
		auto FindItemByItemIDLambda = [=](Item& item)
		{
			return item._itmeid == itemId;
		};

		itemId = 10;

		auto findit2 = std::find_if(v.begin(), v.end(), FindItemByItemIDLambda);

		if (findit2 != v.end())
			cout << "������ ID : " << findit2->_itmeid << endl;
	}










	{
		struct IsUniqueItem
		{
			bool operator()(Item& item)
			{
				return item._rarity == Rarity::Unique;
			}
		};


		auto IsUniqueLambda = [](Item& item) {return item._rarity == Rarity::Unique; };	// ���� ǥ���� (lambda exoression)

		// ���� ���ϰ� �ٲپ���.
		auto IsUniqueLambda2 = [](Item& item)
		{
			return item._rarity == Rarity::Unique;
		};

		// ��������� int�� ��ȯ�ش޶�� ǥ��
		auto IsUniqueLambda3 = [](Item& item)-> int {return item._rarity == Rarity::Unique; };

		// ��밡��
		auto findit2 = std::find_if(v.begin(), v.end(), IsUniqueLambda3);
		if (findit2 != v.end())
			cout << "������ ID : " << findit2->_itmeid << endl;


		// ��ü�� �������� �ʰ� ��ȸ������ ����ϰ�ʹٸ�
		auto findit3 = std::find_if(v.begin(), v.end(), [](Item& item) {return item._rarity == Rarity::Unique; });
		if (findit3 != v.end())
			cout << "������ ID : " << findit3->_itmeid << endl;


	}


	{

		struct FindItemByItemID
		{
			FindItemByItemID(int itemID, Rarity rarity, ItemType itemtype) 
				: _itemId(itemID), _rarity(rarity), _itemtype(itemtype)  {}

			bool operator()(Item& item)
			{
				return  item._itmeid == _itemId && item._rarity == _rarity && item._type == _itemtype;
			}

			int _itemId;
			Rarity _rarity;
			ItemType _itemtype;
		};
		
		int itemId = 4;
		Rarity rarity = Rarity::Unique;
		ItemType type = ItemType::Weapon;


		// functor�� Ȱ��
		auto findit1 = std::find_if(v.begin(), v.end(), FindItemByItemID(4, Rarity::Unique, ItemType::Weapon));
		if (findit1 != v.end())
			cout << "������ ID : " << findit1->_itmeid << endl;


		// Ŭ���� (closure) = ���ٿ� ���� ������� ������� ��ü
		
		// [ ] ĸó(capture) : �Լ� ��ü ���ο� ������ �����ϴ� ����� ����
		// ������ ĸó �ϵ� = ������ �������� ��´ٰ� �Ѵ�.
		// 
		// �⺻ ĸó���, ��(����) ���(=) ���� ���(&)
		// 
		// ���ٴ� �ܺο� �ִ� ���� ����� �� �ִ�.


		// ---------------- 5 / 13 --------------------


		
		// �� ����, ������ �Ҷ� [=], [&] �� �ѹ��� ó���ϴ� �ڵ带 ��������
		// �ڵ� ������ ���鿡���� ����, �Ǽ��� �� �� �� �ִ�.
		// �������� ĸó ��带 �����ؼ� ����ؼ� ������� : �� ��� (name), ���� ���(&name)
		auto FindItemByItemIDLambda = [itemId, &rarity, &type](Item& item) 
		{
			return item._itmeid == itemId && item._rarity == rarity && item._type == type;
		};

		auto findit2 = std::find_if(v.begin(), v.end(), FindItemByItemIDLambda);
		if (findit2 != v.end())
			cout << "������ ID : " << findit2->_itmeid << endl;

		{
			// ���� ������� �ϰԵ��� functor�� �Ȱ���
			
			struct FindItemByItemID
			{
				FindItemByItemID(int& itemID) : _itemId(itemID) {}

				bool operator()(Item& item)
				{
					return item._itmeid == _itemId;
				}

				int& _itemId;
			};


			auto FindItemByItemIDLambda = [&](Item& item)
			{
				return item._itmeid == itemId;
			};

			auto findit2 = std::find_if(v.begin(), v.end(), FindItemByItemIDLambda);
			if (findit2 != v.end())
				cout << "������ ID : " << findit2->_itmeid << endl;

		}



		{
			class Knight
			{
			public:
				auto ResetHpJob()
				{
					auto f = [this]()
					{
						this->_hp = 200;
					};

					return f;
				}

			public:
				int _hp = 100;
			};

			Knight* k = new Knight();
			auto t = k->ResetHpJob();
			delete k;

			t();

			int a = 0;
		}

















	}



	return 0;
}

