#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> // �⺻ ����� ��� ����	
#include <conio.h>
#include <Windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

// ��ǥ �̵� �Լ�
void GotoXY(int x, int y)
{
	COORD position = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}


int main()
{
#pragma region ��ǥ �̵� �Լ�

	//	int x = 0;
	//	int y = 0;
	//	int key = 0;
	//	
	//	while(1)
	//	{
	//		GotoXY(x, y);
	//		printf("��");
	//	
	//		if (_kbhit()) // Ű���� �Է��� Ȯ���ϴ� �Լ�
	//		{
	//			key = _getch(); // ����Ű �Է½� 224 00�� ������ �ǹǷ� �տ� �ִ� �� 224�� �����մϴ�.
	//	
	//			if (key == -32)
	//			{
	//				key = _getch();
	//			}
	//	
	//			switch (key)
	//			{
	//			case UP: if (y > 0) y--;
	//				break;
	//			case LEFT: if(x > 0) x--;
	//				break;
	//			case RIGHT: x++;
	//				break;
	//			case DOWN: y++;
	//				break;
	//			}
	//	
	//			system("cls");
	//		}
	//	}

#pragma endregion

#pragma region ���ڿ� ���� �Լ�(strlen)
	// ���ڿ��� ũ�⸦ ��ȯ�ϴ� �Լ��Դϴ�.

	// ���� �������� �ִ� NULL ���ڸ� �������� �ʰ�
	// ���ڿ��� ũ�⸦ ����մϴ�.
	// const char * string = "Visual";

	//int size = strlen(string);

	// printf("size�� �� : %d", size);
#pragma endregion

#pragma region ȸ��
	// int flag = 1;
	// 
	// char * data = "LEVEL";
	// 
	// for (int i = 0; i < strlen(data) / 2; i++)
	// {
	// 	if (data[i] != data[strlen(data) - 1 - i])
	// 	{
	// 		flag = 0;
	// 		break;
	// 	}
	// }
	// 
	// if (flag == 1)
	// {
	// 	printf("ȸ��\n");
	// }
	// else
	// {
	// 	printf("ȸ���� �ƴմϴ�.\n");
	// }

#pragma endregion




	return 0;
}
