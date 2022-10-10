#include <stdio.h>
#include <Windows.h>

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SPACE 4


int keyControl();
void init();
void titleDraw();
void gotoXY(int x, int y);
int menuDraw();
void infoDraw();
int maplistDraw();
void drawMap();



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
				drawMap();
			}
			else if (n == 1)
			{
				printf("어려움 선택");
				Sleep(1000);
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

char map[16][56] = {
	{"00000000000000000000000000000000000000000000000000000000"},
	{"0S110011111111111100001110111100000000000000111100000000"},
	{"00010010000000000000001000100111000000011111100000000000"},
	{"01110010111111000011111111100000000000000100000000000000"},
	{"01000010100001001110000000110000001111111111111001110000"},
	{"01111111100001111000000000010000010000010000001001000000"},
	{"00000110000000010000000000010000010000011100001111000000"},
	{"00000110000001111100000000010000010000000100000001100000"},
	{"00000010000000000000000000011111111111111000000000110000"},
	{"00000011111111111111111111100001000000100000000000010000"},
	{"00000000000010000000000000111101000000100000000011110000"},
	{"00000000000010000000000000010001000000111000000010000000"},
	{"00000000011110000000000001111001100000001000000011100000"},
	{"00000000000000000000000000000000000000000000001110010000"},
	{"000000000000000000000000000000000000000000000000111111E0"},
	{"00000000000000000000000000000000000000000000000000000000"},


};


void drawMap()
{
	system("cls");
	int h, w;

	for (h = 0; h < 16; h++)
	{
		for (w = 0; w < 56; w++)
		{
			char temp = map[h][w];
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
				printf("0");
			}
			else if (temp == 'E')
			{
				printf("@");
			}

		}
		printf("\n");
	}
	Sleep(3000);
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
	char temp = getch();

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
	system("mode con cols=100 lines=30 | title 게임 제목");

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