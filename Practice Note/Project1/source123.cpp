
#include <iostream>
#include<time.h>

using namespace std;
//�ڵ���� ���������ϱ� ���ϴ�.
#define NAME_SIZE 32

/*
����ü : ������ �̸� �� �ο�����

����ü : �����ִ� �������� ��Ƽ� �ϳ��� ���ο� Ÿ���� ������ִ� ����̴�.
����� ���� ���� Ÿ���̴�.

���� : struct ����ü�� {};  �� ���·� �����ȴ�.

���� ����ü�� ������ 
1. ������ �����̴�
2. ���ӵ� �޸� ���� �Ҵ�ȴ�. ����ü ������� ���ӵ� �޸� 
������ ������ �ȴ�.

*/
struct _tagStudent
{
	char	strName[NAME_SIZE];
	int		iNumber;
	int		iKor;
	int		iEng;
	int		iMath;
	int		iTotal;
	float	fAvg
};

int main()
{
	_tagStudent tStudent = {};
	_tagStudent tStudentArr[100] = {};

	//����ü ����� �����Ҷ��� . �� �̿��ؼ� �����ϰ� �ȴ�.

	tStudent.iKor = 100;

	//tStudent.strName
	// ���ڿ��� �迭�� �־��ٶ����� �ܼ� �������δ� �Ұ����ϴ�.
	// strcpy_s ��� �Լ��� �̿� , ���ڿ��� �����ؾ��Ѵ�.

	strcpy_s(tStudent.strName, "�����ٶ� ASDF");

	cout << "�̸� : " << tStudent.

	return 0;
}




