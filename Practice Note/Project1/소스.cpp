#include <iostream>

//#define HUNGRY  1
//#define THIRSTY 2
//#define TIRED   4 //��Ʈ �ڸ� ���� �̱⿡ 4

#define HUNGRY  0x001
#define THIRSTY 0x002
#define TIRED   0x004
#define FIRE	0x008

#define COLD	0x010
#define POISON  0x020
#define POISON  0x040
#define POISON  0x080

#define POISON  0x100
#define POISON  0x200
#define POISON  0x400
#define POISON  0x800


// ���� ������


using namespace std;

int main()
{
	// �ڷ��� (ũ�����, Byte)
	// ������ : cahr(1), short(2), int(4), long(4), long ling(8)
	// �Ǽ��� : float(4), double(8)

	int i;

	//����� ǥ�� unsigned
	// 1 ����Ʈ�� ���, ���� �Ѵ� ǥ��.
	// 256 ���� -> 0~255
	unsigned char c = 0;
	c = 0;
	c = -1; // c= 255

	// 1 ����Ʈ�� ���, ���� ǥ��.
	// 256���� -128 ~ 0 ~ 127
	char c1 = 0;
	c1 = 255; // c = -1

	cout << c << endl;

	// ���� ���� ã�� (2�� ������)
	// �����Ǵ� ����� ��ȣ�� ���� ��, 1�� ���Ѵ�.
	int a = 4 + 4.0;

	// ����ǥ�� ��İ� �Ǽ� ǥ�� ����� �ٸ���
	// �Ǽ� ǥ������� ���е��� �����Ѵ�.
	// ���� doble(8) �ڷ����� float(4) ���� �� �Ʒ��� �Ҽ������� ��Ȯ�ϰ� ǥ���� �����ϴ�.

	// ������ ��������, �Ǽ��� �Ǽ����� �����ϵ�, �� ǥ������� �� �����ڰ� ����� ��� ��������� ��ȯ����

	float f = 10.2415f + (float)20;

	// �Ǽ��� ����� ���� ��� �Ҽ��� �ڿ� f �� ���̸� float �ڷ������� 0.1f
	// f �� ������ ������ double ������ ���Եȴ�. 0.1 


	// ������
	// ���Կ�����, =

	//��� ������
	// +, -, *, /, &(��ⷯ��, ������ �ǿ����ڰ� ��� ����)
	// ++. -- (���� ������)
	// �� '�ܰ�' ���� �Ǵ� ����

	int data = 10 + 10;
	//data = data + 20
	data += 20;

	data = (int)(10. / 3.);

	// ++, -- ���� '�ܰ�' �� �Ѿ��
	// �ǿ������� ���ؼ� '�ܰ�' �� ������ �޶�����.

	data = 0;
	++data; // ����(��ġ)
	data++; // ����(��ġ)
	// ���� �����ڷ� ����ϴ� ���, ������ �켱������ ���� �������� �и���.

	data = 0;

	a = 10;
	data = a++; // ���� �������� ����Ǵ�. data �� ���� 10 �̵ȴ�.


	data--;
	data--;

	// �� ������
	// !(��), &&(��), ||(��)
	// ��(ture), ����(false)
	// ��   : 0 �� �ƴ� ��, �ַ� 1
	// ���� : 0
	bool turefalse = false;

	true;
	false;

	bool IsTrue = 100;

	IsTrue = true;
	IsTrue = !IsTrue;

	int iTrue = 100;
	iTrue = !iTrue;

	iTrue = 0 && 200;
	iTrue = 1 || 0;

	// �� ������
	// ==, !=, <, <=, >,  >=


	// ����
	// if, else

	data = 0;
	if (0 && 200)
	{
		data = 100;
	}

	if (data == 100)
	{
		// if �� ���̸� ����
	}
	else
	{
		// if �� ������ ��� ����
	}


	switch (10)
	{
	case 10:
		break;

	case 20:
		break;

	default:
		break;
	}

	int iTest = 30;
	if (iTest == 10 || iTest == 20 || iTest == 30)

	// �������
	//	true
	//	1. iTest == 10 (F) || iTest == 20 (F)
	//	2. F || F || iTest == 30 (T)
	//	3. true!!
	{

	}
	else if (iTest == 20)
	{

	}
	else
	{

	}


	// switch, case

	// ���� ������
	// :?
	// �������� ���������ִ�.
	// Ư���� ���ٷ� �������Ҷ�? ���� �����������.

	iTest == 20 ? iTest = 100 : iTest = 200;

	if (iTest == 20)
	{
		iTest = 100;
	}
	else
	{
		iTest = 200;
	}


	// ��Ʈ ������
	// ����Ʈ << >>
	// ��Ʈ�� ���ڸ� �ö󰣴ٴ°��� 2�� (2�����ϱ�)

	unsigned char byte = 13;

	byte <<= 3; // 2^n ���
	byte >>= 1; // 2^n ���� ��

	// ��Ʈ ��(&), ��(|), xor(^), ����(~)
	// ��Ʈ������ ������ ����,
	// & �Ѵ� 1 �ΰ�� 1
	// | ���� �ϳ��� 1�̸� 1
	// ^ ������ 0, �ٸ��� 1


	int iStatus = 0;

	// ���� �߰�
	// ��Ʈ ������ �ڸ��� ���¸� �ִ´�.
	iStatus |= HUNGRY;  // 00000001 = 1 
	iStatus |= THIRSTY; // 00000010 = 2
	iStatus |= TIRED;   // 00000100 = 4

	// ���� Ȯ��
	if (iStatus & THIRSTY)
	{

	}

	// Ư�� �ڸ� ��Ʈ ����
	iStatus &= ~THIRSTY;



	return 0;
}

