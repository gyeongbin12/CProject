#pragma once
#include <stdio.h> // �⺻ ����� �������

void main()
{
#pragma region �����÷ο�
	// Ư���� �ڷ����� ǥ���� �� �ִ� �ִ��� ����
	// �Ѿ ������ �����ϴ� �����Դϴ�.

	// char 1 Byte (-128 ~ +127)
	// char data = 128;
	// printf("data�� �� : %d", data);
#pragma endregion

#pragma region ����÷ο�
	// Ư���� �ڷ����� ǥ���� �� �ִ� �ּڰ���
	// ������ �Ѿ ������ �����ϴ� �����Դϴ�.

	// char value = -129; // -128 ~ +127
	// printf("value�� �� : %d", value);
#pragma endregion

#pragma region ���迬����
	// �� ���� �ǿ������� ���� ���Ͽ�
	// �� ����� 0 �Ǵ� 1�̶�� ������ ��Ÿ���� �������Դϴ�.

	//int A = 5;
	//int B = 10;
	// 
	// A "<" B : B�� A���� Ŭ ��
	//printf("A < B : %d\n", A < B);
	// A ">" B : B�� A���� ���� ��
	//printf("A > B : %d\n", A > B);
	// A "<=" B : B�� A���� ũ�ų� ���� ��
	//printf("A <= B : %d\n", A <= B);
	// A ">=" B : B�� A���� �۰ų� ���� ��
	//printf("A >= B : %d\n", A >= B);
	// A "==" B : A�� B�� ���� ��
	//printf("A == B : %d\n", A = B);
	// A "!=" B : A�� B�� ���� ������
	//printf("A != B : %d\n", A != B);
#pragma endregion

#pragma region ���ǹ�(if ~ else if ~ else)
// if �� : � Ư���� ������ ���Ͽ� ������
// �´ٸ� ����Ǵ� ��ɹ��Դϴ�.

	// ���࿡~ (����)
	//if (15 == 15)
	//{
	//	// ������ "��" �̶�� { } ���ο� �ִ� ������ �����մϴ�.
	//	printf("15�� 15�� ����.\n");
	//}

	// else if �� : if���� ������ Ʋ�� �� else if���� ������
	// �´ٸ� ����Ǵ� ��ɹ��Դϴ�.

	//if (5 < 1)
	//{
	//	printf("if�� ����");
	//}
	//else if (5 == 5)
	//{
	//	printf("else if�� ����");
	//}
	//else if (10 == 10)
	//{
	//	// else if( ) ���� �� ������ �� �ֽ��ϴ�.
	//	printf("else if�� ����");
	//}

	// else �� : if���� else if���� ������ �� Ʋ���� ����Ǵ� ��ɹ��Դϴ�.

	//if ('A' == 'B')
	//{
	//	printf("if ��");
	//}
	//else if ('C' == 'D')
	//{
	//	printf("else if ��");
	//}
	//else
	//{
	//	printf("else ��");
	//}

#pragma endregion

#pragma region �� ������
	// && (AND)
	//if ('A' == 'A' && 'A' != 'A')
	//{
	//	printf("AND�� ������ �����մϴ�.");
	//}
	//
	// || (OR)
	//if ('A' == 'A' || 'A' == 'B')
	//{
	//	printf("OR�� ������ �����մϴ�.");
	//}
	// 
	// ! (NOT)
	//if (!'A')
	//{
	//	printf("NOT�� ������ �����մϴ�.");
	//}


#pragma endregion

#pragma region ��и�

	int x = -5;
	int y = 0;

	printf("x ��ġ : %d, y ��ġ : %d\n", x, y);

	if (x > 0 && y > 0)
	{
		printf("�� 1�и�");
	}
	else if (x < 0 && y > 0)
	{
		printf("�� 2�и�");
	}
	else if (x < 0 && y < 0)
	{
		printf("�� 3�и�");
	}
	else if (x > 0 && y < 0)
	{
		printf("�� 4�и�");
	}
	else if (x == 0 && y != 0)
	{
		printf("y ����");
	}
	else if (x != 0 && y == 0)
	{
		printf("x ����");
	}
	else if (x == 0 && y == 0)
	{
		printf("����");
	}



#pragma endregion



}