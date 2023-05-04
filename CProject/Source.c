#include <stdio.h> // 기본 입출력 헤더 파일
#include <math.h>

struct Player
{
	int hp;
	int attack;
	int x;
	int y;
};

struct Enemy
{
	int x;
	int y;
};

int main()
{
#pragma region 구조체 포인터
	//struct Player player;

	//struct Player * ptrPlayer = NULL;

	//ptrPlayer = &player;

	//(*ptrPlayer).hp = 100;
	//(*ptrPlayer).attack = 12.5f;

	//printf("%d\n", (*ptrPlayer).hp);
	//printf("%f\n", (*ptrPlayer).attack);

	//ptrPlayer->hp = 250;
	//ptrPlayer->attack = 22.75f;

	//printf("%d\n", (*ptrPlayer).hp);
	//printf("%f\n", (*ptrPlayer).attack);
#pragma endregion

#pragma region 두 점 사이의 거리

	//// 제곱근 (sqrt)
	//printf("루트 49 : %lf\n", sqrt(49));

	//// 거듭제곱
	//printf("2의 3승 : %lf\n", pow(2, 3));

	//struct Player player1;
	//struct Enemy enemy;

	//player1.x = 0;
	//player1.y = 0;

	//enemy.x = 5;
	//enemy.y = 7;
	//
	//float xDistance = player1.x - enemy.x;
	//float yDistance = player1.y - enemy.y;

	//float distance = sqrt(pow(xDistance, 2) + pow(yDistance, 2));

	//if (distance >= 5)
	//{
	//	printf("위험한 상태가 아닙니다");
	//}

	//printf("%f", distance);

#pragma endregion

#pragma region 실수를 저장하는 방법

	// 부동 소수점
	// 소수점의 위치를 고정하지 않고 소수점의 위치를
	// 나타내는 방법입니다.

	// 고정 소수점
	// 소수점의 위치를 고정하여 소수점의 위치를 나타내는 방법입니다.

	// 12.375
	
	// float 4(Byte)
	//float fData = 1.11f;
	//printf("fData의 값 : %.15f\n", fData);

	//// double 8(Byte)
	//double dData = 1.3f;
	//printf("dData의 값 : %.10lf\n", dData);

	//if (fData == 1.3f)
	//{
	//	printf("fData의 값과 1.3f의 값다.");
	//}
	//else
	//{
	//	printf("fData의 값과 1.3의 값이 같지 않다.");
	//}

#pragma endregion




	return 0;
}
