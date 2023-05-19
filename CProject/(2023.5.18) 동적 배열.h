#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> // 기본 입출력 헤더 파일	
#include <conio.h>
#include <Windows.h>

#define SIZE 50

int main()
{
#pragma region 동적 배열
	// HEAP이라는 메모리 공간을 이용하여
	// 배열의 크기를 컴파일 단계가 아닌 실행 시간에
	// 가변적으로 바꿀 수 있는 배열입니다.

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
	// 	printf("arrayPtr[%d]의 값 : %d\n", i, arrayPtr[i]);
	// }
	// 
	// free(arrayPtr);

#pragma endregion

#pragma region  fflush() 함수

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
	// printf("a 변수의 값 : %c\n", a);
	// printf("b 변수의 값 : %c\n", b);
	// printf("c 변수의 값 : %c\n", c);
#pragma endregion

<<<<<<< HEAD:CProject/(2023.5.18) 동적 배열.h
#pragma region ���ڿ� ������

=======
#pragma region 문자열 뒤집기
	
>>>>>>> 01aa999a10e277773b624ae3d976fa1f636f15ad:CProject/Source.c
	char string[SIZE] = { 0, };

	scanf_s("%s", string, SIZE);

	for (int i = strlen(string) - 1; i >= 0; i--)
	{
		printf("%c", string[i]);
	}

<<<<<<< HEAD:CProject/(2023.5.18) 동적 배열.h





=======
>>>>>>> 01aa999a10e277773b624ae3d976fa1f636f15ad:CProject/Source.c
#pragma endregion



	return 0;
}
