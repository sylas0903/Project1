#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <mmsystem.h>

#pragma comment(lib,"winmm.lib")



enum textColor
{
	BLACK,
	BLUE,
	GREEN,
	SILVER,
	RED,
	OFTEN,
	YELLOW,
	WHITE,
	GRAY
};

void CursorActive()
{
	CONSOLE_CURSOR_INFO cursor;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);

	// .bVisible = Ŀ�� ���� ���ο� ���� ����
	// 0�� �� ���콺 Ŀ�� ��Ȱ��ȭ
	// 1�� �� ���콺 Ŀ�� Ȱ��ȭ
	cursor.bVisible = 0;

	// SetConsoleCursorInfo = �����Ǿ� �ִ� �ܼ� ��ũ�� ���ۿ� ���Ͽ� Ŀ���� ���¸� �����ϴ� �Լ��̴�
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
}


int main()
{
	// ���� ����
	/*
	// fopen ()
	// ù ��° �Ű����� : �ؽ�Ʈ ������ �̸�
	// �� ��° �Ű����� : �ؽ�Ʈ ������ ����� ��� (read / write)
	FILE* filePointer = fopen("data.txt", "w");

	// fputs : ���Ͽ� ���ڸ� �ϳ��� ���� �Լ��̴�.
	fputs("ü��\n", filePointer);
	fputs("����\n", filePointer);
	fputs("���ݷ�\n", filePointer);

	// ������� ������ �ݾ��ݴϴ�
	fclose(filePointer);
	*/

	// ���� �б�

	FILE* readPointer = fopen("dragon.txt", "r");

	// text ������ ���� �����͸� ���� �� �ִ� ���۸� �����Ѵ�
	char buffer[10000] = { 0, };

	// ù ��° �Ű����� : �б� ���� ���� �迭�� ����
	// �� ��° �Ű����� : ũ�⸦ ������ �迭�� ����Ű�� ������
	// �� ��° �Ű����� : �о���� ������ ũ��� ������ ����Ʈ�̴�
	// �� ��° �Ű����� : �����͸� �Է¹��� ��Ʈ���� FILE ��ü�� ����Ű�� ������
	fread(buffer, 1, 10000, readPointer);

	printf("%s", buffer);

	fclose(readPointer);


	// ǥ��
	/*
	// ����� 1 byte�� ǥ���Ѵ�
	// 0 ~ 255 (256)������ �����͸� ǥ���� �� �ִ�
	// ����� �ƽ�Ű �ڵ� ü��
	char array[] = "Hello";

	// �ѱ��� 2 byte�� �����͸� ǥ���Ѵ�
	// �ʼ� 19��, �߼� 21��, �߼� 28�ڷ� �̷������ 11172�ڸ� ǥ���ϰ� �ȴ�
	// �ѱ��� �����ڵ� ü��
	char korean[] = "�ȳ��ϼ���";
	*/

	// SetConsoleTextAttribute : �ؽ�Ʈ�� ������ �ٲ��ִ� �Լ�
	// 0 = ������
	// 1 = �Ķ���

	CursorActive();

	// ���� ȣ��

	PlaySound(TEXT("Sound.wav"), 0, SND_FILENAME | SND_ASYNC | SND_LOOP);

	while (1)
	{

	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);


	return 0;
}



