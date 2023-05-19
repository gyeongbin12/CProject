#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> // �⺻ ����� ��� ����	
#include <conio.h>
#include <Windows.h>

#pragma comment (lib, "winmm.lib")
#include <mmsystem.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

// HANDLE �ε����� �����ؼ� ���۸� ��ü��Ű�� ����
int screenIndex = 0;

// ������ ũ��
int width = 100;
int height = 60;

// ���� ����
HANDLE Screen[2];


typedef struct Player
{
	int x, y;
	const char* shape;
}Player;

// ���۸� �ʱ�ȭ�ϴ� �Լ�
void ScreenInit()
{
	CONSOLE_CURSOR_INFO cursor;

	// ������ ���� ������, ���� ������
	COORD size = { width, height };

	// Left, Top, Right, Bottom
	SMALL_RECT rect = { 0, 0, width - 1, height - 1 };

	// ȭ�� 2���� �����մϴ�.
	Screen[0] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);

	SetConsoleScreenBufferSize(Screen[0], size);

	SetConsoleWindowInfo(Screen[0], TRUE, &rect);


	// back buffer
	Screen[1] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);

	SetConsoleScreenBufferSize(Screen[0], size);

	SetConsoleWindowInfo(Screen[0], TRUE, &rect);

	// Ŀ���� Ȱ��ȭ ����
	// false : ����
	// true : ��
	cursor.bVisible = false;

	SetConsoleCursorInfo(Screen[0], &cursor);
	SetConsoleCursorInfo(Screen[1], &cursor);
}

// ���۸� ��ü�ϴ� �Լ�
void ScreenFlipping()
{
	// ���۴� �ϳ��� Ȱ��ȭ��ų �� �ֽ��ϴ�.
	SetConsoleActiveScreenBuffer(Screen[screenIndex]);

	screenIndex = !screenIndex;
}

// ��ü�� ���۸� �����ִ� �Լ�
void ScreenClear()
{
	COORD coord = { 0, 0 };

	DWORD dw;

	FillConsoleOutputCharacter
	(
		Screen[screenIndex],
		' ',
		width * height,
		coord,
		&dw
	);
}

// ���۸� �����ϴ� �Լ�
void ScreenRelease()
{
	CloseHandle(Screen[0]);
	CloseHandle(Screen[1]);
}

// ���� ���۸��� �̿��ؼ� ����ϴ� �Լ�
void ScreenPrint(int x, int y, const char* string)
{
	COORD cursorPosition = { x,y };

	DWORD dw;

	SetConsoleCursorPosition(Screen[screenIndex], cursorPosition);

	WriteFile
	(
		Screen[screenIndex],
		string,
		strlen(string),
		&dw,
		NULL
	);
}

int main()
{
	// PlaySound(TEXT("Sound.wav"), NULL, SND_ASYNC); // �Ϲ����
	PlaySound(TEXT("Sound.wav"), NULL, SND_ASYNC | SND_LOOP); // �ݺ����

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
	Player player = { 5, 5,"��" };

	// 1. ���� �ʱ�ȭ
	ScreenInit();

	char key = 0;

	// ������ �����ϴ� �Լ�
	// 0 = ����
	// 1 = �Ķ�
	// 2 = �ʷ�
	// 3 = ����
	// 4 = ����
	// 5 = ����
	// 6 = ���
	// 7 = ���
	// 8 = ȸ��

	while (1)
	{
		if (_kbhit()) // Ű���� �Է��� Ȯ���ϴ� �Լ�
		{

			key = _getch(); // ����Ű �Է½� 224 00�� ������ �ǹǷ� �տ� �ִ� �� 224�� �����մϴ�.

			if (key == -32)
			{
				key = _getch();
			}

			switch (key)
			{
			case UP: if (player.y > 0) player.y--;
				break;
			case LEFT: if (player.x > 0) player.x--;
				break;
			case RIGHT: player.x++;
				break;
			case DOWN: player.y++;
				break;
			}

			system("cls");
		}

		ScreenPrint(player.x, player.y, player.shape);

		// 2. ���� ��ü
		ScreenFlipping();

		// 3. ��ü�� ������ ������ ����
		ScreenClear();
	}

	// ������ ����Ǿ��� �� ���۸� �����մϴ�.
	ScreenRelease();



	return 0;
}
