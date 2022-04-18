#include <iostream>

using namespace std;

int main()
{
	int Number = 0;
	cin >> Number;	// 몇번 반복할 겄 인지

	for (int j = 0; j <= Number - 1; ++j)
	{
		int SubjectsNumber = 0;
		cin >> SubjectsNumber;	// 반에 몇명인지

		int tempScore[1000] = {};

		int TotalScore = 0;

		float UpAverge = 0;
		float count = 0;	// float 형이 아니면 UpAverge에 값을 넣지 못하게된다.

		for (int i = 0; i <= SubjectsNumber - 1; ++i)
		{
			cin >> tempScore[i];	// 차례 대로 점수 기입
			TotalScore = TotalScore + tempScore[i];	// 반에 총 점수 구하기
		}

		UpAverge = TotalScore / SubjectsNumber;	// 반에 평균 점수 구하기

		for (int i = 0; i <= SubjectsNumber - 1; ++i)
		{
			if (UpAverge < tempScore[i])	// 평균보다 높은친구 선별하기
			{
				count++;	// 선별된 친구 count
			}
		}

		UpAverge = count / SubjectsNumber*100;	// 선별된친구 / 반에 학생수 * 100

		printf("%0.3f%\n", UpAverge);	// %0.3f를 하면 소수점 3자리만 출력되게 해준다. [% 꼭 넣어주세요~]
	}


	return 0;
}