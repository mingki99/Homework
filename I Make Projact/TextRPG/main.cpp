#include <iostream>

using namespace std;

enum MAIN_MENU
{
	MM_NONE,
	MM_MAP,
	MM_STORE,
	MM_INVENTORY,
	MM_EXIT
};

enum MAP_TYPE
{
	MT_NONE,
	MT_EASY,
	MT_NORMAL,
	MT_HARD,
	MT_BACK
};

enum BATTLE
{
	BATTLE_NONE,
	BATTLE_ATTACK,
	BATTLE_BACK
};

enum JOB
{
	JOB_NONE,
	JOB_KNIGHT,
	JOB_ARCHER,
	JOB_WIZARD,
	JOB_END
};

enum ITEM_TYPE
{
	IT_NONE,
	IT_WEAPON,
	IT_ARMOR,
	IT_BACK
};

enum STORE_MENU
{
	SM_NONE,
	SM_WEAPON,
	SM_ARMOR,
	SM_BACK

};

#define NAME_SIZE 32
#define ITEM_DESC_LENGTH 512
#define IVENTORY_MAX 20
#define STORE_WEAPON_MAX 3
#define STORE_ARMOR_NAX 3

struct _tagItem
{
	char strName[NAME_SIZE];
	char strTypeName[NAME_SIZE];
	ITEM_TYPE eType;
	int iMin;
	int iMax;
	int iPrice;
	int iSell;
	char strDesc[ITEM_DESC_LENGTH];
};

struct _tagInventory
{
	_tagItem tItem[IVENTORY_MAX];
	int iITemCount;
	int iGold;
};



struct _tagPlayer
{
	char strName[NAME_SIZE];
	char strJobName[NAME_SIZE];
	JOB eJob;
	int iAttackMin;
	int iAttackMax;
	int iArmorMin;
	int iArmorMax;
	int iHP;
	int iHPMax;
	int iMP;
	int iMpMax;
	int iExp;
	int ILevel;

	_tagInventory tInventory;

};


struct  _tagMontster
{
	char strName[NAME_SIZE];
	int iAttackMin, iAttackMax;
	int iArmorMin, iArmorMax;
	int iHP, iHPMax;
	int iGoldMin, iGoldMax;

	int iLevel, iExp;
};

