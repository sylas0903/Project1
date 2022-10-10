#pragma once
#include <stdio.h>

// �Լ��� ����
// ȣ���� �Լ��� �����Ϸ����� �̸� �˷��ִ� ����
// ���� �н� ������(o), ��Ƽ �н� ������

// ���ϱ� �Լ� (2���� �Ű������� ������)
// 2�� �μ��� ���� �־ ���Ǵ� ������� ���
// �Լ�(10,20) = 30

// ���� �Լ� (2���� �Ű� ������ ������)
// 2�� �μ��� ���� �־ ���Ǵ� ������� ���
// �Լ�(5,5) = 0

// ���� �Լ� (2���� �Ű� ������ ������)
// 2�� �μ��� ���� �־ ���Ǵ� ������� ���
// �Լ�(5,5) = 25

// ������ �Լ� (2���� �Ű� ������ ������)
// 2�� �μ��� ���� �־ ���Ǵ� ������� ���
// �Լ�(10,10) = 1

void Plus(int x, int y)
{
	printf("���ϱ� �Լ��� ��� : %d")
}






void Function(const char * name, void * value);

void Integer(int x)
{
	printf("Integer �Լ��� x �� : %d\n", x);
}

void Decimal(float x)
{
	printf("Decimal �Լ��� x �� : %f\n", x);
}

void Character(char x)
{
	printf("Character �Լ��� x �� : %c\n", x);
}

void main()
{
	// ����(void) ������
	/*
	// �ڷ����� �������� ���� ���·� ��� �ڷ����� ������ �� �ִ� ������
	int value = 10;

	void* ptr = &value;

	// ���� �����ʹ� �޸� �ּҿ� �����ؼ� ���� ������ �� ����
	// *ptr = 20; (x)
	*(int*)ptr = 20;

	printf("ptr�� ����Ű�� �� : %d\n", *(int*)ptr);

	// ���� �����ͷ� ������ �޸𸮿� �����Ϸ��� ���� �����Ͱ� ����Ű��
	// ������ �ڷ������� �� ��ȯ�� ���־�� �Ѵ�

	float decimal = 10.5;
	ptr = &decimal;
	*(float*)ptr = 20.5;
	printf("ptr�� ����Ű�� �� : %f\n", *(float*)ptr);
	*/

	// ���� �Լ��� �Է��ϴ� ������(����)�� ��µǷη� �ϰ� ���� ��
	// char(����) int(����) float(�Ǽ�)
	// Integer(50);
	// Character('A');
	// Decimal(10.5);

	int A = 10;
	float B = 99.6;
	char C = 'R';

	Function("int", &A);
	Function("float", &B);
	Function("char", &C);
		
	

}

// char * name ===> [i]nt
// void * value ===> A�� ���� �ּ�

void Function(const char* name, void* value)
{
	printf("%p\n", name); // name ������ �����ּ�
	printf("%s\n", name); // name ������ ���ڿ� int == int

	// if���� �񱳵Ǵ� ������ %s�� �����Ѵ�
	if (name == "int")
	{
		printf("%d\n", *(int*) value);

	}
	else if (name == "float")
	{
		printf("%f\n", *(float*)value);
	}
	else if (name == "char")
	{
		printf("%c\n", *(const char*)value);
	}
}
