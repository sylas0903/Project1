#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <conio.h>
#include <time.h>


#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SPACE 4

void gLoop(int);
int keyControl();
void init();
void titleDraw();
void gotoXY(int x, int y);
int menuDraw();
void infoDraw();
int maplistDraw();
void drawMap(int*, int*);
void move(int*, int*, int, int, int*, int*);
void UI(int*, int*, int*);

char tempMap[16][56];

int main()
{
	init();
	while (1)
	{
		titleDraw();
		int menuCode = menuDraw();
		if (menuCode == 0)
		{
			int n = maplistDraw();
			if (n == 0)
			{
				gLoop(0);
			}
			else if (n == 1)
			{
				gLoop(1);
			}
		}
		else if (menuCode == 1)
		{
			infoDraw(); // 게임 정보
		}
		else if (menuCode == 2)
		{
			return 0; // 종료
		}
		system("cls");
	}


	return 0;
}



char map1[16][56] = {
	{"00000000000000000000000000000000000000000000000000000000"},
	{"0S110011111111111100001110111100000000000000111100000000"},
	{"00010010000000000000001000100111000000011111100000000000"},
	{"01110010111111000011111111100000000000000100000000000000"},
	{"01000010100001001110000000110000001111111111111001110000"},
	{"011111111000011110000000000100000L1000010000001001000000"},
	{"00000110000000010000000000010000010000011100001111000000"},
	{"000001100000011K1100000000010000010000000100000001100000"},
	{"00000010000000000000000000011111111111111000000000110000"},
	{"00000011111111111111111111100001000000100000000000010000"},
	{"00000000000010000000000000111101000000100000000011110000"},
	{"00000000000010000000000000010001000000111000000010000000"},
	{"00000000011110000000000001111001100000001000000011100000"},
	{"00000000000000000000000000000000000000000000001110010000"},
	{"000000000000000000000000000000000000000000000000111111E0"},
	{"00000000000000000000000000000000000000000000000000000000"},


};

char map2[16][56] = {
	{"00000000000000000000000000000000000000000000000000000000"},
	{"0S1100111111111111000011K0111100000000000000111100000000"},
	{"00010010000000000000001000100111000000011111100000000000"},
	{"0111111011L111000011111111100000000000000100000000000000"},
	{"010K0010100001001110000000L100000011111111111110011K0000"},
	{"01111111100001111001000000010000011000010000001001000000"},
	{"00000110000000010000100000010000010000011100001111000000"},
	{"00000110000001111K000100000100000L0000000100000001100000"},
	{"00000010000000000000001000011111111111111000000000110000"},
	{"000000111L1111111111111111100001000000100000000000010000"},
	{"00000000000010000000000000L11101000000100000000011110000"},
	{"00000000000010000000000000010001000000111000000010000000"},
	{"000000000K1110000000000001111001K00000001000000011100000"},
	{"000000000000000000000000000000000000000000000011100L0000"},
	{"000000000000000000000000000000000000000000000000L11111E0"},
	{"00000000000000000000000000000000000000000000000000000000"},


};


void drawMap(int* x, int* y)
{
	system("cls");
	int h, w;

	for (h = 0; h < 16; h++)
	{
		for (w = 0; w < 56; w++)
		{
			char temp = tempMap[h][w];

			if (temp == '0')
			{
				printf("#");
			}
			else if (temp == '1')
			{
				printf(" ");
			}
			else if (temp == 'S')
			{
				*x = w;
				*y = h;
				printf("@");
			}
			else if (temp == 'E')
			{
				printf("@");
			}
			else if (temp == 'K')
			{
				printf("&");
			}
			else if (temp == 'L')
			{
				printf("+");
			}

		}
		printf("\n");
	}

}

int maplistDraw()
{
	int x = 42;
	int y = 17;
	system("cls");
	printf("\n\n");
	gotoXY(x - 24, y - 8);
	printf("                     [  맵 선택  ] \n\n");
	gotoXY(x - 2, y);
	printf(">  보 통");
	gotoXY(x, y + 1);
	printf("어 려 움");
	gotoXY(x + 1, y + 2);
	printf("뒤 로");

	while (1)
	{
		int n = keyControl();
		switch (n)
		{
		case UP: {
			if (y > 17)
			{
				gotoXY(x - 2, y);
				printf(" ");
				gotoXY(x - 2, --y);
				printf(">");
			}
			break;
		}
		case DOWN: {
			if (y < 19)
			{
				gotoXY(x - 2, y);
				printf(" ");
				gotoXY(x - 2, ++y);
				printf(">");
			}
			break;
		}
		case SPACE: {
			return y - 17;
		}
		}
	}

}


