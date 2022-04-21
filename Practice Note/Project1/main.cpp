#include <iostream>

using namespace std;




int main()
{
	// 아스키코드가 들어있을 배열
	int Arr[26];

	// 글자 자리들의 위치 저장.
	int OutputArr[26];

	// 중복체크
	bool overlap[26];

	string s;

	// 몇 번째 인지 정해줄 정수
	int digit = 0;

	for (int i = 0; i <= 25; ++i)
	{
		Arr[i] = i + 97;	// 아스키코드로는 소문자 a = 97이다
		OutputArr[i] = -1;
		overlap[i] = true;

	}

	cin >> s;

	for (int i = 0; i < s.length(); ++i)
	{
		for (int j = 0; j <= 25; ++j)
		{	
			if (overlap[j])	// 중복 체크
			{
				if (Arr[j] == s[i])	// 정수와 아스키코드 비교
				{
					OutputArr[j] = digit;	// 이 구문 수상

					overlap[j] = false;	// 값이 들어갔으면 false
				}
			}
		}

		digit ++;
	}
	
	for (int i = 0; i <= 25; ++i)
	{
		cout << OutputArr[i]<< " ";
	}

	
	return 0;
}

