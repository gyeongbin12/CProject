#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> // ê¸°ë³¸ ?…ì¶œ???¤ë” ?Œì¼	
#include <conio.h>
#include <Windows.h>

#define SIZE 50

int main()
{
#pragma region ?™ì  ë°°ì—´
	// HEAP?´ë¼??ë©”ëª¨ë¦?ê³µê°„???´ìš©?˜ì—¬
	// ë°°ì—´???¬ê¸°ë¥?ì»´íŒŒ???¨ê³„ê°€ ?„ë‹Œ ?¤í–‰ ?œê°„??
	// ê°€ë³€?ìœ¼ë¡?ë°”ê? ???ˆëŠ” ë°°ì—´?…ë‹ˆ??

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
	// 	printf("arrayPtr[%d]??ê°?: %d\n", i, arrayPtr[i]);
	// }
	// 
	// free(arrayPtr);

#pragma endregion

#pragma region  fflush() ?¨ìˆ˜

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
	// printf("a ë³€?˜ì˜ ê°?: %c\n", a);
	// printf("b ë³€?˜ì˜ ê°?: %c\n", b);
	// printf("c ë³€?˜ì˜ ê°?: %c\n", c);
#pragma endregion

<<<<<<< HEAD:CProject/(2023.5.18) ?™ì  ë°°ì—´.h
#pragma region ¹®ÀÚ¿­ µÚÁı±â

=======
#pragma region ë¬¸ì???¤ì§‘ê¸?
	
>>>>>>> 01aa999a10e277773b624ae3d976fa1f636f15ad:CProject/Source.c
	char string[SIZE] = { 0, };

	scanf_s("%s", string, SIZE);

	for (int i = strlen(string) - 1; i >= 0; i--)
	{
		printf("%c", string[i]);
	}

<<<<<<< HEAD:CProject/(2023.5.18) ?™ì  ë°°ì—´.h





=======
>>>>>>> 01aa999a10e277773b624ae3d976fa1f636f15ad:CProject/Source.c
#pragma endregion



	return 0;
}
