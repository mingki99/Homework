
#include <iostream>
#include<time.h>

using namespace std;
int main()
{
	// ��� : ������ �ʴ� ��. ���� �ѹ� ������ ������ �ٲ� �� ����.
	// ����� ����� ���ÿ� ���� �����صξ�� �Ѵ�.

	const int	iAttack = 0x00000001;	//    1
	const int	iArmor = 0x00000002;	//   10
	const int	iHP = 0x00000004;		//  100
	const int	iMP = 0x00000008;		// 1000
	const int	iCritical = 0x00000010; //10000

	int iBuf = iAttack | iHP | iCritical;

	iBuf ^= iHP;

	iBuf ^= iHP;
	
	
	
	cout << "Attack : " << (iBuf & iAttack) << endl;

	cout << "Armor : " << (iBuf & iArmor) << endl;
	cout << "HP : " << (iBuf & iHP) << endl;
	cout << "MP : " << (iBuf & iMP) << endl;
	cout << "Armor : " << (iBuf & iCritical) << endl;


	int iHigh = 187;
	int iLow = 13560;

	int iNumber = iHigh;

	iNumber <<= 16;

	iNumber |= iLow;

	cout << "High : " << (iNumber >> 16) << endl;
	cout << "Low : " << (iNumber & 0x0000ffff) << endl;

	return 0;
}




