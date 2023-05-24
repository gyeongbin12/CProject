#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> // 기본 입출력 헤더 파일	
#include <conio.h>
#include <Windows.h>
#include <time.h>

#define LEFT 75
#define RIGHT 77

typedef struct Enemy
{
	int x;
	int y;
	const char* shape;
}Enemy;

typedef struct Player
{
	int x;
	int y;
	const char* shape;
}Player;

void GotoXY(int x, int y)
{
	COORD position = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

void Keyboard(Player* ptrPlayer)
{
	char key = 0;

	if (_kbhit())
	{
		key = _getch();

		if (key == -32)
		{
			key = _getch();
		}

		switch (key)
		{
		case LEFT: if (ptrPlayer->x <= 0) return;
			ptrPlayer->x -= 2;
			break;
		case RIGHT:if (ptrPlayer->x >= 28) return;
			ptrPlayer->x += 2;
			break;
		}
	}
}

int RandomX()
{
	srand(time(NULL));

	int random = rand() % 31;

	if (random % 2 == 1)
	{
		random += 1;
	}

	return random;
}

int main()
{
	system("mode con cols=30 lines=25");

	Player player = { 16, 23, "★" };
	Enemy enemy = { RandomX(), 0, "♨" };

	while (1)
	{
		Keyboard(&player);

		if (enemy.y >= 24)
		{
			enemy.y = 0;
			enemy.x = RandomX();
		}

		if (player.x == enemy.x && player.y == enemy.y)
		{
			printf("패 배");
			break;
		}

		GotoXY(enemy.x, enemy.y++);
		printf("%s", enemy.shape);

		GotoXY(player.x, player.y);
		printf("%s", player.shape);

		Sleep(100);

		system("cls");
	}


	return 0;
}
