#pragma once
#include <stdio.h>

void main()
{
	// ���ڿ�
	/*
	// �������� �޸� ������ ����� ���� ������ ����

	// char 1 byte �̹Ƿ� �ϳ��� ���ڸ� ���尡��
	char alphabet = 'a';

	char string[6] = { 'A','B','C','D','E' };

	string[0] = 'T';
	// ���� �迭�� ������ �� �� �������� NULL[ ex) /0 ]�� ���Եȴ�
	// ���� �迭���� ��쿡�� �迭�� ũ��	n + 1�� �����Ѵ�
	printf("string �迭�� �� : %s\n", string);

	// NULL���ڴ� ���ڿ��� ���� �˷��ִ� ���� ����
	string[2] = '\0';
	printf("string �迭�� �� : %s\n", string);

	// ���� �迭 �߰��� NULL���ڰ� ������ NULL���� ������ ���ڿ� ������ ���
	*/

	// ���ڿ� �ʱ�ȭ
	/*

	// �ڵ� ����
	// ������ ���� -> BSS, Read Only Data Segment,
	// ����
	// ��

	// "count"
	// [c][o][u[][n[t][/0] -> 5 char + null = 6 byte

	// 4 byte ������ �޸𸮸� ������ �� �ִ� ������ ����
	// char * ptr -> [c][o][u[][n[t][\0]
	const char* ptr = "count";

	// �����Ͱ� ������ ��� ����Ű�� �ִ��� Ȯ���ϱ� ����
	// �ű� �ִ� ���� ����ϱ� ���� %c�� ���
	// ptr[0] = "T";
	// *ptr�� �ϴ� ���� �����Ͱ� ����Ű�� �ִ� ��ġ�� �����ؼ� ���� ���

	printf("ptr�� ����Ű�� �ּ� : %p\n", ptr);
	printf("ptr�� ����Ű�� �� : %c\n", ptr[0]);
	printf("ptr�� ����Ű�� ���ڿ��� �� : %s\n", ptr);
	*/

	// ���� ������
	/*
	// [4 byte]
	int value = 100;

	// ptr(value �ּ�) -> value �ּҸ� ����Ų��
	int* ptr = &value;

	// twoPtr(���� ������)�� ptr�̶�� ������ ������ �ּҸ� ����
	// twoPtr(ptr�� �ּ�)-> ptr�� ���� �ּҸ� ����Ų��
	int** twoPtr = &ptr;

	printf("value�� ���� �ּ� : &p\n", &value);
	printf("ptr�� ����Ű�� �� : &p\n", ptr);
	printf("twoPtr�� ����Ű�� �� : &p\n", twoPtr);
	*/

	// �Ҽ� �Ǻ��ϱ�
	// �Ҽ� (1���� ū �ڿ��� �߿� 1�� �ڱ� �ڽŸ��� ����� ������ ��)

	// ���� �Է��� ���ڰ� �Ҽ����� �ƴ��� �Ǻ��ϴ� ���α׷�
	// 5 -> �Ҽ�
	// 6 -> �Ҽ��� �ƴϴ�

	int value;
	int count = 0;
	scanf_s("%d", &value);

	for (int i = 2; i <= value - 1; i++)
	{
		if (value % i == 0)
		{
			count++;
		}
	}

	if (count == 0)
	{
		printf("�Ҽ�");
	}
	else
	{
		printf("�Ҽ��� �ƴմϴ�");
	}
}


