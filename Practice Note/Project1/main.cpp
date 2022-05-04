#include <iostream>

using namespace std;


int main()
{
	int i;

	cin >> i;
	while (i)
	{
		int W;	// 30
		int H;	// 50
		int N;	// 150 번째

		// 3050호 가 나와야한다.


		// W / N = 1 ㅇ상일 경우 02 호로 전환 = 2일경우 03

		cin >> W >> H >> N;

		int hundred = N % W;
		if (!hundred)
			hundred += W;

		int tenth = N / W;
		if (!tenth)
			tenth++;
		else
		{
			tenth++;
		}


		if (tenth <= 10)
		{
			cout << hundred << "0" << tenth << endl;
		}
		else
		{
			cout << hundred << tenth << endl;
		}


		--i;
	}


	return 0;
}