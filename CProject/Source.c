#include <stdio.h> // �⺻ ����� ��� ����

// enum ����
enum Color
{
	// �������� �ʱ갪�� ������ �� ������, �� ���� �������
	// 1�� �����մϴ�.
	BLACK,
	RED = 13,
	BLUE,
};

enum State
{
	IDLE,
	ATTACK,
	DIE
};

int main()
{
#pragma region (2)���� �迭
	// �迭�� ��ҷ� �� �ٸ� �迭�� ������ �迭�Դϴ�.

	// 2���� �迭�� ��� ���� ���еǸ� �տ� �ִ�
	// �迭�� ���� �ǹ��ϰ�, �ڿ� �ִ� �迭�� ���� �ǹ��մϴ�.
	//int array2D[4][3] =
	//{
	//	{ 10, 20, 30},
	//	{ 40, 50, 60},
	//	{ 70, 80, 90},
	//	{ 100, 110, 120},
	//};

	//printf("array2D�� �ּ� : %p\n", array2D);
	//printf("array2D[0][0]�� �ּ�: %p\n", &array2D[0][0]);

	//int * ptr = NULL;

	//// �迭 ������
	//// Ư�� �������� �迭'��' ����ų �� �ִ� �ϳ��� �������Դϴ�.
	//int (* arrayPtr)[3];

	//arrayPtr = array2D;
	//arrayPtr = arrayPtr + 1;

	//printf("arrayPtr�� ����Ű�� �� : %d", (*arrayPtr)[0]);
#pragma endregion

#pragma region ������(enum)
	// ���, ����� �Ҹ��� ���� ���� ������
	// �̷�� �ڷ����Դϴ�.

	//enum Color color;

	//color = BLACK;
	//printf("color�� �� : %d\n", color);

	//color = RED;
	//printf("color�� �� : %d\n", color);
	
	enum State state; 

	int select = 0;

	printf("�÷��̾��� ���¸� �������ּ���. : ");
	scanf_s("%d", &select);

	state = select;

	switch(state)
	{
		case IDLE : printf("��� ����");
			break;
		case ATTACK : printf("���� ����");
			break;
		case DIE : printf("���� ����");
			break;
	}

#pragma endregion


	return 0;
}