void infoDraw()
{
	system("cls");
	printf("\n\n");
	printf("                         조작법 \n\n");
	printf("                     이동 : W,A,S,D \n");
	printf("                     선택 :  SPACE \n");
	printf("                SPACE바를 누를시 뒤로가기");

	while (1)
	{
		if (keyControl() == SPACE)
		{
			break;
		}
	}
}
int keyControl()
{
	char temp = _getch();

	if (temp == 'w' || temp == 'W')
	{
		return UP;
	}
	else if (temp == 'a' || temp == 'A')
	{
		return LEFT;
	}
	else if (temp == 's' || temp == 'S')
	{
		return DOWN;
	}
	else if (temp == 'd' || temp == 'D')
	{
		return RIGHT;
	}
	else if (temp == ' ')
	{
		return SPACE;
	}

}




void init()
{
	system("mode con cols=100 lines=30 | title ROCK");

	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO ConsoleCuror;
	ConsoleCuror.bVisible = 0;
	ConsoleCuror.dwSize = 1;
	SetConsoleCursorInfo(consoleHandle, &ConsoleCuror);

}


void titleDraw()
{
	printf("\n\n\n\n");
	printf("                     ===================================================   \n");
	printf("                     #########      ########       ########   ##     ###   \n");
	printf("                     #        #   ##        ##    ##          ##  ###      \n");
	printf("                     #        #   ##        ##   ##           ####         \n");
	printf("                     #########    ##        ##   ##           ####         \n");
	printf("                     ## ##        ##        ##   ##           ##  ##       \n");
	printf("                     ##   ##      ##        ##    ##          ##    ##     \n");
	printf("                     ##      ##     ########       ########   ##      ##   \n");
	printf("                     ===================================================   \n");

}

int menuDraw()
{
	int x = 42;
	int y = 17;
	gotoXY(x - 2, y);
	printf("> 게임시작");
	gotoXY(x - 2, y + 1);
	printf("  게임정보");
	gotoXY(x - 2, y + 2);
	printf("    종료 ");

	while (1)
	{
		int n = keyControl();
		switch (n)
		{
		case UP: {
			if (y > 17)
			{
				gotoXY(x - 2, y);
				printf(" ");
				gotoXY(x - 2, --y);
				printf(">");
			}
			break;
		}
		case DOWN: {
			if (y < 19)
			{
				gotoXY(x - 2, y);
				printf(" ");
				gotoXY(x - 2, ++y);
				printf(">");
			}
			break;
		}
		case SPACE: {
			return y - 17;
		}
		}
	}

}
void gotoXY(int x, int y)
{
	// x 와 y 좌표값을 설정한다
	COORD position = { x, y };

	// 좌표 위치를 이동시켜주는 함수
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

void move(int* x, int* y, int _x, int _y, int* key, int* playing)
{
	char mapObject = tempMap[*y + _y][*x + _x];

	if (mapObject == '1')
	{
		gotoXY(*x, *y);
		printf(" ");

		gotoXY(*x + _x, *y + _y);
		printf("*");

		*x += _x;
		*y += _y;
	}
	else if (mapObject == 'K')
	{
		*key += 1;
		tempMap[*y + _y][*x + _x] = '1';
		gotoXY(*x + _x, *y + _y);
		printf(" ");
	}
	else if (mapObject == 'L')
	{
		if (*key > 0)
		{
			*key -= 1;
			tempMap[*y + _y][*x + _x] = '1';
			gotoXY(*x + _x, *y + _y);
			printf(" ");

		}
	}
	else if (mapObject == 'E')
	{
		*playing = 0;
	}
}

void UI(int* x, int* y, int* key)
{
	gotoXY(3, 20);
	printf("현재 위치 : %02d, %02d", *x, *y);

	gotoXY(40, 20);
	printf("아이템");

	gotoXY(38, 22);
	printf("열쇠 : %d개", *key);


}

void gLoop(int mapCode)
{
	int x, y;
	int key = 0;

	int playing = 1;

	if (mapCode == 0)
	{
		memcpy(tempMap, map1, sizeof(tempMap));
	}
	else if (mapCode == 1)
	{
		memcpy(tempMap, map2, sizeof(tempMap));
	}
	drawMap(&x, &y);

	while (playing)
	{
		UI(&x, &y, &key);
		switch (keyControl())
		{
		case UP:
			move(&x, &y, 0, -1, &key, &playing);
			break;

		case DOWN:
			move(&x, &y, 0, 1, &key, &playing);
			break;

		case RIGHT:
			move(&x, &y, 1, 0, &key, &playing);
			break;

		case LEFT:
			move(&x, &y, -1, 0, &key, &playing);
			break;

		case SPACE:
			playing = 0;



		}

	}
	gotoXY(70, 7);
	printf(" 당신은 미로를");
	gotoXY(70, 8);
	printf("탈출 하셨습니다!!");
	Sleep(1500);

}