#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> // �⺻ ����� ��� ����

#pragma region  �ڱ� ���� ����ü
// �ڱ� �ڽ��� ����Ű�� �����Ͱ�
// ����ü�� ����� �� �ִ� ����ü�Դϴ�.

typedef struct Node
{
	int data;
	struct Node* next;
}Node;

#pragma endregion

int main()
{
#pragma region �ڱ� ���� ����ü

	/*Node node1 = { 100, NULL };
	Node node2 = { 200, NULL };
	Node node3 = { 300, NULL };

	printf("node1�� data �� : %d\n", node1.data);
	printf("node2�� data �� : %d\n", node2.data);
	printf("node3�� data �� : %d\n", node3.data);

	node1.next = &node2;
	node2.next = &node3;
	node3.next = NULL;

	node1.next->data = 999;

	Node* currentPtr = &node1;

	while (currentPtr != NULL)
	{
		printf("data�� �� : %d\n", currentPtr->data);

		currentPtr = currentPtr->next;
	}*/

#pragma endregion

#pragma region ���� ������
	//int data = 0;

	//	//  (����) ? (��) : (����)
	//data = 10 == 10 ? 100 : 445;

	//printf("data�� �� : %d\n", data);

#pragma endregion


	char string[10];

	scanf_s("%[^\n]s", string);

	printf("%string�� �� : %s", string);




	return 0;
}
