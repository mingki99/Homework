#include <iostream>

using namespace std;

void ScoreAverage()
{
	int SubjectsNumber = 0;
	cin >> SubjectsNumber;

	int tempScore[1000];

	int TopScore = 0;

	float TotalScore = 0;

	float UpAverge = 0;

	for (int i = 0; i <= SubjectsNumber - 1; ++i)
	{
		cin >> tempScore[i];
		
		if (TopScore < tempScore[i])
		{
			TopScore = tempScore[i];
		}
	}

	for (int i = 0; i <= SubjectsNumber - 1; ++i)
	{
		TotalScore = TotalScore + tempScore[i];
	}

	UpAverge = TotalScore / SubjectsNumber;

	UpAverge = UpAverge/TopScore *100;



	printf("%f", UpAverge);
}

int main()
{
	ScoreAverage();
	return 0;
}