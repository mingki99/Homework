#include <iostream>

using namespace std;

/*

*      *
**    **
***  ***
********
*/

int main()
{
	
	for (int a = 1; a <= 4; a++)
	{
		for (int b = 0; b < a; b++)
		{
			cout << "*";
		}

		for (int c = 4; c > a; c--)
		{
			cout << " ";
		}
		for (int c = 4; c > a; c--)
		{
			cout << " ";
		}
		
		for (int b = 0; b < a; b++)
		{
			cout << "*";
		}

		cout << endl;





	}
	
	
	
}