#include <iostream>

using namespace std;



int main()
{
	srand(time(0)); // 시드 설정

	// 1 2 3
	
	int iMyTurn = 0;

	int iRounds = 0;

	int iWins = 0;

	// 숫저를 지정하지 않으면 첫 값은 0부터 시작
	// 그 다음 값들은 이전 값 + 1
	enum ENUM_SRP
	{
		ENUM_SCISSORS = 1,
		ENUM_ROOK,
		ENUM_PATER
	};

	// #이 붙으면 -> 전처리 지시문
	// 1) 잔처리 2) 컴파일 3) 링크

#define DEFINE_SCISSORS 1+2
#define DEFINE_TEST cout << "hello World" << endl;






	while (iMyTurn <= 4)
	{
		int value = 1 + (rand() % 3); // 0~32767 

		cout << "가위 (1) 바위 (2) 보 (3) 골라주세요" << endl;

		cin >> iMyTurn;
		
		cout << endl;

		cout << " AI " << value << endl;
		cout << endl;
			
		if (iRounds == 0)
		{

			cout << "현재 승룰 : 없음" << endl;

		}
		else if (iMyTurn <= 4)
		{
			// TODO : 확률을 구해준다
			int iWinPercentage = (iWins*100) / iRounds ; // 승률?
			cout << "현재 승률 : " << iWinPercentage << endl;
		}

		iRounds++;

		if (iMyTurn == 1)
		{
			
			switch (value)
			{
			case 1:
				cout << "DRAW" << endl;
				break;

			case 2:
				cout << "AI Win" << endl;

				break;
			
			case 3:
				cout << "Player Win" << endl;

				iWins++;
				break;
				

			}
		}
		else if (iMyTurn == 2)
		{
			switch (value)
			{
			case 1:
				cout << "player Win" << endl;
				iWins++;
				break;
			case 2:
				cout << "DRAW" << endl;
				break;
			case 3:
				cout << "AI Win" << endl;
				break;
			}
		}
		else if (iMyTurn == 3)
		{
			switch (value)
			{
			case 1:
				cout << "AI Win" << endl;
				break;
			case 2:
				cout << "player Win" << endl;
				iWins++;
				break;
			
			case 3:
				cout << "DRAW" << endl;
				break;


			}
		}
		
		





	}



	return 0;
}

