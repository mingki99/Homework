#include <iostream>

using namespace std;

int main()
{ 
	int iIntger = 256;
	short sShort;
	long lLong;
	float fFloat;
	double dDouble;

	iIntger++;
	iIntger *= 2;
	sShort = static_cast<short>(iIntger);
	lLong = sShort * 10000;
	fFloat = lLong + 0.785f;
	dDouble = static_cast<double>(fFloat) / 10000;

	cout << dDouble << endl;
	
	return 0;
}

