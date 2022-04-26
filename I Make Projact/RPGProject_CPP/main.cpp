#include <iostream>

using namespace std;

#include "Game.h"
// ø¿¥√¿« ¡÷¡¶ : TextRPG #4



int main()
{
	
	srand((unsigned int)time(nullptr));

	Game gmae;
	gmae.Init();

	while (true)
	{
		gmae.Update();
	}
	
	return 0;
}