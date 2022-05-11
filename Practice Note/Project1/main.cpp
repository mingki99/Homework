#include <iostream>

using namespace std;
#include <string.h>


int main()
{
	string a;
	string b;
	cin >> a >> b;

	// 두 수의 합이 옮겨질 변수
	string temp;

	// 십의 자리올라가는 변수
	int tenth = 0;

	// 사이즈 크기 각각 배분
	int asize = a.size() - 1;
	int bsize = b.size() - 1;

	// a,b size 2개다 0보다 작아지면 반복문 중당
	while (0 <= asize || 0 <= bsize)
	{
		// 더해준 값 임시로 저장
		int add = 0;

		// a,b size 십의자리가 같거나, 다를 때 처리해주는 식과 조건문 
		if (0 <= asize && 0 <= bsize)
		{
			add = (a[asize] - 48) + (b[bsize] - 48) + tenth;
		}
		else if (asize > bsize)
		{
			add = (a[asize] - 48) + tenth;
		}
		else if (asize < bsize)
		{
			add = (b[bsize] - 48) + tenth;
		}

		// 더해준 값이 10보다 크다면 10의 자리 올림을 해야한다.
		if (add >= 10)
		{
			tenth = add / 10;
			add %= 10;

			temp.push_back(add);
		}
		else
		{
			temp.push_back(add);
			tenth = 0;
		}
		
		--asize;
		--bsize;
	}
	
	// 첫째 자리수 10의 올림
	if (tenth == 1)
	{
		temp.push_back(tenth);
	}

	// string을 현재 거꾸로 출력
	for (int i = (temp.size()) - 1; i >= 0; --i)
	{
		int ch = temp [i];
		cout << ch;
	}
	

	return 0;
}