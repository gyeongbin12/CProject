#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> // 기본 ?�출???�더 ?�일	
#include <conio.h>
#include <Windows.h>

#define SIZE 50

int main()
{
#pragma region ?�적 배열
	// HEAP?�라??메모�?공간???�용?�여
	// 배열???�기�?컴파???�계가 ?�닌 ?�행 ?�간??
	// 가변?�으�?바�? ???�는 배열?�니??

	// int size = 10;
	// 
	// scanf_s("%d", &size);
	// 
	// int* arrayPtr = (int *)malloc(sizeof(int) * size);
	// 
	// for (int i = 0; i < size; i++)
	// {
	// 	arrayPtr[i] = size * i;
	// }
	// 
	// for (int i = 0; i < size; i++)
	// {
	// 	printf("arrayPtr[%d]??�?: %d\n", i, arrayPtr[i]);
	// }
	// 
	// free(arrayPtr);

#pragma endregion

#pragma region  fflush() ?�수

	// char a, b, c;
	// 
	// scanf_s("%c", &a);
	// fflush(stdin);
	// 
	// scanf_s("%c", &b);
	// fflush(stdin);
	// 
	// scanf_s("%c", &c);
	// fflush(stdin);
	// 
	// printf("a 변?�의 �?: %c\n", a);
	// printf("b 변?�의 �?: %c\n", b);
	// printf("c 변?�의 �?: %c\n", c);
#pragma endregion

<<<<<<< HEAD:CProject/(2023.5.18) ?�적 배열.h
#pragma region ���ڿ� ������

=======
#pragma region 문자???�집�?
	
>>>>>>> 01aa999a10e277773b624ae3d976fa1f636f15ad:CProject/Source.c
	char string[SIZE] = { 0, };

	scanf_s("%s", string, SIZE);

	for (int i = strlen(string) - 1; i >= 0; i--)
	{
		printf("%c", string[i]);
	}

<<<<<<< HEAD:CProject/(2023.5.18) ?�적 배열.h





=======
>>>>>>> 01aa999a10e277773b624ae3d976fa1f636f15ad:CProject/Source.c
#pragma endregion



	return 0;
}
