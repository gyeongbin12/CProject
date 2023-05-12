#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> // �⺻ ����� ��� ����
#include <stdarg.h>

void Array(int array[], int size)
{
	// call by reference
	for (int i = 0; i < size; i++)
	{
		array[i] = 100 * i;

		//
		//
	}
}

void ChangeString(char str[])
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		printf("%c", str[i] - 32);
	}
}

void Information(int size, ...)
{
	// va_list
	// �� ���� ������ ���� �ּҸ� ����Ű�� �������Դϴ�.
	va_list argPtr;

	// va_start
	// va-list�� ������� �����Ϳ��� �������� �� ù ��°
	// ������ �ּҸ� �������ִ� ��ũ���Դϴ�.
	va_start(argPtr, size);

	int result = 0;

	for (int i = 0; i < size; i++)
	{
		// va_arg
		// Ư�� �������ڸ� ����Ű�� �ִ� va_list�� �����͸�
		// ���� �������ڷ� �̵����� �ִ� ��ũ���Դϴ�.
		result += va_arg(argPtr, int);
	}

	printf("result ������ �� : %d\n", result);

	// va_end
	// ����� �������� ������ ���� �� NULL�� �����ִ�
	// ��ũ���Դϴ�.
	va_end(argPtr);
}

int main()
{
#pragma region �Ű����� �迭

	//int dataList[5] = { 1, 2, 3, 4, 5 };

	//Array(dataList, 5);

	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d ", dataList[i]);
	//}

	char ptr[10];

	scanf("%s", ptr);

	ChangeString(ptr);

#pragma endregion

#pragma region �����μ�
	// �Ű������� ������ ���� ������ �������
	// �������� �μ��� ���� �� �ִ� �μ��Դϴ�.

	Information(2, 10, 20);
	Information(5, 1, 2, 3, 4, 5);



#pragma endregion


	return 0;
}
