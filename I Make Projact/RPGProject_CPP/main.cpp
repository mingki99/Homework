#include <iostream>

using namespace std;

// 오늘의 주제 : 타입 변환 (포인터)

class Item
{
public:
	Item()
	{
		cout << "Item()" << endl;
	}

	Item(const Item& item)
	{
		cout << "Item(const Item&)" << endl;
	}

	~Item()
	{
		cout << " ~Item()" <<endl;
	}

public:
	int _itemType = 0;
	int _itemDbld = 0;

	char _dummy[4096] = {}; // 이런 저런 정보들로 인해 비대졌다.
};

void TestItem(Item item)	// 복사된다.
{

}

void TestItemPtr(Item* item)	// 복사가 아닌 주소값만 볷
{

}

int main()
{
	// 복습
	{
		// stack [ type(4) dbid(4) dummy[4096]
		Item item; 

		// Stack [ 주소 (4~8바이트)] -> heap [ type(4) dbid(4) dummy[4096]
		Item* item2 = new Item();

		// 메모리 누수(Memory Leak) -> 점점 가용 메모리가 줄어들어서 Crash
		delete item2;

		TestItem(item);
		TestItem(*item2);

		TestItemPtr(&item);
		TestItemPtr(item2);
	}

	// 배열
	{
		cout << "--------------------" << endl;

		// 실제로 아이템 이 100개 있는 것 (스택 메모리에 올라와 있는)
		Item item3[100] = {}; 

		// 아이템을 가리키는 주소가 100개. 실제 아이템은 1개도 없을 수 도있다.
		cout << "--------------------" << endl;
		Item* item4[100] = {};

		for (int i = 0; i < 100; i++)
		{
			item4[i] = new Item();
		}


	}





	return 0;
}