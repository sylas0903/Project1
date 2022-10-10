#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <windows.h>

// ���� ���۸�
// �̱� ���۸����� ȭ���� �׸� ��� �����͸� �����ϴ� ���ȿ��� ���� �׸���
// �����͸� ������ �� ���� ������ (ȭ��)�� ����� �׸��� �ݺ��� ���
// �������� ���� ���� ȭ���� ���� ��ü�ϴ� ���


// ������ ���� ����
#define BufferWidth 80

// ������ ���� ����
#define BufferHeight 40

// HANDLE �ε����� �����ؼ� ���۸� ��ä������ ����
int screenIndex = 0;

// ���۸� 2�� ����
HANDLE Screen[2];

// Player ����ü ����
struct Player
{
	int x;
	int y;
	const char* shape;
};

// ����ü ������ ����
Player* player;

// ���۸� �ʱ�ȭ�ϴ� �Լ�
void ScreenInit()

{
	CONSOLE_CURSOR_INFO cursor;
	COORD size = { BufferWidth, BufferHeight };
	SMALL_RECT rect = { 0,0,BufferWidth - 1, BufferHeight - 1 };

	// ȭ�� 2���� ����

	// Front Buffer
	Screen[0] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL, CONSOLE_TEXTMODE_BUFFER, NULL

	);

	SetConsoleScreenBufferSize(Screen[0], size);
	SetConsoleWindowInfo(Screen[0], TRUE, &rect);

	// Back Buffer
	Screen[1] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL, CONSOLE_TEXTMODE_BUFFER, NULL

	);

	SetConsoleScreenBufferSize(Screen[1], size);
	SetConsoleWindowInfo(Screen[1], TRUE, &rect);

	// Ŀ�� �����
	// false : ���� 
	// true : ��
	cursor.dwSize = 1;
	cursor.bVisible = false;
	SetConsoleCursorInfo(Screen[0], &cursor);
	SetConsoleCursorInfo(Screen[1], &cursor);
}


// ���۸� ��ü�ϴ� �Լ�

void ScreenFlipping()
{
	// ���۴� �ϳ��� Ȱ��ȭ��ų �� �ִ�
	SetConsoleActiveScreenBuffer(Screen[screenIndex]);
	//  �� <- ����
	// ���� <- ��

	screenIndex = !screenIndex;
}


// ���۸� ����� �Լ�
void ScreenClear()
{
	COORD coord = { 0,0 };
	DWORD dw;

	FillConsoleOutputCharacter
	(
		Screen[screenIndex],
		' ',
		BufferWidth * BufferHeight,
		coord,
		&dw
	);
}

// ���۸� �����ϴ� �Լ�
void ScreenRelese()
{
	CloseHandle(Screen[0]);
	CloseHandle(Screen[1]);
}

// ����ϴ� �Լ�
void ScreenPrint(int x, int y, const char* string)
{
	COORD cursorPosition = { x,y };
	DWORD dw;

	SetConsoleCursorPosition(Screen[screenIndex], cursorPosition);
	WriteFile(Screen[screenIndex], string, strlen(string), &dw, NULL);
}




int main()
{
	// Player ����
	player = (Player*)malloc(sizeof(Player));
	player->x = 5;
	player->y = 5;
	player->shape = "��";

	ScreenInit(); // 1. ���� �ʱ�ȭ

	while (1)
	{
		if (GetAsyncKeyState(VK_RIGHT))
		{
			player->x++;
			Sleep(100);
		}
		ScreenPrint(player->x, player->y, player->shape);
		ScreenFlipping(); // 2. ���� ��ü
		ScreenClear(); // 3. ��ü�� ���۴� ������ ����
	}

	ScreenRelese(); // ������ ����Ǿ��� �� ���� ����








	return 0;
}


