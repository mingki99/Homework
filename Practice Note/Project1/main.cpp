#include <iostream>

using namespace std;


// 불 자료형과 char 자료형을 결합시켜서 넣어주자

int GroupWord()
{

		char s[100];
		cin >> s;	// abcabc a가 걸리면 false

		char tempC[26];
		bool Check[26] = { 0, };



		for (int i = 0; i < 26; ++i)
		{
			tempC[i] = i + 97;
		}


		// 조건
		// 입력된 숫자가 반복이 되었는가 체크.
		// 알파벳 쭉 넣을까?..


		for (int i = 0; s[i] != '\0'; i++)
		{
			for (int j = 0; j < 26; j++)
			{
				if (tempC[j] == s[i])
				{
					if (tempC[j] == s[i - 1])
					{
						break;
					}
					else if (!Check[j])
					{
						Check[j] = true;
						break;
					}
					else
					{
						return 1;
					}

				}

			}
		}
	
	return 0;
	
}


int main()
{
	int PlayCount = 0;

	cin >> PlayCount;

	int score =  PlayCount;

	for (int i = 0; i < PlayCount; i++)
	{
		score -= GroupWord();
	}

	cout << score <<endl;


	return 0;
}