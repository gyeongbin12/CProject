#pragma once
#include <stdio.h> // �⺻ ����� ��� ����
#include <limits.h>
// #include ���� ó�� ��ó����
// �ý��� �����̳� ����� ���� ������ ���α׷� �ҽ���
// �����Ͽ� ����ϱ� ���� �����Դϴ�.

// ��ó�����?
// ���α۸��� �Ǳ� ������ ���α׷��� ����
// ���� ó���ϴ� �����Դϴ�.

#pragma region ��ũ��
	// ���α׷� ������ Ư���� �����Ͱ� ���ڿ���
	// ���ǵǰ� ó���Ǵ� �����Դϴ�.

	// ��ũ�δ� �����Ϸ��� �ƴ� ����ó���⿡ ���ؼ�	
	// ó���Ǵ� �����̱� ������ ��ɹ� ���� ";"��
	// ������� �ʽ��ϴ�.
#define SIZE 5

	// ��ũ�δ� �޸� ������ ������ ���� �ʽ��ϴ�.

#pragma endregion


void main()
{
#pragma region ���ڿ�
	// �������� �޸� ������ �����
	// ���� ������ �����Դϴ�.

	// ���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� ���
	// ����Ű���� ������ �� �ֽ��ϴ�.
	// const char * name = "June";

	// %s : ���ڿ��� ����ϴ� ����
	// printf("name ������ �� : %p\n", name);
	// printf("name ������ ����Ű�� �� : %s\n", name);

	// ���ڿ� ����� ������ ������ �б� ���� ������
	// ����Ǳ� ������ ���ڿ��� ���� ������ �� �����ϴ�.
	// *name = 'G';

	// name = "Tom";

	// ���ڿ��� �� �������� ��ȿ�� ����(NULL)�� �ڵ�����
	// ���Ե˴ϴ�.

	// NULL ������ ������ ���ڿ��� ���� �˷��ִ� ���Դϴ�.
	// printf("name ������ �� : %p\n", name);
	// printf("name ������ ����Ű�� �� : %s\n", name);

	// �迭�� �̿��� ���ڿ�
	// char string[] = { " Game" };

	// ���ڿ��� ���鵵 �Բ� �޸� ������ ���Ե˴ϴ�.
	// char string1[] = { "App l\0e" };

	// ���� �迭 ���̿� ��ȿ�� ���ڸ� �ְ� �Ǹ�
	// ��ȿ�� ���ڱ����� ���ڿ��� ����մϴ�.
	// printf("string�� �� : %s\n", string);
	// printf("stirng1�� �� : %s\n", string1);

	// string[1] = 'b';
	// string[3] = 'o';

	// printf("string�� �� : %s\n", string);

	// char �迭�� ������ ����Դϴ�.
	// string = "Content";
	// string = string1;

#pragma endregion

	// ��ũ��
	// printf("��ũ�� SIZE�� �� : %d", SIZE);

#pragma region �ִ񰪰� �ּڰ�
	// �迭[5] = { 10, 5, 6, 99, 1};

#define ARRAYSIZE 5

	int max = 0;
	int min = INT_MAX;

	int array[ARRAYSIZE] = { 10, 5, 6, 99, 1 };

	for (int i = 0; i < ARRAYSIZE; i++)
	{
		if (max < array[i])
		{
			max = array[i];
		}
		if (min > array[i])
		{
			min = array[i];
		}
	}
	printf("min : %d\n", min);
	printf("max : %d\n", max);

#pragma endregion




}
