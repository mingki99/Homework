
#include <iostream>
#include<time.h>

using namespace std;

int main()
{
	srand((unsigned int)time(0));

	int	iNumber[25] = {};
		
	// 1 ~ 25 까지 숫자를 넣어준다.

	for (int i = 0; i < 25; ++i)
	{
		iNumber[i] = i + 1;
	}
	
	int iTemp;
	int idx1;
	int idx2;
	for (int i = 0; i < 1000; ++i)
	{
		idx1 = rand() % 25;
		idx2 = rand() % 25;

		iTemp = iNumber[idx1];
		iNumber[idx1] = iNumber[idx2];
		iNumber[idx2] = iTemp;
	}

	while (true)
	{
		system("cls");

		//숫자를 5 x 5 로 출력한다.
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (iNumber[i * 5 + j] == INT_MAX)
				{
					cout << "*\t";
				}
				else
				{
					cout << iNumber[i * 5 + j] << "\t";
				}
			}
			cout << endl;
		}

		cout << "숫자를 입력하세요 0 : 종료 : ";

		int iInput;
		cin >> iInput;

		if (iInput == 0)
		{
			break;
		}
		else if(iInput < 1 || iInput > 25)
		{
			continue;
		}

		//중복입력을 체그하기 위한변수 기본적으로 중복되었다고
		//하기위해 ture 로 설정
		bool	bAcc = true;

		//모든 숫자를 차례대로 검사해서 입력한 숫자와 같은 숫자가
		//잇는지를 찾아낸다.

		for (int i = 0; i < 25; ++i)
		{
			//같은 숫자가 있을경우
			if (iInput == iNumber[i])
			{	
				//숫자를 찾았을 경우 중복된 숫자가 아니므로
				//bAcc 변수를 false 로 만들어준다.
				bAcc = false;

				//숫자를 * 로 변경하기 위해 특수한 값인 INT_MAX 로 해준다.
				iNumber[i] = INT_MAX;

				break;
			}
		}

		if (bAcc)
		{
			continue;
		}

	}




	return 0;
}

