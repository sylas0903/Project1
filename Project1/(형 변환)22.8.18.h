#pragma once
#include <stdio.h>

void main()
{
	// ������
	/*
	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d x %d = %d\n", i , j , i * j );
		}

		printf("\n");
	}
	*/

	// while ��
	/*
	// Ư�� ������ ������ ������ ����ؼ� �־��� ��ɹ��� �����ϴ� �ݺ���

	int memory = 5;

	while (memory > 1)
	{
		memory--;
		printf("������ ���Դϴ�.\n");
		break;
	}
	*/

	// do while ��
	/*
	// ���ǰ� ������� �� ���� �۾��� ������ ���� ���ǿ� ���� ��ɹ��� �����ϴ� �ݺ���

	int value = 5;

	do
	{
		printf("������ �����Դϴ�");
		while (value == 10);
	}
	*/

	// continue ��
	/*
	// �ش� ���ǹ��� �������� �ʰ�, �ݺ����� �̾ �����ϴ� ���

	for (int i = 0; i < 5; i++)
	{
		if (i % 3 == 0)
			continue;
		printf("%d ", i);
	}
	*/

	// �� ��ȯ
	// ���� �ٸ� �ڷ����� ������ �ִ� �������� ������ �̷���� ��
	// ������ �����ߴ� �ڷ����� �ٸ� �ڷ������� ��ȯ�ϴ� ���� 

	// C������ ������ ������ �����ϰ� �Ǹ� ������ ������ ���� ���� �� �ִ�

	// �Ϲ��� �� ��ȯ
	/*
	// ���� �ٸ� �ڷ������� ������ �̷���� �� �ڷ����� ũ�Ⱑ ū �ڷ������� ��ȯ�Ǵ� ����

	printf("char�� ũ�� : %d\n", sizeof(char));
	printf("short�� ũ�� : %d\n", sizeof(short));
	printf("int�� ũ�� : %d\n", sizeof(int));
	printf("float�� ũ�� : %d\n", sizeof(float));
	printf("long�� ũ�� : %d\n", sizeof(long));

	// int��long�� ����
	// int�� 32��Ʈ �ü���� 64��Ʈ �ü�������� 4 byte�� ũ�⸦ ������
	// long�� 32��Ʈ �ü�������� 4 byte�̰� 64��Ʈ �ü�������� 8 byte�� ũ�⸦ ������

	// ��, �������� 64��Ʈ �ü�������� 4 byte �̴�


	char x = 10;
	short y = 20;

	//  30  =  4 byte(int) + 4 byte(int)
	int sum = x + y;

	int z = 500; // 4 byte
	char temp = z; // 1 byte

	printf("temp�� �� : %d\n", temp);

	// ����� �� ��ȯ
	int p0 = 10;
	int p1 = 3;

	float result = (float)p0 / p1;
	printf("result�� �� : %f\n", result);
	*/


}