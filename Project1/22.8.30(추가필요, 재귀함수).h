#include <stdio.h>
#include <time.h>

int Function(int count)
{
	if (count == 1)
	{
		return 1;
	}

	// ��� ȣ��(count -1)

	Function(count - 1);

	printf("count ������ �� : %d\n", count);

}

int Factorial(int number)
{
	if (number == 1)
	{
		return 1;
	}
	else
	{
		return number* Factorial(number - 1);
	}
}

void main()
{
	// ���� ������
	/*
	// 3���� �ǿ����ڸ� ������ ���� ������
	int x = 10;
	int y = 20;

	// (����) ? (100) : (200)
	//            ��     ����
	int temp = x == y ? 100 : 200;

	printf("temp ������ �� : %d", temp);
	*/

	// ��� �Լ�
	/*
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾��� �����ϴ� �Լ�

	Function(3);

	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������
	// ���� ������ �޸𸮰� ��� ���̰� �ǹǷ� ���� �����÷ο찡 �Ͼ�� �ȴ�

	// ��� �Լ��� ����Ϸ��� Ư���� �������� �Լ��� ��ȯ���־�� �Ѵ�
	*/

	// ���丮��
	// �Լ��� �����ؼ� �Ű� ������ n���� �ִ´�
	// n�� ���� ���� ���丮���� �����ּ���

	int select = 3;

	int result = Factorial(select);
	
	printf("result ������ �� : %d", result);




}