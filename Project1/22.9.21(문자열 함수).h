#include <stdio.h>
#include <string.h>

void MYstrcat(char* str1, char* str2)
{
	// str1�� NULL���ڰ� �ƴ϶��
	while (*str1 != '\0')
	{
		// str1�� ����Ű�� �����͸� ������Ų��
		str1++;
	}

	// str1 (NULL)   str2 (G)
	// *str1 = *str2;

	while (*str1 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}




	// *str1++; // <- g -> (ar\0)
}

int main()
{
	// strcmp ���ڿ� �� �Լ�
	/*
	// ABCD vs ABTT

	char memory1[] = { "ABCD" };
	char memory2[] = { "ABCT" };
	char memory3[] = { "ABCC" };

	// strcmp�� ù��° ���ڿ��� ũ�Ⱑ ũ�ٸ� (+1)�� ��ȯ
	// �׷��� �ι�° ���ڿ��� ũ�Ⱑ ũ�ٸ� ����(-1)�� ��ȯ
	// ���࿡ �� ���� ���ڿ��� ũ�Ⱑ ���ٸ� 0�� ��ȯ
	printf("�� ���� ���ڿ��� ���� �� : %d\n", strcmp(memory1, memory2));
	printf("�� ���� ���ڿ��� ���� �� : %d\n", strcmp(memory1, memory3));

	// strcmp ���� ���� ������ �켱 ������ ����

	// strncmp : ù��° �Ű������� ���� ���ڿ�
	// strncmp : �ι�° �Ű������� ���� ���ڿ�
	// strncmp : ����° ���� ���ڿ��� ����

	// ABC == ABC = 0
	printf("�� ���� ���ڿ��� ���� �� : %d\n", strncmp(memory1, memory2, 3));
	*/

	// strcat ���ڿ� ���� �Լ�
	char name1[10] = { "Gar" };
	char name2[] = { "Dong" };

	// strcat���� ��쿡�� ������� ���ڿ��� ũ�⸦ �˳��� �������־�� �Ѵ�
	// name1 [G[[a][r][D][o][n][g][\0][ ][ ] <-
	// name2 [D[[o][n][g][\0]
	// strcat_s(name1,10,name2);
	// printf("name1�� ���ڿ� : %s", name1);


	MYstrcat(name1, name2);
	printf("%s", name1);





	return 0;
}