int main()
{
	srand((unsigned int)time(0));

	// ������ �����Ҷ� �÷��̾� ������ �����ϰ� �Ѵ�.
	_tagPlayer tPlayer = {};

	// �÷��̾� �̸��� �Է¹޴´�.
	cout << " �̸� : ";
	cin.getline(tPlayer.strName, NAME_SIZE - 1);

	int iJob = JOB_NONE;
	while (iJob == JOB_NONE)
	{
		system("cls");
		cout << " 1. ���" << endl;
		cout << " 2. �ü� " << endl;
		cout << " 3. ������" << endl;
		cout << "������ �����ϼ��� : ";
		cin >> iJob;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(1024, '\n');
			continue;
		}
		else if (iJob <= JOB_NONE || iJob >= JOB_END)
			iJob = JOB_NONE;

	}

	// �÷��̾� ����Ʈ ����
	tPlayer.ILevel = 1;
	tPlayer.iExp = 0;
	tPlayer.eJob = (JOB)iJob;
	tPlayer.tInventory.iGold = 10000;


	// �÷��̾� �� ����
	switch (tPlayer.eJob)
	{
	case JOB_KNIGHT:
		strcpy_s(tPlayer.strJobName, "���");
		tPlayer.iAttackMin = 10;
		tPlayer.iAttackMax = 20;
		tPlayer.iArmorMin = 15;
		tPlayer.iArmorMax = 20;
		tPlayer.iHP = 500;
		tPlayer.iHPMax = 500;
		tPlayer.iMP = 100;
		tPlayer.iMpMax = 100;
		break;
	case JOB_ARCHER:
		strcpy_s(tPlayer.strJobName, "�ü�");
		tPlayer.iAttackMin = 20;
		tPlayer.iAttackMax = 30;
		tPlayer.iArmorMin = 10;
		tPlayer.iArmorMax = 15;
		tPlayer.iHP = 400;
		tPlayer.iHPMax = 400;
		tPlayer.iMP = 200;
		tPlayer.iMpMax = 200;
		break;
	case JOB_WIZARD:
		strcpy_s(tPlayer.strJobName, "������");
		tPlayer.iAttackMin = 35;
		tPlayer.iAttackMax = 40;
		tPlayer.iArmorMin = 5;
		tPlayer.iArmorMax = 10;
		tPlayer.iHP = 300;
		tPlayer.iHPMax = 300;
		tPlayer.iMP = 300;
		tPlayer.iMpMax = 300;
		break;
	default:
		break;
	}

	// ��Ÿ ����
	_tagMontster tMonsterArr[MT_BACK - 1] = {};

	// ��� ����
	strcpy_s(tMonsterArr[0].strName, "���");
	tMonsterArr[0].iAttackMin = 20;
	tMonsterArr[0].iAttackMax = 30;
	tMonsterArr[0].iArmorMin = 2;
	tMonsterArr[0].iArmorMin = 5;
	tMonsterArr[0].iHP = 100;
	tMonsterArr[0].iHPMax = 100;
	tMonsterArr[0].iLevel = 1;
	tMonsterArr[0].iExp = 1000;
	tMonsterArr[0].iGoldMin = 500;
	tMonsterArr[0].iGoldMax = 1500;

	// Ʈ�� ����
	strcpy_s(tMonsterArr[1].strName, "Ʈ��");
	tMonsterArr[1].iAttackMin = 80;
	tMonsterArr[1].iAttackMax = 130;
	tMonsterArr[1].iArmorMin = 60;
	tMonsterArr[1].iArmorMin = 90;
	tMonsterArr[1].iHP = 2000;
	tMonsterArr[1].iHPMax = 2000;
	tMonsterArr[1].iLevel = 5;
	tMonsterArr[1].iExp = 7000;
	tMonsterArr[1].iGoldMin = 6000;
	tMonsterArr[1].iGoldMax = 8000;

	// �巡�� ����
	strcpy_s(tMonsterArr[2].strName, "�巡��");
	tMonsterArr[2].iAttackMin = 250;
	tMonsterArr[2].iAttackMax = 500;
	tMonsterArr[2].iArmorMin = 20;
	tMonsterArr[2].iArmorMin = 40;
	tMonsterArr[2].iHP = 30000;
	tMonsterArr[2].iHPMax = 30000;
	tMonsterArr[2].iLevel = 10;
	tMonsterArr[2].iExp = 30000;
	tMonsterArr[2].iGoldMin = 20000;
	tMonsterArr[2].iGoldMax = 50000;

	// �������� �Ǹ��� ������ ��� ����
	_tagItem tStoreWEapon[STORE_WEAPON_MAX]  = {};


	while (true)
	{
		system("cls");
		cout << " 1. �� " << endl;
		cout << " 2. ���� " << endl;
		cout << " 3. ����" << endl;
		cout << " 4. ����" << endl;
		cout << "�޴��� �����ϼ��� : ";

		int iMenu;
		cin >> iMenu;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(1024, '\n');
			continue;
		}
		if (iMenu == MM_EXIT)
			break;

		switch (iMenu)
		{
		case MM_MAP:

			while (true)
			{
				system("cls");
				cout << "--------------------- �� -------------------" << endl;
				cout << " 1. ���� " << endl;
				cout << " 2. ���� " << endl;
				cout << " 3. �����" << endl;
				cout << " 4. �ڷΰ���" << endl;
				cout << " ���� �����ϼ��� : " << endl;
				cin >> iMenu;

				if (cin.fail())
				{
					cin.clear();
					cin.ignore(1024, '\n');
					continue;
				}
				// �� if���� map while���� ����������.
				if (iMenu == MT_BACK)
					break;

				// ������ �޴����� 1�� ���ָ� ���� �迭�� �� �ε����� �ȴ�
				// �׷��� �Ͽ� �ش� ���͸� �����Ѵ�.

				_tagMontster tMonster = tMonsterArr[iMenu - 1];




				while (true)
				{
					switch (iMenu)
					{
					case MT_EASY:
						cout << "-------------- Easy Mode ----------------";
						break;
					case MT_NORMAL:
						cout << "-------------- Normal Mode ----------------";
						break;
					case MT_HARD:
						cout << "-------------- Hard Mode ----------------";
						break;
					default:
						break;
					}



					// �÷��̾� ���� ���
					cout << " �̸� : " << tPlayer.strName << "\t ���� : " <<
						tPlayer.strJobName << endl;
					cout << "���� : " << tPlayer.ILevel << "\t\t ����ġ : " <<
						tPlayer.iExp << endl;

					cout << "���ݷ� : " << tPlayer.iAttackMin << " - " <<
						tPlayer.iAttackMax << " \t���� : " << tPlayer.iArmorMin <<
						" - " << tPlayer.iArmorMax << endl;

					cout << "ü�� : " << tPlayer.iHP << " / " << tPlayer.iHPMax <<
						" \t ���� : " << tPlayer.iMP << " / " << tPlayer.iMpMax << endl;

					cout <<  "������ : " << tPlayer.tInventory.iGold << endl;


					// ���� ���� ���
					cout << "===================== monster ======================" << endl;
					cout << " �̸� : " << tMonster.strName << endl;

					cout << " ���� : " << tMonster.iLevel << "\t ����ġ : " <<
						tPlayer.iExp << endl;

					cout << "���ݷ� : " << tMonster.iAttackMin << " - " <<
						tMonster.iAttackMax << " \t���� : " << tMonster.iArmorMin <<
						" - " << tMonster.iArmorMax << endl;

					cout << "ü�� : " << tMonster.iHP << " / " << tMonster.iHPMax << endl;

					cout << "ȹ�� ����ġ : " << tMonster.iExp << "\t ȹ���� : " <<
						tMonster.iGoldMin << " - " << tMonster.iGoldMax << endl << endl;

					cout << " 1. ����" << endl;
					cout << " 2. �������� " << endl;
					cout << "�޴��� �����ϼ��� : ";
					cin >> iMenu;

					if (cin.fail())
					{
						cin.clear();
						cin.ignore(1024, '\n');
						continue;
					}
					else if (iMenu == BATTLE_BACK)
						break;


					switch (iMenu)
					{
					case BATTLE_ATTACK:
						// min = 5, max 15 ����
						// 15 - 5 +1 �ϸ� 11
						// 11�� ���� ������ 0 ~ 10�̳����� �Ǹ� ���⿡ min���� 5�� ���Ѵ�
						// 5 ~ 15�� ���� �����Եȴ�.
						int iAttack = rand() % (tPlayer.iAttackMax - tPlayer.iAttackMin + 1) + tPlayer.iAttackMin;
						int iArmor = rand() % (tMonster.iArmorMax - tMonster.iArmorMin + 1) + tMonster.iArmorMin;

						int iDamage = iAttack - iArmor;
						// ���׿����� : ���ǽ� ? true�϶��� : false�϶���;
						iDamage = iDamage < 1 ? 1 : iDamage; // �ּҴ���� 1�� ����1

						// ���� HP����
						tMonster.iHP -= iDamage;

						cout << tPlayer.strName << " �� " << tMonster.strName << " ���� " << iDamage << "���ظ� �������ϴ�." << endl;

						// ���� �׾��� ���
						if (tMonster.iHP <= 0)
						{
							system("cls");
							cout << tMonster.strName << " ���Ͱ� ����Ͽ����ϴ�" << endl;

							tPlayer.iExp += tMonster.iExp;
							int iGold = rand() % (tMonster.iGoldMax - tMonster.iGoldMin + 1) + tMonster.iGoldMin;
							tPlayer.tInventory.iGold += iGold;

							cout << tMonster.iExp << " ����ġ�� ȹ�� �Ͽ����ϴ� " << endl;
							cout << iGold << " Gold�� ȹ���Ͽ����ϴ�. " << endl;

							tMonster.iHP = tMonster.iHPMax;

							system("pause");
							break;
						}
						

						iAttack = rand() % (tMonster.iAttackMax - tMonster.iAttackMin + 1) + tMonster.iAttackMin;
						iArmor = rand() % (tPlayer.iArmorMax - tPlayer.iArmorMin + 1) + tPlayer.iArmorMin;

						iDamage = iAttack - iArmor;
						// ���׿����� : ���ǽ� ? true�϶��� : false�϶���;
						iDamage = iDamage < 1 ? 1 : iDamage; // �ּҴ���� 1�� ����

						// �÷��̾��� HP�� ���ҽ�Ų��
						tPlayer.iHP -= iDamage;

						cout << tMonster.strName << " �� " << tPlayer.strName << " ���� " << iDamage << "���ظ� �������ϴ�." << endl;

						if (tPlayer.iHP <= 0)
						{
							system("cls");
							cout << tPlayer.strName << " �÷��̾ ����Ͽ����ϴ�" << endl;

							int iExp = tPlayer.iExp * 0.1f;
							int iGold = tPlayer.tInventory.iGold * 0.1f;

							tPlayer.iExp -= iExp;
							tPlayer.tInventory.iGold -= iGold;

							cout << iExp << " ����ġ�� �Ҿ����ϴ� " << endl;
							cout << iGold << " Gold�� �Ҿ����ϴ�. " << endl;

							// �÷��̾��� HP�� MP�� ȸ���Ѵ�.
							tPlayer.iHP = tPlayer.iHPMax;
							tPlayer.iMP = tPlayer.iMpMax;

						}


						system("pause");
						system("cls");
						break;

					}


				}

			}

			break;
		case MM_STORE:
			while (true)
			{
				system("cls");
				cout << "--------------------- ���� -------------------" << endl;
				cout << " 1. ������� " << endl;
				cout << " 2. �� ���� " << endl;
				cout << " 3. �ڷΰ���" << endl;
				cout << " ������ �����ϼ��� : " << endl;
				cin >> iMenu;
				
				if (cin.fail())
				{
					cin.clear();
					cin.ignore(1024, '\n');
					continue;
				}
				// �� if���� map while���� ����������.
				if (iMenu == SM_BACK)
					break;

				switch (iMenu)
				{
				case SM_WEAPON:
					while (true)
					{
						system("cls");

						cout << "---------------------- ������� ----------------------" << endl;

						//���� ����
					}
					break;
				case SM_ARMOR:
					break;
				default:
					break;
				}
			}
			break;
		case MM_INVENTORY:
			break;

		default:
			cout << " �߸� ���� �Ͽ����ϴ�." << endl;
			break;
		}

	}


	return 0;
}