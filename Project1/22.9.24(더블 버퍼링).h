#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <windows.h>

// 더블 버퍼링
// 싱글 버퍼링으로 화면을 그릴 경우 데이터를 저장하는 동안에는 다음 그림의
// 데이터를 전송할 수 없기 때문에 (화면)를 지우고 그리고를 반복할 경우
// 깜빡임을 막기 위해 화면을 서로 교체하는 기법


// 버퍼의 가로 길이
#define BufferWidth 80

// 버퍼의 세로 길이
#define BufferHeight 40

// HANDLE 인덱스에 접근해서 버퍼를 교채시켜줄 변수
int screenIndex = 0;

// 버퍼를 2개 생성
HANDLE Screen[2];

// Player 구조체 선언
struct Player
{
	int x;
	int y;
	const char* shape;
};

// 구조체 포인터 선언
Player* player;

// 버퍼를 초기화하는 함수
void ScreenInit()

{
	CONSOLE_CURSOR_INFO cursor;
	COORD size = { BufferWidth, BufferHeight };
	SMALL_RECT rect = { 0,0,BufferWidth - 1, BufferHeight - 1 };

	// 화면 2개를 생성

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

	// 커서 숨기기
	// false : 거짓 
	// true : 참
	cursor.dwSize = 1;
	cursor.bVisible = false;
	SetConsoleCursorInfo(Screen[0], &cursor);
	SetConsoleCursorInfo(Screen[1], &cursor);
}


// 버퍼를 교체하는 함수

void ScreenFlipping()
{
	// 버퍼는 하나만 활성화시킬 수 있다
	SetConsoleActiveScreenBuffer(Screen[screenIndex]);
	//  참 <- 거짓
	// 거짓 <- 참

	screenIndex = !screenIndex;
}


// 버퍼를 지우는 함수
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

// 버퍼를 해제하는 함수
void ScreenRelese()
{
	CloseHandle(Screen[0]);
	CloseHandle(Screen[1]);
}

// 출력하는 함수
void ScreenPrint(int x, int y, const char* string)
{
	COORD cursorPosition = { x,y };
	DWORD dw;

	SetConsoleCursorPosition(Screen[screenIndex], cursorPosition);
	WriteFile(Screen[screenIndex], string, strlen(string), &dw, NULL);
}




int main()
{
	// Player 생성
	player = (Player*)malloc(sizeof(Player));
	player->x = 5;
	player->y = 5;
	player->shape = "☆";

	ScreenInit(); // 1. 버퍼 초기화

	while (1)
	{
		if (GetAsyncKeyState(VK_RIGHT))
		{
			player->x++;
			Sleep(100);
		}
		ScreenPrint(player->x, player->y, player->shape);
		ScreenFlipping(); // 2. 버퍼 교체
		ScreenClear(); // 3. 교체된 버퍼는 내용을 삭제
	}

	ScreenRelese(); // 게임이 종료되었을 때 버퍼 해제








	return 0;
}


