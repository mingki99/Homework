//�������� ��ȯ
/*
1. Ư�� ���������� ������ �ٸ� ���������� ���� �������� ��
2. ���Ŀ� ���������� ȥ���Ͽ� ������� ��
3. �Լ��� �Ű������� ������ ��
*/

#include <iostream>

using namespace std;

int main()
{
	int a = 3.141592;
	cout << a << endl; // 3���� ��� int = �������� ���

	//���������� �������� ��ȯ
	//TyoeName(a) , (TypeName)a

	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl; 
	//�������� ���������� 2���� ������� �ں�ȯ��
	//���� 77 , 77

	cout << static_cast<int>(ch) << endl;
	//���� �� �ΰ��� ��İ����� 77
	//static_cast<int>(typeName) = C++ �������� ������ ��ȯ ������
	
	/* �ڵ����� ��ȯ ��� �� 3������
	* 1. typeName(a)
	* 2. (typeName)a
	* 3. static_cast<int>(typeName)
	*/
	

	return 0;
}




