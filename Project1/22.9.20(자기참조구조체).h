#include <stdio.h>
#include <string.h> // ���ڿ� ���� �Լ�



// �ڱ� ���� ����ü
/*
struct Node
{
	int data;
	struct Node* pointer; // <- ����ü�� ����ų�� �ֵ��� �ϴ� �����ͺ���
};
*/


int main()
{
	// �ڱ� ���� ����ü
	/*
	// �ڽŰ� ������ ����ü�� ����ų �� �ִ� ������ ������
	// ��� ������ ������ ����ü
	// NULL�� �����Ͱ� �ƹ�	��ġ�� ����Ű�� �ʵ��� �ʱ�ȭ

	struct Node node1 = { 10,NULL };
	struct Node node2 = { 20,NULL };
	struct Node node3 = { 30,NULL };


	struct Node* structPtr = &node1;
	structPtr->data;
	printf("ù ��° ����ü data�� �� : %d\n", structPtr->data);

	structPtr->pointer = &node2;

	// structPtr->pointer->pointer�� �ƴ�
	// structPtr->pointer�� �ص� ���� ��Ȯ�ϰ� �����µ� �������� �����ΰ�
	// '�ι�° ������ ����� �ȴ�'
	printf("�� ��° ����ü data�ǰ� : %d\n", structPtr->pointer->data);

	structPtr->pointer->pointer = &node3;
	printf("�� ��° ����ü data�ǰ� : %d\n", structPtr->pointer->pointer->data);
	*/

	// ���ڿ� �Լ�
	// strlen - (���ڿ��� ���̸� ����ϴ� �Լ�)
	char name[] = { "bob" };

	printf("name�� ���� : %s\n", name);


	// strlen() �Լ��� ���ڿ��� ���̸� ���� �� NULL���� ������ ���ڿ� ���̸� ����Ѵ�
	// printf("name�迭�� ���� : %d\n", strlen(name));


	// strcpy - (���ڿ��� �����ϴ� �Լ�)
	char A[10] = { "LEAGUE" };
	char B[10] = { "LEGEND" };

	// read only ������ �ִ� ���ڿ� ���ͷ��̱� ������ ���� ������ �� ����
	const char* C = "Player";
	const char* D = "Monster";;

	/*
	// A �� B�� ���ڿ��� �����ּҸ� �ǹ�

	A[0] = B[0];
	A[1] = B[1];
	A[2] = B[2];
	A[3] = B[3];
	A[4] = B[4];
	A[5] = B[5];

	int i = 0;
	while (A[i]) // NULL���ڴ� 0�� �ǹ��ϱ� ������
	{
		A[i] = B[i];
		i++;
	} // while���� ���� false�� ����˴ϴ�

	printf("A�� ���ڿ� : %s", A);
	*/

	// strcpy()�Լ��� ù ��° �Ű������� ������� ���ڿ�
	// strcpy()�Լ��� �� ��° �Ű������� ũ��
	// strcpy()�Լ��� �� ��° �Ű������� ������ ���ڿ�

	strcpy_s(A, 10, B);
	printf("������ A ���ڿ��� �� : %s", A);

	// strcmp - (���ڿ��� ���ϴ� �Լ�)
	// strcat - (���ڿ��� �����ϴ� �Լ�)





	return 0;
}
