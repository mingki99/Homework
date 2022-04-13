#include <iostream>

using namespace std;

// ������ ���� : ��Ӽ�

// ��ü ���� (OOP Object Oriented
// ��Ӽ�
// ���м�
// ������

struct StatInfo
{
	int hp;
	int attack;
	int defence;
};

// �޸�

// [	Knight	]
// [   [Player] ]

// ��� (Inheritance) �θ� -> �ڽĿ��� ������ �����ִ� ��

// �����ڴ� ź���� ����ؼ� ȣ��Ǵ� �Լ��̴�
// -Knight�� �����ϸ� ->Player�� ������? Knight�� ������? �� �߿� ����� ���� ����Ǿ��ұ�
// ->�Ѵ� ȣ��ȴ�!

// GameObject
// - Creature
// -- Player, Monster, NPC, Pet
// - Projectile
// -- Arrow, Fireball
// - Env

// Item
// - Weapon
// -- Sword, Bow
// - Armor
// -- Helmet, Boots, Armor

class GameObject
{
public:
	int _objectID;
};

class Player : public GameObject
{
public:
	Player()
	{
		cout << "Player() ������ ����" << endl;
	}
	Player(int hp)
	{
		cout << "Player(int hp) ������ ����" << endl;
	}
	~Player()
	{
		cout << "Player() �Ҹ��� ����" << endl;
	}

	void Move() { cout << "Player Move " << endl; }
	void Attack() { cout << "Player Attack "<<  endl; }
	void Die() { cout << "Player Die " << endl; }
	
public:
	// ��� ����
	int _hp = 100;
	int _attack = 10;
};

class Knight : public Player
{
public:
	Knight()
	{
		_stamina = 100;
		cout << "knight() ������ ����" << endl;
	}

	Knight(int Stmina) 
	{
		_stamina = Stmina;
		cout << "knight(int Stmina) ������ ����" << endl;
	}

	~Knight()
	{
		cout << "Knight() �Ҹ��� ����" << endl;
	}

	void Move() { cout << "Knight Move" << endl; }

public:

	int _stamina;

};


class Mage : public Knight
{
public:
	Mage()
	{
		cout << "Mage() ������ ����" << endl;
	}

	Mage(int MP) : Knight(10)
	{
		cout << "Mage(int MP) ������ ����" << endl;
	}

	~Mage()
	{
		cout << "Mage() �Ҹ��� ����" << endl;
	}

public:
	int _mp;
};


int ArrayMax(int x[], const int index)
{
	for (int i = 0 ; i < index - 1; ++i)
	{
		for (int j = i + 1; j < index; ++j)
		{
			if (x[i] < x[j])
			{
			int tmp = x[i];
			x[i] = x[j];
			x[j] = tmp;
			}
		}
	}

	return x[0];
}

int Length(char* str)
{
	int counter = 0;

	for (int i = 0; i <= str[i]; ++i)
	{
		counter++;		
	}
	
	return counter;
}

int count(char str[], char ch)
{
	int counter = 0;

	for (int i = 0; '\n' <= str[i]; ++i)
	{
		if (ch == str[i])
		{
			counter++;
		}
	}


	return counter;
}

int main()
{
	//const int number = 5;

	//int Array[number] = {};

	//cout << "���� ������ �Է��Ͻʽÿ�." << endl;

	//for (int i = 0; i < number; ++i)
	//{
	//	int score = 0;

	//	cin >> score;

	//	Array[i] = score;

	//	/*cout << Array[i] << endl;*/
	//}
	//
	//ArrayMax(Array, number);

	//cout << "���� ���� ������ "<<  Array[0] << " �Դϴ�" << endl;
	
	printf("\n--------------\n");

	printf("���ڿ��� �Է��Ͻʽÿ�.\n");

	char str[10];

	cin >> str;

	int counter = Length(str);

	printf("���ڿ��� ���̴� %d �Դϴ�.\n\n", counter);

	char Findcahr;

	printf("ã�� ���ڸ� �Է��Ͻÿ�.\n");

	cin >> Findcahr;	

	printf("%s �ȿ� %c�� �� %d �� �ֽ��ϴ�.",str, Findcahr, count(str, Findcahr));



	return 0;
}