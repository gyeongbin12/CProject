#pragma once
#include <stdio.h> // �⺻ ����� �������

void main() // <- void main �ϳ��� �����ؾ� �մϴ�. (���α׷��� ������) 
{
#pragma region ����
	// �����͸� ������ �� �ָ� ������ �����ϴ�
	// �� �Դϴ�.

	// �ڷ����̶�?
	// �����͸� �����ϱ� ���� �������� ���¸�
	// �����ִ� ���Դϴ�.

	// �ڷ��� ������ �̸�
	// ;(�����ݷ�) : �� ������ ���� �˷��ִ� ��ȣ�Դϴ�.

	// char 1 byte �ѹ��� ���� �ڷ���
	// short 2 byte ���� ���� �ڷ���
	// int, long 4 byte ���� ���� �ڷ���
	// float 4 byte �Ǽ� ���� �ڷ���
	// double 8 byte
	// long double 8 ~ 16 byte

	char alphabet = 'A'; // <- ����� ȭ��ǥ�� ���� �ִٸ� (����� ���� ���)
	int data = 100;
	float pi = 3.14;

#pragma endregion

	// ������ �̸� ��Ģ
	/*
	// 1. ���� ����� �� �����ϴ�.
	// ex) int int = 100;

	// 2.���ڸ� �����̸����� ����� �� ������
	//	 ù��° �ܾ�� ����� �� �����ϴ�.
	// ex) int hp1 = 300; (O)
	// ex) int 1hp = 200; (X)

	// 3.������ �̸��� ��ҹ��ڸ� �����մϴ�.
	// ex) int attack = 26;
	// ex) int ATTACK = 16;

	// 4.������ �̸��� ������ ���Ե� �� �����ϴ�.
	// ex) int count Down = 3;

	// 5.���̸����� Ư�� ��ȣ�� "$", "_"�� �����մϴ�.
	// ex) int count_Down = 5;
	// ex) int mo$ney = 999;
	*/

#pragma region ������ �ʱ�ȭ
	// ���ʷ� ������ ���� �������ִ� �����Դϴ�.
	int exp = 100; // ������ ����
	exp = 999;
#pragma endregion

#pragma region ���
	// ���α׷��� ����Ǵ� ���� �� �̻� ���� ������ �� ���� �޸� �����Դϴ�.
	// ���ͷ� ��
	// const float pi = 3.141592;
	// L-value�� R-value

	// pi = 6.4571; ����� ����Ǿ��� ������ ���� ������ �� �����ϴ�.

	// �ɺ��� ��� : �޸� ������ ������ �ִ� ���
	// ���ͷ� ��� : �޸� ������ ������ ���� ���� ���
#pragma endregion

#pragma region ��� ������
	int result = 10 + 25;

	// 1. num1 ���� = B ���� + C ����
	// 2. num2 ���� = E ���� - F (�ɺ���)���
	// 3. num3 ���� = ���ͷ� ��� * B ���
	// 4. num4 ���� = ���ͷ� ��� / (�ɺ���)���
	// 5. num5 ���� = ���ͷ� ��� + ���ͷ� ���

	int num1;
	int num2;
	int num3;
	int num4;
	int num5;

	int B = 5;
	int C = 6;
	int E = 7;
	const int F = 2;

	num1 = B + C;
	printf("�� : %d\n", num1);

	num2 = E - F;
	printf("�� : %d\n", num2);

	num3 = 5 * B;
	printf("�� : %d\n", num3);

	num4 = 30 / F;
	printf("�� : %d\n", num4);

	num5 = 5 + 5;
	printf("�� : %d", num5);

#pragma endregion
}