#include <stdio.h>


int main()
{
	// ����� ���� ����
	/*
	const int value = 10;
	
	printf("value ������ �� : %d", value);

	// value�� ���� const�� ���ȭ�Ǿ����Ƿ� �ٲ� �� ����
	// value = 20;

	// �ɺ��� ��� : �޸� ������ ������ �ִ� ��� ex) const int data;
	// ���ͷ� ��� : �޸� ������ ������ ���� ���� ��� ex) 10, "Count"
	*/

	// ������ ���
	int variable = 10;
	int variable2 = 20;

	// const�� �ڷ��� * �տ� ���� �Ǹ� �������� �޸� ������ ���ȭ�Ѵ�
	int* const pointer = &variable;

	// pointer = &variable2;

	printf("pointer ������ ����Ű�� �� : %d", *pointer);

	*pointer = 30;

	return 0;
}


