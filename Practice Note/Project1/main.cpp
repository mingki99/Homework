#include <iostream>

using namespace std;

void OXQuiz(int casenumber)
{
	while (casenumber)
	{
		int TotalScore = 0;

		int tempscore = 0;

		char str[80];

		cin >> str;

		for (int i = 0; 0 <= str[i]; ++i)
		{
			if (str[i] == 'O')
			{
				tempscore++;
				TotalScore = TotalScore + tempscore;
			}
			else if (str[i] == 'X')
			{
				tempscore = 0;
			}
			else if (0 != str[i])
			{
				return;
			}
		}

		printf("%d\n", TotalScore);

		casenumber--;
	}
}

int main()
{
	int TestNumber = 0;

	// printf("ī���� �� ���ڸ� �Է��ϼ���.\n");

	cin >> TestNumber;

	OXQuiz(TestNumber);


	return 0;
}


