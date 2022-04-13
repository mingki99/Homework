#include <iostream>

using namespace std;

// 오늘의 주제 : 상속성

// 객체 지향 (OOP Object Oriented
// 상속성
// 은닉성
// 다형성

struct StatInfo
{
	int hp;
	int attack;
	int defence;
};

// 메모리

// [	Knight	]
// [   [Player] ]

// 상속 (Inheritance) 부모 -> 자식에게 유산을 물려주는 것

// 생성자는 탄생을 기념해서 호출되는 함수이다
// -Knight를 생성하면 ->Player의 생성자? Knight의 생성자? 둘 중에 어느게 먼져 실행되야할까
// ->둘다 호출된다!

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
		cout << "Player() 생성자 동작" << endl;
	}
	Player(int hp)
	{
		cout << "Player(int hp) 생성자 동작" << endl;
	}
	~Player()
	{
		cout << "Player() 소멸자 동작" << endl;
	}

	void Move() { cout << "Player Move " << endl; }
	void Attack() { cout << "Player Attack "<<  endl; }
	void Die() { cout << "Player Die " << endl; }
	
public:
	// 멤버 변수
	int _hp = 100;
	int _attack = 10;
};

class Knight : public Player
{
public:
	Knight()
	{
		_stamina = 100;
		cout << "knight() 생성자 동작" << endl;
	}

	Knight(int Stmina) 
	{
		_stamina = Stmina;
		cout << "knight(int Stmina) 생성자 동작" << endl;
	}

	~Knight()
	{
		cout << "Knight() 소멸자 동작" << endl;
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
		cout << "Mage() 생성자 동작" << endl;
	}

	Mage(int MP) : Knight(10)
	{
		cout << "Mage(int MP) 생성자 동작" << endl;
	}

	~Mage()
	{
		cout << "Mage() 소멸자 동작" << endl;
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

	//cout << "시험 점수를 입력하십시오." << endl;

	//for (int i = 0; i < number; ++i)
	//{
	//	int score = 0;

	//	cin >> score;

	//	Array[i] = score;

	//	/*cout << Array[i] << endl;*/
	//}
	//
	//ArrayMax(Array, number);

	//cout << "가장 높은 점수는 "<<  Array[0] << " 입니다" << endl;
	
	printf("\n--------------\n");

	printf("문자열을 입력하십시오.\n");

	char str[10];

	cin >> str;

	int counter = Length(str);

	printf("문자열의 길이는 %d 입니다.\n\n", counter);

	char Findcahr;

	printf("찾을 문자를 입력하시오.\n");

	cin >> Findcahr;	

	printf("%s 안에 %c은 총 %d 개 있습니다.",str, Findcahr, count(str, Findcahr));



	return 0;
}