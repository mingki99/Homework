#include <iostream>

using namespace std;

class Test
{
public:
	Test()
	{
		printf("�⺻������ ȣ��\n");
	}
	Test(const Test& test)
	{
		printf("���� ������ ȣ��\n");
	}

	// ������ �ƴմϴ� [������] �Դϴ�~!
	Test& operator = (const Test& test)
	{
		printf("���� ���� ������ ����\n\n\n");
		return *this;
	}

	int GetClass() 
	{
		printf("GetClass �Լ� ���� \n"); 
		return this->_temp; 
	}

private:

int _temp;
};

int isTemp(Test* T)	// ������ �����!
{
	int temp = T->GetClass();
	return temp;
}


int main()
{
	Test t1;	// �⺻������ ȣ��

	Test t2(t1);	// ���� ������ ȣ��

	Test t3 = t1;	// �ں��� ������ ȣ���

	t3 = t1;	// ���� ���� ������ ȣ��

	int temp = isTemp(&t3);

	return 0;
}