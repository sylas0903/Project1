#include <stdio.h> // ���̺귯�� ��� ������ ������ �� ���
#include "Calculator.h" // " "����� ���� ��� ������ �����ö� ��� 

// ��ũ�� 
/*
// ���α׷� ������ Ư���� �����Ͱ� ���ڿ��� ���ǵǰ� ó���Ǵ� ����

// ��ũ�δ� �ڷ����� �����Ƿ� �޸� ������ Ȯ�������� �ʴ´�
#define PI 3.14

// ��ũ�ο����� ;�� �ʿ� x

// ��ũ���� ����
// ������ ������ �� ������� ���� �ʴ´�

// ��ũ�� �Լ��� �ڷ����� �����Ƿ� �޸� ������ Ȯ������ �ʴ´�
#define Solution(x,y) x * y //  a+1�� x�� b+1�� y������ �� 1 + (1 * 2) + 1 = 4
*/
void main()
{
	// ��ó����
	/*
	// ���α׷��� �����ϵǱ� ������ ���α׷��� ���� ���� ó���ϴ� ����

	int result = Function(10, 20);
	printf("result ������ �� : %d\n", result);

	// ��ũ�� ������ ����̰�, �޸� ������ ���� ������ ���� ������ �� ����
	// PI = 3.45;

	int a = 1;
	int b = 2;

	printf("PI�� �� : %f\n", PI);
	printf("Solution �Լ��� ��� : %d\n", Solution(10 , 20));
	printf("Solution �Լ��� ��� : %d\n", Solution(a + 1, b + 1));
	*/

	// ���Ǻ� ������
	/*
	// ���ǿ� ���� �ڵ��� ���� �κ��� �������� ���θ� ������ �� �ִ�
	// ���Ǻ� �������� #endif�� ����ؼ� ������ �ȴ�

#if IOS
	// PC�� �˸´� Ű �Է�
	printf("�ȵ���̵� ����Դϴ�");
#elif ANDROID
	// ����Ͽ� �˸´� Ű �Է�
	printf("�� ��° �����Դϴ�");
#else
	printf("2���� ������ �� Ʋ���ϴ�");
#endif
	*/

	// ����ü
	/*
	// ���� ���� ������ �ϳ��� ��������	����ȭ�� ���� �ϳ��� ��ü�� �����ϴ� ��
	struct Character
	{
		int health;
		float weight;
		const char * name;
		// ����ü�� �����ϱ� ���� ����ü��
		// �޸� ������ �������� �����Ƿ�
		// ����ü ���ο� �ִ� �����͸� �ʱ�ȭ�� �� ����

	};
	struct Character yasuo;
	yasuo.health = 100;
	yasuo.name = "������ ����";
	yasuo.weight = 80.5f;

	printf("yasuo�� ü�� : %d\n", yasuo.health);
	printf("yasuo�� �̸� : %s\n", yasuo.name);
	printf("yasuo�� ������ : %f\n", yasuo.weight);

	// ����ü�� �ʱ�ȭ ����Ʈ�� ����� ����
	// ����ü ������ ����� ������ ������ ���ǵǾ�� �Ѵ�
	struct Character Zed = {50,80.5,"���� ���������"};
	printf("Zed�� ü�� : %d\n", Zed.health);
	printf("Zed�� �̸� : %s\n", Zed.name);
	printf("Zed�� ������ : %f\n", Zed.weight);
	*/

	// ���׼�
	/*
	// �ڿ��� �߿��� �ڱ� �ڽ��� ������ ���� �����
	// ��� ������ �� �ڱ� �ڽź��� �� Ŀ���� ���̴�.

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
	if (value < result)
	{
		printf("���׼�");
	}
	else
	{
		printf("���׼��� �ƴϴ�");
	}
	*/
}

