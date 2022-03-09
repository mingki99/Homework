#include <iostream>

using namespace std;



int main()
{
	srand(time(0)); // ½Ãµå ¼³Á¤

	// 1 2 3
	
	int iMyTurn = 0;

	int iRounds = 0;

	int iWins = 0;


	while (iMyTurn <= 4)
	{
		int value = 1 + (rand() % 3); // 0~32767 

		cout << "°¡À§ (1) ¹ÙÀ§ (2) º¸ (3) °ñ¶óÁÖ¼¼¿ä" << endl;

		cin >> iMyTurn;
		
		cout << endl;

		cout << " AI " << value << endl;
		cout << endl;
			
		if (iRounds == 0)
		{

			cout << "ÇöÀç ½Â·ê : ¾øÀ½" << endl;

		}
		else if (iMyTurn <= 4)
		{
			// TODO : È®·üÀ» ±¸ÇØÁØ´Ù
			int iWinPercentage = (iWins*100) / iRounds ; // ½Â·ü?
			cout << "ÇöÀç ½Â·ü : " << iWinPercentage << endl;
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

