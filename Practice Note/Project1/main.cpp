#include <iostream>

using namespace std;

// 오늘의 주제 : 분기문
// 데이터를 메모렝 할당하고 가공하고 방법에 대해 알아봄
// 가공한 데이터를 이용해서 무엇인가를 하고싶다면?

int main()
{

#pragma region 몬스터 상호작용
	int hp = 100;				// 몬스터 HP
	int damage = 100;			// 플레이어 데미지

	hp -= damage;				//피격판정
	bool isDead = (hp <= 0);	// 처치 판정

	// 몬스터가 죽었으면 경험치 추가
	// 어셈블리에서 CMP JMP

	if (isDead)
	{
		cout << "몬스터를 처치했습니다." << endl;
	}
	else if (hp <= 20)
	{
		cout << "몬스터가 도망가고 있습니다." << endl;
		//(isDead == false)
	}
	else
	{	
		// TODO
		cout << "몬스터가 반격했습니다" << endl;
	}
		
		
#pragma endregion
#pragma region 분기문
	const int ROOK = 0;
	const int PAPER = 1;
	const int SCISSORS = 2;

	int input = ROOK;

	switch (input)
	{
	case ROOK:
		cout << "바위를 냿습니다" << endl;
		break;
	case PAPER:
		cout << "바위를 냿습니다" << endl;
		break;
	case SCISSORS:
		cout << "바위를 냿습니다" << endl;
		break;
	default:
		cout << "이상한겄을 내셨습니다" << endl;
		break;
	}

#pragma endregion

#pragma region 반복문
	int count = 0;

	while (count <= 5)
	{
		cout << "출력" << endl;
		count++;
	}
	
	for (int i = 0; i < 5; ++count)
	{
		cout << "For Loop" << endl; 
		break;
	}



	for (int iCount = 1; iCount <= 10; iCount++)
	{
		bool isEven = ((iCount % 2) == 0);
		if (isEven)
		{
			continue;
		}

		cout << iCount << endl;



	}
#pragma endregion

#pragma region 구구단
	// 구구단

	// 1개부터 시작해서 순차적으로 줄마다 증가

	int total = 0;

	for (int i = 2; i <= 9; ++i)
	{
		
		for (int j = 1; j <= 9; ++j)
		{
			total = i * j;
			cout << i, " X ", j, " = ", total << endl;
		
		}
		
		
	}
#pragma endregion


	return 0;
}

