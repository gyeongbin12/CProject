#pragma once
#include <stdio.h> // �⺻ ����� ��� ����	
#include <conio.h>
#include <Windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

int main()
{
#pragma region _kbhit() �Լ�

	//char key = 0;

	//while (1)
	//{
	// 	if (_kbhit()) // Ű���� �Է��� Ȯ���ϴ� �Լ�
	// 	
	// 		key = _getch(); // ����Ű �Է½� 224 00�� ������ �ǹǷ� �տ� �ִ� �� 224�� �����մϴ�.
	// 
	// 		if (key == -32)
	// 		{
	// 			key = _getch();
	// 		}
	// 
	// 		switch (key)
	// 		{
	// 			case UP: printf("��\n");
	// 				break;
	// 			case LEFT: printf("��\n");
	// 				break;
	// 			case RIGHT: printf("��\n");
	// 				break;
	// 			case DOWN: printf("��\n");
	// 				break;
	// 			default: printf("�ٽ� �Է����ּ���.\n");
	// 				break;
	// 		}
	// 
	// 		printf("�ٸ� �۾� ��...\n");
	// }

#pragma endregion

#pragma region GetAsyncKeyState() �Լ�

	//	while (1)
	//	{
	//		if (GetAsyncKeyState(VK_UP))
	//		{
	//			// 1000 (1 ��) 
	//			Sleep(100);
	//			printf("��\n");
	//		}
	//		if (GetAsyncKeyState(VK_LEFT))
	//		{
	//			Sleep(100);
	//			printf("��\n");
	//		}
	//		if (GetAsyncKeyState(VK_RIGHT))
	//		{
	//			Sleep(100);
	//			printf("��\n");
	//		}
	//		if (GetAsyncKeyState(VK_DOWN))
	//		{
	//			Sleep(100);
	//			printf("��\n");
	//		}
	//	}
	//	
#pragma endregion


	return 0;
}
