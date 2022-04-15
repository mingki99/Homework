#include <iostream>

// 백준에서는 string을 사용하길 원한다.
#include <string.h>

using namespace std;

int OXQuiz(char str[])
{
	
		int TotalScore = 0;

		int tempscore = 0;


		for (int i = 0; 0 <= str[i]; ++i)
		{	
			if (str[i] == 'O')
			{
				tempscore++;
				TotalScore = TotalScore + tempscore;
			}
			else  
			{
				tempscore = 0;
			}
		}

		return TotalScore;
	
}

int main()
{

	int TestNumber = 0;

	cin >> TestNumber;

	for (int i = 0; i <= TestNumber; ++i)
	{
		char str[80];

		cin >> str;

		cout << OXQuiz(str) << endl;

	}
	
	return 0;
}


