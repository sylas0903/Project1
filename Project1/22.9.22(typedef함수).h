#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// Typedef
/*
// �̹� ���Ǵ� �ڷ����� �ٸ� ���ο� �ڷ������� �������� �� �ֵ��� ���ִ� Ű����
typedef int INT32; // int == INT32


typedef struct _Player
{
	int x;
	int y;
	char name[20];
	const char* shape;

}Player;
*/


int main()
{
	// typedef
	/*
	int a = 10;
	INT32 b = 20;

	printf("a�� �� : %d\n", a);
	printf("b�� �� : %d\n", b);

	Player player;

	char nickname1[] = { "jason" };

	strcpy(player.name, "jason");

	printf("player�� �̸� : %s", player.name);
	*/

	// ��
	/*
	// �Է°� n�� �־�������, 1���� n������ ���� ���ϴ� ���α׷�

	int a = 0; // �Է��� n ����
	int result = 0; // �����ؼ� ���� ����ϴ� ����

	printf("n�� �Է��� �ּ���");

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		result += i;
	}
	printf("result�� ��: %d", result);
	*/

	// c ��� ���� ���߷�
	/*
	// ù ��°
	// ���ͳݿ� ���� �ڷḦ �˻��ؼ� �ڱⰡ ���ϴ� �ڵ带 ���� �װ� �����ؼ� �����ؾ��Ѵ�

	// �� ��°
	// ������� ������ ���־���Ѵ�
	// 1. ����
	// 2. ������ �´� ������� �����ְ� ����
	*/

	// �������� �� ���

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5 - i; j++)
		{
			printf("  ");
		}

		for (int k = 1; k <= i; k++)
		{
			printf("��");
		}

		printf("\n");
	}








	return 0;
}

