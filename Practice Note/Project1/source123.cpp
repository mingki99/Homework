
#include <iostream>
#include<time.h>

using namespace std;

enum EUM
{
	EUM_0,
	EUM_1,
	EUM_2,
	EUM_3
};

#define EUM_4 4


enum SRP
{
	SRP_S = 1,
	SRP_R,
	SRP_P,
	SRP_END

};


int main()
{
	int iNumber;

	cout << "숫자를 입력하세요 : ";

	cin >> iNumber;
	switch (iNumber)
	{
	case EUM_1:
		cout << "입력한 숫자는 1입니다. " << endl;
		break;
	case EUM_2:
		cout << "입력한 숫자는 2입니다. " << endl;
		break;
	case EUM_3:
		cout << "입력한 숫자는 3입니다. " << endl;
		break;
	default:
		break;
	}

	
	

	

	srand((unsigned int)time(0));

	int iPlayer , iAI;

	while (true)
	{
		int iPlayer;

		cout << "1. 가위" << endl;
		cout << "2. 바위" << endl;
		cout << "3. 보" << endl;
		cout << "4. 가위" << endl;
		cout << "메뉴를 선택하세요 : ";
		cin >> iPlayer;

		if (iPlayer <SRP_S || iPlayer > SRP_END)
		{
			cout << "잘못된 값을 입력하였습니다." << endl;
			//일시정지
			system("pause");
			//반복문의 시작점으로 이동.
			continue;
		}
		else if (iPlayer == SRP_END)
			break;
	
		iAI = rand() % 3 + SRP_S;

		switch (iAI)
		{
		case SRP_S:
			cout << "AI : 가위" << endl;
			break;
		case SRP_R:
			cout << "AI : 바위" << endl;
			break;
		case SRP_P:
			cout << "AI : 보" << endl;
			break;
		default:
			break;
		}

		int iWin = iPlayer - iAI;

		switch (iWin)
		{
		case 1:
		case -2:
			cout << "Player 승리" << endl;
			break;
		case 0:
			cout << "비김" << endl;
			break;
		default:
			cout << "AI 승리" << endl;
			break;
		}


		
			 
	
	}




	return 0;
}




