#include <stdio.h>


void CallByValue(int x)
{
	x = 100;
	printf("�Լ� ������ �� : %d\n", x);
}

void CallByReference(int* x)
{
	*x = 100;
}


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
	/*
	int variable = 10;
	int variable2 = 20;

	// const�� �ڷ��� * �տ� ���� �Ǹ� �������� �޸� ������ ���ȭ�Ѵ�
	int* const pointer = &variable;

	// pointer = &variable2;

	printf("pointer ������ ����Ű�� �� : %d", *pointer);

	// pointer : ������ ������ü(�޸� �ּҸ� ������ ���� ���)
	// *pointer : �����Ͱ� ����Ű�� �޸� ������ ���� ���

	*pointer = 30;
	variable = 50;
	*/

	// ��� ���� ������
	/*
	int data = 10;
	int data2 = 20;

	const int* pointer = &data;

	pointer = &data2;

	// ��� ���� �����ʹ� ����Ű�� ������ ������ ���ȭ�ϴ� ���̰�,
	// ����Ű�� �ִ� �޸𸮴� ���ȭ�� ��Ű�°��� �ƴϴ�
	data2 = 30;

	// *pointer = 1000;

	// string -> [H][e][l][l][o][\0]
	// OS read only Data ������ ������ �� ������ �����߱� ����
	const char* string = "Hello";

	// *string = 'A'
	string = "LOL";
	*/

	// scanf �Լ� ���� �Է�
	/*

	int value = 0;
	int value2 = 0;

	// �������� �Է¹������� %d ��� ���� �����ڸ� ����ؾ��Ѵ�
	 scanf_s("value:%d,value2:%d",&value, &value2); // call by Reference �ϰ� �Ǹ� <- ���ο����� ���� ��ȭ
	 printf("value�� �� : %d, value2�� �� : %d", value, value2);
	 */

	 // scanf �Լ� �迭 �Է�
	 /*
	 char name[10];

	 // �迭�� ũ��� ������ ������ ũ�Ⱑ ��������
	 // �迭�� ũ�⸦ ��������� scanf_s()�Լ����� �˷��־���Ѵ�
	 scanf_s("%s", name, sizeof(name));

	 printf("%s", name);
	 */

	 // ���� ���� ���ް� ������ ���� ����
	 /*
	 printf("value ������ �� : %d\n", value); // call by Reference�� �ϰ� �Ǹ� �Լ��� ����Ǵ��� ��ȭ�� ������ �״�� ����

	 CallByValue(value);
	 printf("value ������ �� : %d\n", value);


	 CallByReference(&value);

	 printf("value ������ �� : %d\n", value);
	 */

	 // ���� �ð�
	 /*

	 int hour;
	 int minute;
	 int plus;

	 printf("���� �ð��� �Է����ּ���\n");
	 scanf_s("%d%d%d", &hour, &minute, &plus);


	 if (hour >= 0 && hour <= 23 && minute + plus >= 0 && minute + plus <= 59)
	 {
		 printf("�丮 �ϼ� �ð��� %d�� %d�� �Դϴ�", hour, minute + plus);
	 }
	 else if (hour + ((minute + plus) / 60) == 24)
	 {
		 printf("�丮 �ϼ� �ð��� 0�� %d�� �Դϴ�", minute + plus - 60);
	 }
	 else if ((minute + plus) % 60 == 0)
	 {
		 printf("�丮 �ϼ� �ð��� %d�� 0�� �Դϴ�", hour + ((minute + plus) / 60));
	 }
	 else if (minute + plus > 59)
	 {
		 (minute + plus) / 60;
		 hour + ((minute + plus) / 60);

		 printf("�丮 �ϼ� �ð��� %d�� %d�� �Դϴ�", hour + ((minute + plus) / 60), (minute + plus) / 60);
	 };
	 */

	 




		return 0;
}



