#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int StringLength(const char* string)
{
	int count = 0;

	for (int i = 0; string[i] != '\0'; i++)
	{
		count++;
	}

	return count++;
}

int main()
{
	// ���ڿ� ���� �Լ� (strlen)
	int value = StringLength("Video");

	char string[10];
	scanf_s("%s", string, 10);

	printf("%s\n", string);

	int v = strlen("da d");
	printf("value�� �� : %d\n", value);

	// ���ڿ� ���� �Լ� (strcpy)

	// ���ڿ� ���� �Լ� (strcat)
	// char content1[20] = { "Hello" };
	// char content2[10] = { "Update" };
	// 
	// strcat(content1, content2);
	// 
	// printf("%s", content1);



	return 0;
}
