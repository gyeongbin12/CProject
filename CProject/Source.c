#include <stdio.h> // �⺻ ����� ��� ����
#include <math.h>

struct Player
{
	int hp;
	int attack;
	int x;
	int y;
};

struct Enemy
{
	int x;
	int y;
};

int main()
{
#pragma region ����ü ������
	//struct Player player;

	//struct Player * ptrPlayer = NULL;

	//ptrPlayer = &player;

	//(*ptrPlayer).hp = 100;
	//(*ptrPlayer).attack = 12.5f;

	//printf("%d\n", (*ptrPlayer).hp);
	//printf("%f\n", (*ptrPlayer).attack);

	//ptrPlayer->hp = 250;
	//ptrPlayer->attack = 22.75f;

	//printf("%d\n", (*ptrPlayer).hp);
	//printf("%f\n", (*ptrPlayer).attack);
#pragma endregion

#pragma region �� �� ������ �Ÿ�

	//// ������ (sqrt)
	//printf("��Ʈ 49 : %lf\n", sqrt(49));

	//// �ŵ�����
	//printf("2�� 3�� : %lf\n", pow(2, 3));

	//struct Player player1;
	//struct Enemy enemy;

	//player1.x = 0;
	//player1.y = 0;

	//enemy.x = 5;
	//enemy.y = 7;
	//
	//float xDistance = player1.x - enemy.x;
	//float yDistance = player1.y - enemy.y;

	//float distance = sqrt(pow(xDistance, 2) + pow(yDistance, 2));

	//if (distance >= 5)
	//{
	//	printf("������ ���°� �ƴմϴ�");
	//}

	//printf("%f", distance);

#pragma endregion

#pragma region �Ǽ��� �����ϴ� ���

	// �ε� �Ҽ���
	// �Ҽ����� ��ġ�� �������� �ʰ� �Ҽ����� ��ġ��
	// ��Ÿ���� ����Դϴ�.

	// ���� �Ҽ���
	// �Ҽ����� ��ġ�� �����Ͽ� �Ҽ����� ��ġ�� ��Ÿ���� ����Դϴ�.

	// 12.375
	
	// float 4(Byte)
	//float fData = 1.11f;
	//printf("fData�� �� : %.15f\n", fData);

	//// double 8(Byte)
	//double dData = 1.3f;
	//printf("dData�� �� : %.10lf\n", dData);

	//if (fData == 1.3f)
	//{
	//	printf("fData�� ���� 1.3f�� ����.");
	//}
	//else
	//{
	//	printf("fData�� ���� 1.3�� ���� ���� �ʴ�.");
	//}

#pragma endregion




	return 0;
}
