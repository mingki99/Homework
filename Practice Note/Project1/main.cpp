#include <iostream>
#include <stdio.h>
#include "func.h"
#include "common.h"

int g_i = 0;


// ��������
static int g_iStatic = 0;

// �ܺκ���


int Test()
{
	static int i = 0;	// ���������� �ѹ� ������ �Ͽ����� �ѹ��� ���� ���� �������ʹ� ���� ���� �ʴ´�
						// �� i �� �ѹ��� 0 ���� set �ǰ� ���� �Լ��� ȣ��ɶ��� set �� �����ʴ´�.
	
	++g_i;
	++i;

	return i;
}

int main()
{
	g_iStatic = 100;
	g_iExtern = 500;

	Add(0, 0);

	Test();
	Test();
	Test();
	Test();
	Test();

	g_i = 0;
	printf("Test �Լ� ȣ�� Ƚ�� : %d\n", g_i);



	// ������ ����
	// �ּҸ� �����ϴ� ����
	// �ڷ��� + * ������
	// �ش� �����Ϳ��� ���޵� �ּҸ� �ؼ��ϴ� ����
	int i = 100;
	float F = 3.f;

	int* pInt = (int*)&F;

	// �ּҷ� ���� (����ǥ�� ���)
	// �̾ȿ� ����Ǿ��ִ� �ּҰ����� ���� �ϰڴٴ°��̴� (�ּҷ� ���°�)
	i = *pInt;
	
	// �ּ��� ���� (Byte)
	100;

	105;
	
	return 0;
}

