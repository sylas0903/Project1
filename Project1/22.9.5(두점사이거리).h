#include <stdio.h> 
#include <math.h>  // ���� ���� �������

struct Player
{
	int x;
	int y;
};

struct Monster
{
	int x;
	int y;
};

void ParameterArray(int array[])
{
	for (int i = 0; i < 5; i++)
	{
		array[i] = 10;
	}
}


int main()
{
	/*
	// void main cs int main
	// int main() �Լ��� ������ �� ������ ���� �����ϰڴٴ� �ǹ�
	// �ü������ ���α׷��� ���� ������ �������ִ� ���̴�

	// 0�� �����ϰ� �Ǹ� ���α׷��� ���������� ������ ������ �����ϴ� ������ �Ǵ��Ѵ�
	// 0 �̿ܿ� ���� �����ϰ� �Ǹ� ������������ ����Ǵ� ������ �Ǵ��Ѵ�

	// void main() �Լ��� ������ �� �ƹ� ���� �������� �ʰڴٴ� �ǹ�
	*/

	// �� �� ������ �Ÿ�
	/*
	// character�� dragon�� �Ÿ�

	struct Player character = { 0,0 };
	struct Monster dragon = { 3,5 };

	--------------------------- ����
	character.x - dragon.x;
	printf("x�� ���� : %lf\n", sqrt(pow(character.x - dragon.x,2)));
	character.y - dragon.y;
	printf("y�� ���� : %lf\n", sqrt(pow(character.y - dragon.y, 2)));

	printf("character�� dragon�� ���� ")
	---------------------------------

	--------Ǯ��--------
	printf
	(
		"�� �� ������ �Ÿ� : %lf",
		sqrt(pow(character.x - dragon.x, 2)) + (pow(character.y - dragon.y, 2))
	);

	// ��Ʈ

	int value = 49;
	printf("��Ʈ 100�� �� : %lf\n", sqrt(value));

	// ����
	int variable = 10;
	printf("variable�� ������ : %lf\n", pow(variable, 2));
	*/


	// Lvalue vs Rvalue
	/*
	// Lvalue
	// ǥ���� ���Ŀ��� ������� �ʴ� ���̸�, �̸��� ���ϰ� �ִ� ����

	// Rvalue
	// ǥ���� ���Ŀ� ������� ���̸�, �ӽ� �����̴�

	// a,b <= Lvalue     // 10,20 <= Rvalue
	// Lvalue�� Rvalue�ε� ����� �� �ִ�
	int a = 10;
	int b = 20;

	// a + b : �ӽ� ����
	int result = a + b;

	// Lvalue�� ����� ����� �� ����
	// 10 = a;
	// a + b = 10;

	printf("result�� ������ �� : %d", result);

	// ���� ����, ���� ����
	// ���� �������� ��쿡�� Lvalue�� Rvalue�� ����� �� �ִ�
	// ���� �������� ��쿡�� Rvalue�θ� ����� �����ϴ�

	int x = 0;
	int y = 0;

	// ���� ����
	// ���� ������ ������ �ڱ� �ڽ�(����)�� ��ȯ�Ѵ�
	++y;

	// ���� ����
	// ���� ������ ������ ���纻�� ��ȯ�Ѵ�
	x++;
	*/
	// 0, ������ , ������ ���� 0 ó��
	int room[5] = { 0, };

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", room[i]);
	}


	// room�̶�� �̸��� �迭�� ���� �ּҸ� �ǹ��Ѵ�
	ParameterArray(room);

	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", room[i]);
	}





	return 0;
}



