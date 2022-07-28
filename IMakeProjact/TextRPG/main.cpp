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

	// 게임을 시작할때 플레이어 정보를 설정하게 한다.
	_tagPlayer tPlayer = {};

	// 플레이어 이름을 입력받는다.
	cout << " 이름 : ";
	cin.getline(tPlayer.strName, NAME_SIZE - 1);

	int iJob = JOB_NONE;
	while (iJob == JOB_NONE)
	{
		system("cls");
		cout << " 1. 기사" << endl;
		cout << " 2. 궁수 " << endl;
		cout << " 3. 마법사" << endl;
		cout << "직업을 선택하세요 : ";
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

	// 플레이어 디폴트 세팅
	tPlayer.ILevel = 1;
	tPlayer.iExp = 0;
	tPlayer.eJob = (JOB)iJob;
	tPlayer.tInventory.iGold = 10000;


	// 플레이어 값 세팅
	switch (tPlayer.eJob)
	{
	case JOB_KNIGHT:
		strcpy_s(tPlayer.strJobName, "기사");
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
		strcpy_s(tPlayer.strJobName, "궁수");
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
		strcpy_s(tPlayer.strJobName, "마법사");
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

	// 몬스타 생성
	_tagMontster tMonsterArr[MT_BACK - 1] = {};

	// 고블린 생성
	strcpy_s(tMonsterArr[0].strName, "고블린");
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

	// 트롤 생성
	strcpy_s(tMonsterArr[1].strName, "트롤");
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

	// 드래곤 생성
	strcpy_s(tMonsterArr[2].strName, "드래곤");
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

	// 상점에서 판매할 아이템 목록 생성
	_tagItem tStoreWEapon[STORE_WEAPON_MAX]  = {};


	while (true)
	{
		system("cls");
		cout << " 1. 맵 " << endl;
		cout << " 2. 상점 " << endl;
		cout << " 3. 가방" << endl;
		cout << " 4. 종료" << endl;
		cout << "메뉴를 선택하세요 : ";

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
				cout << "--------------------- 맵 -------------------" << endl;
				cout << " 1. 쉬움 " << endl;
				cout << " 2. 보통 " << endl;
				cout << " 3. 어려움" << endl;
				cout << " 4. 뒤로가기" << endl;
				cout << " 맵을 선택하세요 : " << endl;
				cin >> iMenu;

				if (cin.fail())
				{
					cin.clear();
					cin.ignore(1024, '\n');
					continue;
				}
				// 이 if문은 map while문을 빠져나간다.
				if (iMenu == MT_BACK)
					break;

				// 선택한 메뉴에서 1을 빼주면 몬스터 배열의 현 인덱스가 된다
				// 그렇게 하여 해당 몬스터를 생성한다.

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



					// 플레이어 정보 출력
					cout << " 이름 : " << tPlayer.strName << "\t 직업 : " <<
						tPlayer.strJobName << endl;
					cout << "레벨 : " << tPlayer.ILevel << "\t\t 경험치 : " <<
						tPlayer.iExp << endl;

					cout << "공격력 : " << tPlayer.iAttackMin << " - " <<
						tPlayer.iAttackMax << " \t방어력 : " << tPlayer.iArmorMin <<
						" - " << tPlayer.iArmorMax << endl;

					cout << "체력 : " << tPlayer.iHP << " / " << tPlayer.iHPMax <<
						" \t 마나 : " << tPlayer.iMP << " / " << tPlayer.iMpMax << endl;

					cout <<  "소지금 : " << tPlayer.tInventory.iGold << endl;


					// 몬스터 정보 출력
					cout << "===================== monster ======================" << endl;
					cout << " 이름 : " << tMonster.strName << endl;

					cout << " 레벨 : " << tMonster.iLevel << "\t 경험치 : " <<
						tPlayer.iExp << endl;

					cout << "공격력 : " << tMonster.iAttackMin << " - " <<
						tMonster.iAttackMax << " \t방어력 : " << tMonster.iArmorMin <<
						" - " << tMonster.iArmorMax << endl;

					cout << "체력 : " << tMonster.iHP << " / " << tMonster.iHPMax << endl;

					cout << "획득 경험치 : " << tMonster.iExp << "\t 획득골드 : " <<
						tMonster.iGoldMin << " - " << tMonster.iGoldMax << endl << endl;

					cout << " 1. 공격" << endl;
					cout << " 2. 도망가기 " << endl;
					cout << "메뉴를 선택하세요 : ";
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
						// min = 5, max 15 가정
						// 15 - 5 +1 하면 11
						// 11로 나눈 나머지 0 ~ 10이나오게 되며 여기에 min값인 5를 더한다
						// 5 ~ 15로 값이 나오게된다.
						int iAttack = rand() % (tPlayer.iAttackMax - tPlayer.iAttackMin + 1) + tPlayer.iAttackMin;
						int iArmor = rand() % (tMonster.iArmorMax - tMonster.iArmorMin + 1) + tMonster.iArmorMin;

						int iDamage = iAttack - iArmor;
						// 삼항연산자 : 조건식 ? true일때값 : false일때값;
						iDamage = iDamage < 1 ? 1 : iDamage; // 최소대미지 1로 고정1

						// 몬스터 HP감소
						tMonster.iHP -= iDamage;

						cout << tPlayer.strName << " 가 " << tMonster.strName << " 에게 " << iDamage << "피해를 입혔습니다." << endl;

						// 몬스터 죽었을 경우
						if (tMonster.iHP <= 0)
						{
							system("cls");
							cout << tMonster.strName << " 몬스터가 사망하였습니다" << endl;

							tPlayer.iExp += tMonster.iExp;
							int iGold = rand() % (tMonster.iGoldMax - tMonster.iGoldMin + 1) + tMonster.iGoldMin;
							tPlayer.tInventory.iGold += iGold;

							cout << tMonster.iExp << " 경험치를 획득 하엿습니다 " << endl;
							cout << iGold << " Gold를 획득하였습니다. " << endl;

							tMonster.iHP = tMonster.iHPMax;

							system("pause");
							break;
						}
						

						iAttack = rand() % (tMonster.iAttackMax - tMonster.iAttackMin + 1) + tMonster.iAttackMin;
						iArmor = rand() % (tPlayer.iArmorMax - tPlayer.iArmorMin + 1) + tPlayer.iArmorMin;

						iDamage = iAttack - iArmor;
						// 삼항연산자 : 조건식 ? true일때값 : false일때값;
						iDamage = iDamage < 1 ? 1 : iDamage; // 최소대미지 1로 고정

						// 플레이어의 HP를 감소시킨다
						tPlayer.iHP -= iDamage;

						cout << tMonster.strName << " 가 " << tPlayer.strName << " 에게 " << iDamage << "피해를 입혔습니다." << endl;

						if (tPlayer.iHP <= 0)
						{
							system("cls");
							cout << tPlayer.strName << " 플레이어가 사망하였습니다" << endl;

							int iExp = tPlayer.iExp * 0.1f;
							int iGold = tPlayer.tInventory.iGold * 0.1f;

							tPlayer.iExp -= iExp;
							tPlayer.tInventory.iGold -= iGold;

							cout << iExp << " 경험치를 잃었습니다 " << endl;
							cout << iGold << " Gold를 잃었습니다. " << endl;

							// 플레이어의 HP와 MP를 회복한다.
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
				cout << "--------------------- 상점 -------------------" << endl;
				cout << " 1. 무기상점 " << endl;
				cout << " 2. 방어구 상점 " << endl;
				cout << " 3. 뒤로가기" << endl;
				cout << " 상점을 선택하세요 : " << endl;
				cin >> iMenu;
				
				if (cin.fail())
				{
					cin.clear();
					cin.ignore(1024, '\n');
					continue;
				}
				// 이 if문은 map while문을 빠져나간다.
				if (iMenu == SM_BACK)
					break;

				switch (iMenu)
				{
				case SM_WEAPON:
					while (true)
					{
						system("cls");

						cout << "---------------------- 무기상점 ----------------------" << endl;

						//무기 상점
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
			cout << " 잘못 선탯 하였습니다." << endl;
			break;
		}

	}


	return 0;
}