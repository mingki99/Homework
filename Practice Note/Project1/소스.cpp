#include <iostream>

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
}

