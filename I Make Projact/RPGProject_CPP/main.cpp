#include <iostream>

using namespace std;

// ������ ���� : Ÿ�� ��ȯ (������)

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

	char _dummy[4096] = {}; // �̷� ���� ������� ���� �������.
};

void TestItem(Item item)	// ����ȴ�.
{

}

void TestItemPtr(Item* item)	// ���簡 �ƴ� �ּҰ��� ��
{

}

int main()
{
	// ����
	{
		// stack [ type(4) dbid(4) dummy[4096]
		Item item; 

		// Stack [ �ּ� (4~8����Ʈ)] -> heap [ type(4) dbid(4) dummy[4096]
		Item* item2 = new Item();

		// �޸� ����(Memory Leak) -> ���� ���� �޸𸮰� �پ�� Crash
		delete item2;

		TestItem(item);
		TestItem(*item2);

		TestItemPtr(&item);
		TestItemPtr(item2);
	}

	// �迭
	{
		cout << "--------------------" << endl;

		// ������ ������ �� 100�� �ִ� �� (���� �޸𸮿� �ö�� �ִ�)
		Item item3[100] = {}; 

		// �������� ����Ű�� �ּҰ� 100��. ���� �������� 1���� ���� �� ���ִ�.
		cout << "--------------------" << endl;
		Item* item4[100] = {};

		for (int i = 0; i < 100; i++)
		{
			item4[i] = new Item();
		}


	}





	return 0;
}