#include <stdio.h>

struct Object
{
	// ����ü�� ���� �س��� ���´� �޸𸮰� �������� �ʽ��ϴ�	
	short size; // 2 byte
	int height; // 4 byte
	double position; // 8 byte
};

struct Data
{
	int x; // 4 byte
	int y; // 4 byte
};

struct Data
{
	int x;
	int y;
};

struct Shape
{
	char name[10];
	double size;
};

struct Animal
{
	int leg;
	const char* name;
};


int main()
{
	// ����Ʈ �е�
	/*
	// ����ü�� ��� �������־�� ��� ������ �޸𸮰� ����Ƿ�
	// ��� ������ �����͸� �ʱ�ȭ�� �� �ֽ��ϴ�
	struct Object character = { 10,300,3.5f };
	struct Data data = { 10,10 };
	// ����ü ũ���� ��� ��� ������ ������ ���� �޸��� ũ�Ⱑ
	// �ٸ��� ������ �� ������, ����ü�� ũ�⸦ �����ϴ� ���´�
	// �⺻ �ڷ������θ� �����ȴ�
	struct Monster dragon = { 100,30.5f,10 };


	printf("Data ����ü�� ũ�� : %d\n", sizeof(data));
	printf("Object ����ü�� ũ�� : %d\n", sizeof(character));
	printf("dragon ����ü�� ũ�� : %d\n", sizeof());

	// ����Ʈ �е�
	// ��� ������ �޸𸮿��� CPU�� ���� �� �� ���� ���� �� �ֵ���
	// �����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ�� �е� ���ִ� ����ȭ �۾�

	// align ��Ģ
	// CPU�� �����͸� ���� ��
	// Ȧ�� (x) 3 byte, 5 byte / ¦�� (o) 2 byte 4 byte 8 byte
	// 32bit OS������ 4 byte�� �޸𸮸� �а�, 64bit OS������ 8 byte�� �޸𸮸� �н��ϴ�

	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿�
	// ũ�Ⱑ ���� ū �ڷ����� ����� �ǵ��� �����մϴ�
	*/

	// ����ü ������
	// ����ü�� ����Ű�� ������

	// ����ü ������ ����
	struct Animal* pointer;

	struct Animal cat;
	printf("����ü cat�� �ּ� : %d\n", &cat);

	return 0;
}

