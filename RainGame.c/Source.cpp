#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <conio.h>	

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

typedef struct Player {
	int x;
	int y;
	const char* shape;
}Player;

typedef struct Object{
	int y;
	char word; 
}Object;

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
		case RIGHT:if (ptrPlayer->x >= 20) return;
			ptrPlayer->x += 2;
			break;
		}
	}
}

int main()
{
	Object object = {0,'A'};
	Player player = { 10, 15, "★" };
	
	// char a[10] = { "ABCD" };
	// char b[10] = { "ABCD" };
	// 두 개의 문자열이 서로 같으면 0을 반환합니다.
	// 첫 번째 매개변수 문자열의 값이 크다면 1을 반환합니다.
	// 두 번째 매개변수 문자열의 값이 크다면 -1을 반환합니다.
	// int value = strcmp(a, b);
	// printf("value의 값 : %d", value);
	
	while (1)
	{
		Keyboard(&player);

		GotoXY(object.y, object.word);

		GotoXY(player.x, player.y);
		printf("%s", player.shape);


	}

	return 0;
}