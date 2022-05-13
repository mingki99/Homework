#include <iostream>
using namespace std;
#include <list>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <algorithm>

// 오늘의 주제 : 람다(lambda)

// 함수 객체를 빠르게 만드는 문법

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

	// 람다 = 함수 객체를 손쉽게 만드는 문법
	// 람다 자체로 C++11에 '새로운' 기능이 들어간 것은 아니다.


	{
		int itemId = 4;

		// 참조 [&] 방식
		auto FindItemByItemIDLambda = [=](Item& item)
		{
			return item._itmeid == itemId;
		};

		itemId = 10;

		auto findit2 = std::find_if(v.begin(), v.end(), FindItemByItemIDLambda);

		if (findit2 != v.end())
			cout << "아이템 ID : " << findit2->_itmeid << endl;
	}










	{
		struct IsUniqueItem
		{
			bool operator()(Item& item)
			{
				return item._rarity == Rarity::Unique;
			}
		};


		auto IsUniqueLambda = [](Item& item) {return item._rarity == Rarity::Unique; };	// 람다 표현식 (lambda exoression)

		// 보기 편하게 바꾸었다.
		auto IsUniqueLambda2 = [](Item& item)
		{
			return item._rarity == Rarity::Unique;
		};

		// 명시적으로 int로 반환해달라는 표현
		auto IsUniqueLambda3 = [](Item& item)-> int {return item._rarity == Rarity::Unique; };

		// 사용가능
		auto findit2 = std::find_if(v.begin(), v.end(), IsUniqueLambda3);
		if (findit2 != v.end())
			cout << "아이템 ID : " << findit2->_itmeid << endl;


		// 객체로 생성하지 않고 일회성으로 사용하고싶다면
		auto findit3 = std::find_if(v.begin(), v.end(), [](Item& item) {return item._rarity == Rarity::Unique; });
		if (findit3 != v.end())
			cout << "아이템 ID : " << findit3->_itmeid << endl;


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


		// functor를 활용
		auto findit1 = std::find_if(v.begin(), v.end(), FindItemByItemID(4, Rarity::Unique, ItemType::Weapon));
		if (findit1 != v.end())
			cout << "아이템 ID : " << findit1->_itmeid << endl;


		// 클로저 (closure) = 람다에 의해 만들어진 실행시점 객체
		
		// [ ] 캡처(capture) : 함수 객체 내부에 변수를 저장하는 개념과 유사
		// 사진을 캡처 하듯 = 일종의 스냅샷을 찍는다고 한다.
		// 
		// 기본 캡처모드, 값(복사) 방식(=) 참조 방식(&)
		// 
		// 람다는 외부에 있는 값을 사용할 수 있다.


		// ---------------- 5 / 13 --------------------


		
		// 값 복사, 참조를 할때 [=], [&] 로 한번에 처리하는 코드를 지향하자
		// 코드 가독성 측면에서도 물론, 실수를 덜 할 수 있다.
		// 변수마다 캡처 모드를 지정해서 사용해서 사용하자 : 값 방식 (name), 참조 방식(&name)
		auto FindItemByItemIDLambda = [itemId, &rarity, &type](Item& item) 
		{
			return item._itmeid == itemId && item._rarity == rarity && item._type == type;
		};

		auto findit2 = std::find_if(v.begin(), v.end(), FindItemByItemIDLambda);
		if (findit2 != v.end())
			cout << "아이템 ID : " << findit2->_itmeid << endl;

		{
			// 참조 방식으로 하게도면 functor와 똑같다
			
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
				cout << "아이템 ID : " << findit2->_itmeid << endl;

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

