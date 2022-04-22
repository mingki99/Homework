#include <iostream>
#include <string>
#include <ostream>

using namespace std;

int main()
{
	int count;

	cin >> count;

	if (0 >= count || 1000 < count) {return 0;}


	for (int i = 0; i < count; i++)
	{
		int gain;

		string s ;
		cin >> gain;
		cin >> s;
		// s.erase(remove(s.begin(), s.end(), ' '), s.end());
		

		// if(20 < s.length() || 0 >= s.length()) { return 0; }

		if (0 >= gain || 8 < gain) { return 0; }
		
		string output;

		for (int j = 0; j < s.size(); ++j)
		{
			for (int k = 0; k < gain; ++k)
			{
				if (s[j] == 32)
				{
					// break;
				}
				else
				{
					output.push_back(s[j]);
				}
			}
		}

		cout << output << endl;
	}



	return 0;
}