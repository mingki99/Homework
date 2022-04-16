#include <iostream>

using namespace std;

int OXQuiz(char str[])
{

	int TotalScore = 0;

	int tempscore = 0;

	for (int i = 0; '\n' <= str[i]; ++i)
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

	for (int i = 1; i <= TestNumber; i++)
	{
		char str[80];

		cin >> str;

		cout << OXQuiz(str) << endl;

	}

	return 0;
}