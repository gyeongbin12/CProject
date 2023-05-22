#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> // �⺻ ����� ��� ����	
#include <conio.h>
#include <Windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

#define WIDTH 11
#define HEIGHT 11

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

// �̷� �� ������
char maze[WIDTH][HEIGHT];

// �̷� �� ����
void CreateMaze()
{
	// 0 : �� ����
	// 1 : ��
	// 2 : Ż�ⱸ

	strcpy(maze[0], "1111111111");
	strcpy(maze[1], "1000110011");
	strcpy(maze[2], "1110111001");
	strcpy(maze[3], "1110001101");
	strcpy(maze[4], "1111101101");
	strcpy(maze[5], "1111101101");
	strcpy(maze[6], "1100000001");
	strcpy(maze[7], "1100111111");
	strcpy(maze[8], "1101111111");
	strcpy(maze[9], "1100000021");
	strcpy(maze[10],"1111111111");
}

void Renderer()
{
	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < HEIGHT; j++)
		{
			if (maze[i][j] == '0')
			{
				printf("  ");
			}
			else if (maze[i][j] == '1')
			{
				printf("��");
			}
			else if (maze[i][j] == '2')
			{
				printf("��");
			}
		}

		printf("\n");
	}
}

void Keyboard(char map[WIDTH][HEIGHT], Player * ptrPlayer)
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
			case UP:if (maze[ptrPlayer->y - 1][ptrPlayer->x / 2] != '1')
			{
			ptrPlayer->y--; 
			}
			break;
			case LEFT: if (maze[ptrPlayer->y][ptrPlayer->x / 2 - 1] != '1')
			{
			ptrPlayer->x -= 2;
			}
			break;
			case RIGHT:if (maze[ptrPlayer->y][ptrPlayer->x / 2 + 1] != '1')
			{
			ptrPlayer->x += 2;
			}
			break;
			case DOWN:if (maze[ptrPlayer->y+1][ptrPlayer->x / 2 ] != '1')
			{
			ptrPlayer->y++;
			}
			break;
		}
	}
}

int main()
{
	Player player = { 2, 6, "��" };

	CreateMaze();

	while (1)
	{
		Renderer();

		Keyboard(maze, &player);

		GotoXY(player.x, player.y);
		printf("%s", player.shape);

		Sleep(100);
		system("cls");
	}
	
	return 0;
}
