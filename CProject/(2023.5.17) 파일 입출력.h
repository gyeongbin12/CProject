#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> // �⺻ ����� ��� ����	
#include <conio.h>
#include <Windows.h>

int main()
{
#pragma region ���� �����

	// fopen("������ �̸�.Ȯ����", ���� ���)
	// w : ����
	// r : �б�

	// �ؽ�Ʈ ������ ���� ���� �����ݴϴ�.
	// FILE* filePtr = fopen("DB.txt", "w");

	// fputs("ID\n", filePtr);
	// fputs("Password\n", filePtr);

	// ���� ������ �ݱ�
	// fclose(filePtr);

	int screen = 1;

	// screen = 1 FULL SCREEN MODE
	// screen = 2 WINDOW MODE
	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), screen, 0);

	// ���� �б�
	while (1)
	{
		FILE* readPtr = fopen("Monster.txt", "r");

		char buffer[10000] = { 0, };

		fread(buffer, 1, 10000, readPtr);
		printf("%s", buffer);

		fclose(readPtr);

		system("cls");

		if (GetAsyncKeyState(VK_SPACE))
		{
			exit(0);
		}

	}
#pragma endregion



	return 0;
}
