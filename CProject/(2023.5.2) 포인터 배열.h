#pragma once
#include <stdio.h> // �⺻ ����� ��� ����

void main()
{
#pragma region ������ �迭

	//const char* string[3];

	//// 8 byte  8 byte  8 byte
	//
	//// 0 ��° Index [First�� ���� �ּ�]
	//
	//string[0] = "First";
	//string[1] = "Second";
	//string[2] = "Third";

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("string[%d]�� �� : %s\n", i, string[i]);
	//}

	int a = 10;
	int b = 20;
	int c = 30;

	int* ptr1 = &a;
	int* ptr2 = &b;
	int* ptr3 = &c;

	// ������ �迭 ����
	int* arrayPtr[] = { ptr1, ptr2, ptr3 };

	// printf("arrayPtr[0]�� �� : %p\n", arrayPtr[0]);
	// printf("arrayPtr[0]�� ����Ű�� �� : %d\n", *arrayPtr[0]);
#pragma endregion

#pragma region unsigned(��ȣ���� �ڷ���)
	// ��ȣ�� ���� �ڷ������� ��ȣ ��Ʈ�� ����.
	// �ڷḦ ������ �� �ִ� ������ ������ 2���
	// �þ�� �ڷ����Դϴ�.

	// char data = 128;
	// unsigned char uData = 128;

	// signed �ڷ����� �Ϲ��� ����ȯ�� ����� ��
	// �þ�� �޸� ���� 1(��ȣ ��Ʈ)�� ä�����ϴ�.
	// printf("data�� �� : %d\n", data);
	// printf("data�� �� : %u\n", data);


	// %u : unsigned int �� ���� ǥ���ϴ� ���� �������Դϴ�.

	// �� �� ��ȣ�� ���� ǥ���̹Ƿ� �Ϲ��� ����ȯ�� ����� ��
	// �þ�� �޸� ���� 0���� ä�����ϴ�.
	// printf("uData�� �� : %d\n", uData);
	// printf("uData�� �� : %u\n", uData);


#pragma endregion

#pragma region �����
	// �� ���� ������ ���� ����
	// ex) int x, y;
	// x�� y������ �Է��� ���� �����ϰ�
	// x�� y�� ����� ����� �����ּ���.

	int x = 0;
	int y = 0;

	scanf_s("%d %d", &x, &y);

	for (int i = 1; i <= x && i <= y; i++)
	{
		if (x % i == 0 && y % i == 0)
		{
			printf("����� : %d	", i);
		}
	}

#pragma endregion

	return;
}
