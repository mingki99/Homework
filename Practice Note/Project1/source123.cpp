#include <iostream>

using namespace std;

void Infut();

bool GameState = true;

int main()
{
	int a;
	int b;
	while (GameState)
	{	
		cin >> a;
		if (!a)
		{
			GameState = false;
		}
		cin >> b;
		
		

		
		cout << a + b << endl;
	}

	

}
