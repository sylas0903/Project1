#include <stdio.h>

void main()
{
	// ������ �迭
	/*
	// �迭�� ��ҷ� ������ ������ ������ �迭

	int num1 = 10, num2 = 20, num3 = 30;
	int* array[3] = { &num1,&num2,&num3 };

	for (int i = 0; i < 3; i++)
	{
		printf("array �������� �� : %p\n", array[i]);
		printf("array �����Ͱ� ����Ű�� �� : %d\n", *array[i]);
	}

	const char* data[3] = { "Apple","Banana","Melon" };

	// data[0] = 'A' ���ο� A��� ���ڿ��� ���� �ּҸ� ����Ų�� ������ �����Ǵ� Apple�� ������ �����
	// *data[0] = 'A' only read datasegament�� �־� ���� �Ұ���

	for (int i = 0; i < 3; i++)
	{
		// %s : '\0' ���ڸ� ������ �������� ��� ����ϴ� ���� ������
		printf("%s\n", data[i]);
	}
	*/

	// ASCII �ڵ�
	/*
	// �̱� ǥ��ȭ ��ȸ�� ������ ���� ��ȯ�� ǥ�� �ڵ�� ���� ���ĺ���
	// ����ϴ� ��ǥ���� ���� ���ڵ�

	if ('A' < 'B')
	{
		for (int i = 0; i < 26; i++)
		{
			char alphabet = 'A' + i;
			printf("%c\n", alphabet);
		}
	}
	*/

	// �����
	/*
	// (int) �� ���� ������ �Է¹޴´�
	// A ������ B ������ ����� ����� ���

	int a, b;

	scanf_s("%d%d", &a, &b);

	for (int i = 1; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("%d ", i);
		}
	}
	*/

	// ������
	/*
	// ¦�� ������
	// �ڱ� �ڽ��� ������ ���� ����� ������ ��
	// �ڱ� �ڽ��� �Ǵ� ���� ������ ���Ѵ�

	// 6 �Է� -> ������
	// 7 �Է� -> ������ x

	int value;
	int result = 0;

	scanf_s("%d", &value);

	for (int i = 1; i < value; i++)
	{
		if (value % i == 0)
		{
			result += i;
		}
	}

	if (value == result)
	{
		printf("������");
	}
	else
	{
		printf("�������� �ƴϴ�");
	}
	*/

}
