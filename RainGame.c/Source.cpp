#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define LEFT 75
#define RIGHT 77

#define WIDTH 30
#define HEIGHT 30

typedef struct Player {
    int x;
    int y;
    const char* shape;
}Player;

typedef struct Object {
    int x;
    int y;
    char word;
}Object;

void GotoXY(int x, int y)
{
    COORD position = { x, y };

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int RandomX()
{
    srand(time(NULL));

    int random = rand() % 28;

    if (random % 2 == 1)
    {
        random += 1;
    }

    return random;
}

void Keyboard(Player* ptrPlayer) // 키보드 사용
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

int main()
{
    system("mode con cols=30 lines=30");

    Object object = { RandomX(),3,'A' };
    Player player = { 10, 28, "★" };
    
    int score = 0;

#pragma region 더미
    // char a[10] = { "ABCD" };
    // char b[10] = { "ABCD" };
    // 두 개의 문자열이 서로 같으면 0을 반환합니다.
    // 첫 번째 매개변수 문자열의 값이 크다면 1을 반환합니다.
    // 두 번째 매개변수 문자열의 값이 크다면 -1을 반환합니다.
    // int value = strcmp(a, b);

    // printf("value의 값 : %d", value);
    int life = 3;
    int maxscore = 0;

        // if (score > maxscore)
        // {
        //     maxscore = score;
        // }
    // printf("Maxscore : %d", maxscore); 
#pragma endregion

    while (1)
    {
        if (object.y>= 29)
        {
            object.y = 0;
            object.x = RandomX();
        }

        if (player.x == object.x && player.y == object.y)
        {
            break;
        }
        else
        {
            score++;
        }

        Keyboard(&player);

        GotoXY(player.x, player.y);
        printf("%s", player.shape);

        GotoXY(object.x, object.y++);
        printf("%c", object.word);

        Sleep(100);
        system("cls");


        printf("score : %d  ", score);
        
    }

    return 0;
}