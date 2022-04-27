#include <iostream>

using namespace std;

#define NJ = "nj"


int main()
{
	string s;
	cin >> s;
	
	if (s.length() > 100)
	{
		return 0;
	}

	int count = 0;

	// 아무래도 C 하고 는 c대로 가고 d는 d대로 가야 할 것 같다
	// char Croatia [8] = { 'c=', 'c-', 'dz=','d-', 'lj', 'nj', 's=' , 'z='};


	for (int i = 0; i < s.length(); i++)
	{

		switch (s[i])
		{
		case 'c':
			if (s[i + 1] == '=' || s[i + 1] == '-')
			{
				i += 1;
				++count;
				break;
			}

			++count; // 해맨 포인트 : c가 들어오고 if를 빠져나오면 바로 다음 case구문에 다이렉트로 들어가버린다 
			break;
		case 'd':
			if (s[i + 1] == '-')
			{
				i += 1;
				++count;
				break;
			}
			else if (s[i + 1] == 'z' && s[i + 2] == '=')
			{
				i += 2;
				++count;
				break;
			}
			++count;
			break;


		case 'l':
			if (s[i + 1] == 'j')
			{
				i += 1;
				++count;
				break;
			}
			++count;
			break;
		case 'n':
			if (s[i + 1] == 'j')
			{
				i += 1;
				++count;
				break;
			}

			++count;	
			break;

		case 's':
			if (s[i + 1] == '=')
			{
				i += 1;
				++count;
				break;
			}
			++count;
			break;

		case 'z':
			if (s[i + 1] == '=')
			{
				i += 1;
				++count;
				break;
			}
			++count;
			break;

		case '-':	// 특수문자 예외처리는 안해도 정답으로 쳐준다..의외다
			break;

		case'=':
			break;

		default:	// 그외 알파벳

			count++;
			break;
		}

	}





	cout << count << endl;





	return 0;
}