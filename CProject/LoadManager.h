#pragma once

#include <stdio.h>
#include <conio.h>
#include <Windows.h>

void ReadTextFile(const char* fileName)
{
	// ���� �б�
	FILE* readPtr = fopen(fileName, "r");

	char buffer[10000] = { 0, };

	fread(buffer, 1, 10000, readPtr);
	printf("%s", buffer);

	fclose(readPtr);
}
