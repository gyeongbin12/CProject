#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> // �⺻ ����� ��� ����	
#include <conio.h>
#include <Windows.h>

#define SIZE 50

int main()
{
#pragma region ���� �迭
	// HEAP�̶�� �޸� ������ �̿��Ͽ�
	// �迭�� ũ�⸦ ������ �ܰ谡 �ƴ� ���� �ð���
	// ���������� �ٲ� �� �ִ� �迭�Դϴ�.

	// int size = 10;
	// 
	// scanf_s("%d", &size);
	// 
	// int* arrayPtr = (int *)malloc(sizeof(int) * size);
	// 
	// for (int i = 0; i < size; i++)
	// {
	// 	arrayPtr[i] = size * i;
	// }
	// 
	// for (int i = 0; i < size; i++)
	// {
	// 	printf("arrayPtr[%d]�� �� : %d\n", i, arrayPtr[i]);
	// }
	// 
	// free(arrayPtr);

#pragma endregion

#pragma region  fflush() �Լ�

	// char a, b, c;
	// 
	// scanf_s("%c", &a);
	// fflush(stdin);
	// 
	// scanf_s("%c", &b);
	// fflush(stdin);
	// 
	// scanf_s("%c", &c);
	// fflush(stdin);
	// 
	// printf("a ������ �� : %c\n", a);
	// printf("b ������ �� : %c\n", b);
	// printf("c ������ �� : %c\n", c);
#pragma endregion

#pragma region ���ڿ� ������
	
	char string[SIZE] = { 0, };

	scanf_s("%s", string, SIZE);
	
	for (int i = strlen(string) - 1; i >= 0; i--)
	{
		printf("%c", string[i]);
	}

	




#pragma endregion



	return 0;
}
